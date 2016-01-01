# Example Makefile
all: 
	g++ -Wall -o class_example class_example.cpp Student_info_class.cpp grade.cpp median.cpp
	
class_example: class_example.o Student_info_class.o grade.o median.o 
	g++ -Wall -o class_example class_example.o Student_info_class.o grade.o median.o 


clean:
	$(RM) Student_info_class.o grade.o median.o class_example.o
