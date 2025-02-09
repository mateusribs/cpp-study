compilationParameters=-Wall
programName=class_7

all: $(programName)

$(programName): main.o Person.o Lecture.o Course.o
	g++ -o $(programName) main.o Person.o Lecture.o Course.o $(compilationParameters)

main.o: main.cpp
	g++ -c main.cpp $(compilationParameters)

Person.cpp: Person.hpp Person.cpp
	g++ -c Person.cpp $(compilationParameters)

Lecture.cpp: Lecture.hpp Lecture.cpp
	g++ -c Lecture.cpp $(compilationParameters)

Course.cpp: Course.hpp Course.cpp
	g++ -c Course.cpp $(compilationParameters)

clean: 
	rm -f *.o *.gch $(programName)