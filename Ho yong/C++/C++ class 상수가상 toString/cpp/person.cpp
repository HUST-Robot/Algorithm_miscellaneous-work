#include "Global.h"
#include "Person.h"

Person::Person()
{
	// �ʱ�ȭ �κ� 
	name = "";
	addr = "";
	phone = "";
	email = "";
}
Person::~Person()
{

}
Person::Person(string name, string addr, string phone, string email)// string addr, string phone, string email)
{
	this->name = name; 
	this->addr = addr;
	this->phone = phone;
	this->email = email;
}

