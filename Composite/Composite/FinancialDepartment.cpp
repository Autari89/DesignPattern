#include "FinancialDepartment.h"
#include <iostream>

FinancialDepartment::FinancialDepartment(const std::string& departmentName)
	: Department(departmentName) {}

void FinancialDepartment::printDepartmentName()
{
	std::cout << m_departmentName << std::endl;
}
