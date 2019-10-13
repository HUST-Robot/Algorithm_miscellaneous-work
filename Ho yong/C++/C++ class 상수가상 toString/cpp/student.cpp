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
	cout << "Name : " << name << " " << "stdStatus is : " << stdStatus << endl;
}