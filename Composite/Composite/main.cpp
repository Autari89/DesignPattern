// Composite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <memory.h>
#include "FinancialDepartment.h"
#include "SalesDepartment.h"
#include "HeadDepartment.h"
#include "NationalSalesDepartment.h"
#include "InternationalSalesDepartment.h"


int main()
{
	std::unique_ptr<FinancialDepartment> financialDepartment = std::make_unique<FinancialDepartment>("Financial department");
	std::unique_ptr<SalesDepartment> salesDepartment = std::make_unique<SalesDepartment>("Sales department");
	std::unique_ptr<InternationalSalesDepartment> internationalSalesDepartment = std::make_unique<InternationalSalesDepartment>("International Sales department");
	std::unique_ptr<NationalSalesDepartment> nationalSalesDepartment = std::make_unique<NationalSalesDepartment>("National Sales department");
	std::unique_ptr<HeadDepartment> headDepartment = std::make_unique<HeadDepartment>("Head department");

	salesDepartment->addDepartment(std::move(nationalSalesDepartment));
	salesDepartment->addDepartment(std::move(internationalSalesDepartment));

	headDepartment->addDepartment(std::move(salesDepartment));
	headDepartment->addDepartment(std::move(financialDepartment));

	headDepartment->printDepartmentName();

}

/*
* Composite is a structural design pattern that lets you compose objects into tree structures and then work with these structures as if they were individual objects.
* Using the Composite pattern makes sense only when the core model of your app can be represented as a tree.
* In this example we are modeling a company strucure using composite pattern
*                     Head Department
*                    /               \
*     Financial department          Sales Department
*                                   /              \
*                    National Sales Dep.          International Sales Dep
* 
* Then it is possible to access the name of the departments by simply asking the general interface (Head Department). It will be then this interface responsible to forward the
* request to the children nodes
*/
