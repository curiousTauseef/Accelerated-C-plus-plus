# Example Makefile
all: 
	g++ -Wall -o class_example class_example.cpp Student_info_class.cpp grade.cpp median.cpp
	g++ -Wall -o test_fish test_fish.cpp fish.cpp
	
class_example: class_example.o Student_info_class.o grade.o median.o 
	g++ -Wall -o class_example class_example.o Student_info_class.o grade.o median.o 

fish: test_fish.o fish.o
	g++ -Wall -o test_fish test_fish.o fish.o

clean:
	$(RM) test_fish class_example fish.o test_fish.o Student_info_class.o grade.o median.o class_example.o
