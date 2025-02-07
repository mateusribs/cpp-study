#include "Lecture.hpp"
#include <string>
#include <iostream>

Lecture::Lecture(std::string name, Course& course)
	:name{name}, course{course}{
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

Course& Lecture::getCourse() {
	return course;
}