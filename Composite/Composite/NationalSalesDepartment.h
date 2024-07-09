#pragma once
#include "Department.h"

class NationalSalesDepartment :
    public Department
{
    public:
	NationalSalesDepartment(const std::string& departmentName);
	void printDepartmentName() override;
};

