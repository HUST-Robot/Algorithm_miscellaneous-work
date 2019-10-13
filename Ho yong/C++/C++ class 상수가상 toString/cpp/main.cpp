#include "Global.h"
#include "Person.h"
#include "Student.h"
#include "Employee.h"

int main()
{
	
	Student student;
	Employee employee;

	// 학생 
	student.name = "학생이름 테스트";
	student.stdStatus = 2;
	student.toString();
	
	// 직원 
	employee.name = "직원이름 테스트"; 
	employee.office = "물리학과 행정실";
	employee.toString();

	return 0; 

}