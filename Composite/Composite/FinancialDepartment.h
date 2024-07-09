#pragma once
#include "Department.h"

class FinancialDepartment :
    public Department
{
public:
    FinancialDepartment(const std::string& departmentName);
    void printDepartmentName() override;
};

