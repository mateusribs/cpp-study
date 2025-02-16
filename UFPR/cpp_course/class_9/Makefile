compilationParameters=-Wall
programName=class_9

all: $(programName)

$(programName): main.o Person.o Lecture.o Course.o ClassRoom.o Console.o Content.o
	g++ -o $(programName) main.o Person.o Lecture.o Course.o ClassRoom.o Console.o Content.o $(compilationParameters)

main.o: main.cpp
	g++ -c main.cpp $(compilationParameters)

Person.cpp: Person.hpp Person.cpp
	g++ -c Person.cpp $(compilationParameters)

Lecture.cpp: Lecture.hpp Lecture.cpp
	g++ -c Lecture.cpp $(compilationParameters)

Course.cpp: Course.hpp Course.cpp
	g++ -c Course.cpp $(compilationParameters)

ClassRoom.cpp: ClassRoom.hpp ClassRoom.cpp
	g++ -c ClassRoom.cpp $(compilationParameters)

Content.cpp: Content.hpp Content.cpp
	g++ -c Content.cpp $(compilationParameters)

Console.cpp: Console.hpp Console.cpp
	g++ -c Console.cpp $(compilationParameters)


clean: 
	rm -f *.o *.gch $(programName)