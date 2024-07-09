#include "NationalSalesDepartment.h"
#include <iostream>

NationalSalesDepartment::NationalSalesDepartment(const std::string& departmentName)
	: Department(departmentName)
{
}

void NationalSalesDepartment::printDepartmentName()
{
	std::cout << m_departmentName << std::endl;
}
