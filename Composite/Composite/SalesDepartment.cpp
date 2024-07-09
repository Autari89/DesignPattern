#include "SalesDepartment.h"
#include <iostream>

SalesDepartment::SalesDepartment(const std::string& departmentName)
	: Department(departmentName) {}

void SalesDepartment::printDepartmentName()
{
	std::cout << m_departmentName << std::endl;
	std::cout << "Sales department Children:" << std::endl;
	for (const auto& department : m_salesDepartments)
	{
		department->printDepartmentName();
	}
}

void SalesDepartment::addDepartment(std::unique_ptr<Department> department)
{
	m_salesDepartments.push_back(std::move(department));
}

