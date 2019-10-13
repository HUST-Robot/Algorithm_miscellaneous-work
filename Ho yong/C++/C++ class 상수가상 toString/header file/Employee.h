#pragma once
#include "Global.h"
#include "Person.h"


class Employee : public Person
{
public :
	string office;
	long salary;
	int hired;

	Employee();
	Employee(string office, const long salary, const int hired);

	void toString(); 
};