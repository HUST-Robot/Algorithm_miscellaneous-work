#include "Employee.h"

Employee::Employee()
{
	office = "";
	salary = 0;
	hired = 0;
}
Employee::Employee(string office, const long salary, const int hired) :Person(name, addr, phone, email)
{

}
void Employee::toString()
{
	cout << "Employee class ";
	cout << "Naem : " << name << " " << "office Name : " << office << endl;
}
