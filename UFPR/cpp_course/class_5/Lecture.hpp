#ifndef LECTURE_H
#define LECTURE_H

#include <string>
#include "Person.hpp"

class Lecture{
	public:
		Lecture(std::string lectureName);

		std::string getName();
		void setName(std::string newName);
		
		int getWorkload();
		void setWorkload(unsigned int newWorkload);

		Person* getProfessor();
		void setProfessor(Person* prof);

		std::string getProfessorName();

		bool addStudent(Person* student);
		Person** getStudents();
		
	private:
		std::string name;
		unsigned short int workload;
		Person* professor{nullptr};
		Person* students[50]{};
		uint8_t studentsCounter{0};
};
#endif
