#pragma once
#include "Global.h"
using namespace std;


class Person 
{
public:
	string name;
	string addr;
	string phone;
	string email;

	Person();
	virtual ~Person();
	Person(string name, string addr, string phone, string email);
	
	virtual void toString() = 0 ; 

};