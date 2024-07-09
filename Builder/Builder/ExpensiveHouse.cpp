#include "ExpensiveHouse.h"

#include <iostream>
#include <algorithm>

void ExpensiveHouse::ListHouseParts() const
{
	std::cout << "List of available features for Expensive house: " << std::endl;
	std::for_each(std::begin(m_houseParts), std::end(m_houseParts), [](const std::string& houseElement) {
		std::cout << "- " << houseElement << std::endl;
		});
}

void ExpensiveHouse::AddHouseElement(const std::string& houseElement)
{
	m_houseParts.emplace_back(houseElement);
}
