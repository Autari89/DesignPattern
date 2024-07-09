#pragma once
#include "Department.h"

class InternationalSalesDepartment :
    public Department
{
public:
	InternationalSalesDepartment(const std::string& departmentName);
	void printDepartmentName() override;
};
