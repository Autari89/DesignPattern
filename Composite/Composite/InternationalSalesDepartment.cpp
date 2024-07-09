#include "InternationalSalesDepartment.h"
#include <iostream>

InternationalSalesDepartment::InternationalSalesDepartment(const std::string& departmentName)
	: Department(departmentName)
{
}

void InternationalSalesDepartment::printDepartmentName()
{
	std::cout << m_departmentName << std::endl;
}
