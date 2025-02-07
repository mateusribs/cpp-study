#ifndef LECTURE_HPP
#define LECTURE_HPP

#include <string>
#include "Person.hpp"
#include "Course.hpp"

class Lecture{
	public:
		Lecture(std::string name, Course& course);

		std::string getName();
		void setName(std::string name);
		
		int getWorkload();
		void setWorkload(unsigned int workload);

		Person* getProfessor();
		void setProfessor(Person* prof);

		std::string getProfessorName();

		bool addStudent(Person* student);
		Person** getStudents();

		Course& getCourse();
		
	private:
		std::string name;
		unsigned short int workload{30};
		Person* professor{nullptr};
		Person* students[50]{};
		uint8_t studentsCounter{0};
		Course& course;

};

#endif
