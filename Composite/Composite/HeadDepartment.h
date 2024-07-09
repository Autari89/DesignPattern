#pragma once
#include "Department.h"
#include <vector>
#include <memory>

class HeadDepartment :
	public Department
{
public:
	HeadDepartment(const std::string& departmentName);
	void printDepartmentName() override;
	void addDepartment(std::unique_ptr<Department> department);

private:
	std::vector<std::unique_ptr<Department>> m_departments;
};

