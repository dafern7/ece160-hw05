#include "Student.h"
#include <iostream>
#include <string>
#include <stdio.h>

Student::Student(std::string f, std::string l,
          int year, Major major) {
			  _first_name = f;
			  _last_name = l;
			  _grad_year = year; 
			  _major = major;
		  }
Student::~Student () {}


void Student::addGrade (float g) {
	_grades.push_back(g);
}

float Student::getGpa() {
	float sum;
	for (float &n : _grades) {
		sum += n;	
	}
	float size = _grades.size();
	return sum/size;
}	
/*std::string Student::majorString(Major m) {
	std::string ret;
	switch(m) {
		case  "EE":
		ret =  std::to_string(Major::EE);
		break;
		default: 
		std::cout << "Invalid Major" << std::endl;
	}
	return ret;
}
*/
void Student::printInfo(){
	std::cout << _last_name << "," << 
	_first_name << std::endl;
	std::cout << _grad_year << std::endl;
	std::cout << "GPA: " << getGpa() << std::endl;
}
