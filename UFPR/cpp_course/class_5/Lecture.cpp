#include "Lecture.hpp"
#include <string>
#include <iostream>

Lecture::Lecture(std::string lectureName)
	:name{lectureName} {
}

std::string Lecture::getName(){
	return name;
}

void Lecture::setName(std::string newName){
	name = newName;
}

int Lecture::getWorkload(){
	return workload;
}

void Lecture::setWorkload(unsigned int newWorkload){
	workload = newWorkload;
}

Person* Lecture::getProfessor() {
	return professor;
}

void Lecture::setProfessor(Person* prof) {
	professor = prof;
}

std::string Lecture::getProfessorName() {
	return professor -> getName();
}

bool Lecture::addStudent(Person* student) {
	if (student == nullptr) {
		return false;
	} else if (studentsCounter >= 50) {
		return false;
	}
	studentsCounter++;
	students[studentsCounter] = student;
	return true;
}

Person** Lecture::getStudents() {
	return students;
}