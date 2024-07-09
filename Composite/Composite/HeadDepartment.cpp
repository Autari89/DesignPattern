#include "HeadDepartment.h"
#include "iostream"

HeadDepartment::HeadDepartment(const std::string& departmentName) : Department(departmentName) {}

void HeadDepartment::addDepartment(std::unique_ptr<Department> department)
{
	m_departments.push_back(std::move(department));
}

void HeadDepartment::printDepartmentName()
{
	std::cout << m_departmentName << std::endl;
	std::cout << "Head Department Children :" << std::endl;
	for (const auto& department : m_departments)
	{
		department->printDepartmentName();
	}
}
