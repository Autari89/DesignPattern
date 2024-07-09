#pragma once
#include <string>

class Department
{
protected:
	std::string m_departmentName;

public:
	Department(const std::string& departmentName) : m_departmentName(departmentName) {}
	virtual void printDepartmentName() = 0;
};

