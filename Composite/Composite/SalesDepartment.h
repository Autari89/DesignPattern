#pragma once
#include "Department.h"
#include <vector>
#include <memory>

class SalesDepartment :
	public Department
{
public:
	SalesDepartment(const std::string& departmentName);
	void printDepartmentName() override;
	void addDepartment(std::unique_ptr<Department> department);

private:
	std::vector<std::unique_ptr<Department>> m_salesDepartments;
};

