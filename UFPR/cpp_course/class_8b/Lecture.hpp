#ifndef LECTURE_HPP
#define LECTURE_HPP

#include <string>
#include <map>
#include "Person.hpp"
#include "Course.hpp"

class ClassRoom;

class Lecture{

	friend void addLecture(Lecture* lecture);

	public:
		Lecture(std::string name, Course& course);
		Lecture(std::string name, Course& course, ClassRoom* classRoom);

		std::string getName();
		void setName(std::string name);
		
		int getWorkload();
		void setWorkload(unsigned int workload);

		Person* getProfessor();
		void setProfessor(Person* prof);

		std::string getProfessorName();

		bool addStudent(Person* student);
		bool removeStudent(Person* student);
		bool removeStudent(unsigned long cpf);
		std::map<uint64_t, Person*>& getStudents();

		Course& getCourse();

		void setClassRoom(ClassRoom* classRoom);
		ClassRoom* getClassRoom();
		
	private:
		std::string name;
		unsigned short int workload{30};
		Person* professor{nullptr};
		std::map<uint64_t, Person*> students;
		uint8_t studentsCounter{0};
		Course& course;
		ClassRoom* classRoom{nullptr};
};

#endif
