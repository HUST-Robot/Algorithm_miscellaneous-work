#include "Global.h"
#include "Person.h"
#include "Student.h"
#include "Employee.h"

int main()
{
	
	Student student;
	Employee employee;

	// �л� 
	student.name = "�л��̸� �׽�Ʈ";
	student.stdStatus = 2;
	student.toString();
	
	// ���� 
	employee.name = "�����̸� �׽�Ʈ"; 
	employee.office = "�����а� ������";
	employee.toString();

	return 0; 

}