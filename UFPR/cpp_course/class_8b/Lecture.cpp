#include "Lecture.hpp"
#include "ClassRoom.hpp"
#include <string>
#include <iostream>
#include <map>

Lecture::Lecture(std::string name, Course& course)
	:name{name}, course{course}{
}

Lecture::Lecture(std::string name, Course& course, ClassRoom* classRoom)
	:name{name}, course{course} {
	this->setClassRoom(classRoom);
}

std::string Lecture::getName(){
	return name;
}

void Lecture::setName(std::string name){
	this -> name = name;
}

int Lecture::getWorkload(){
	return workload;
}

void Lecture::setWorkload(unsigned int workload){
	this -> workload = workload;
}

Person* Lecture::getProfessor() {
	return professor;
}

void Lecture::setProfessor(Person* prof) {
	this -> professor = prof;
}

std::string Lecture::getProfessorName() {
	return professor -> getName();
}

bool Lecture::addStudent(Person* student) {
	std::map<uint64_t, Person*>::iterator it;
	unsigned long studentCpf{student -> getCpf()};
	bool inserted;

	inserted = students.insert(std::pair <unsigned long, Person*> (studentCpf, student)).second;

	if (inserted) {
		std::cout << "Student added." << '\n';
	} else {
		std::cout << "Student CPF already exists." << '\n';
	}
	return inserted;
}

bool Lecture::removeStudent(Person* student) {
	std::map<uint64_t, Person*>::iterator it;

	it = students.find(student -> getCpf());

	if (it == students.end()) {
		std::cout << "Student not found." << '\n';
		return false;
	} else {
		students.erase(it);
		std::cout << "Student removed" << '\n';
		return true;
	}
}

bool Lecture::removeStudent(unsigned long cpf) {
	std::map<uint64_t, Person*>::iterator it;

	it = students.find(cpf);

	if (it != students.end()) {
		std::cout << "Student not found." << '\n';
		return false;
	} else {
		students.erase(it);
		std::cout << "Student removed" << '\n';
		return true;
	}
}

std::map<unsigned long, Person*>& Lecture::getStudents() {
	return students;
}

Course& Lecture::getCourse() {
	return course;
}

void Lecture::setClassRoom(ClassRoom* classRoom) {
	if (this->classRoom != nullptr) {
		this->classRoom->lectures.remove(this);
	}
	this->classRoom = classRoom;
	if (this->classRoom != nullptr) {
		this->classRoom->lectures.push_back(this);
	}
}

ClassRoom* Lecture::getClassRoom() {
	return this->classRoom;
}