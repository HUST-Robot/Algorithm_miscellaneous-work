#pragma once
#include "Global.h"
#include "Person.h"

using namespace std;

class Student : public Person
{
public:
	int stdStatus;
	Student();
	
	Student(string name, const int stdStatus); 
	void toString();
};