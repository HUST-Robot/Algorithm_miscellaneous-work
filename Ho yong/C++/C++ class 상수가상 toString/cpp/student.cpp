#include "Student.h"

Student::Student()
{
	name = "";
	stdStatus = 0; 
}
Student::Student(string name ,int stdStatus) :Person(name, addr, phone, email)
{
	
}

void Student::toString()
{
	cout << "student class "; 
	cout << "성함 : " << name << " " << "학년 : " << stdStatus << endl;
}