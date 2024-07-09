#include "SimpleHouse.h"
#include <iostream>
#include <algorithm>

void SimpleHouse::ListHouseParts() const
{
	std::cout << "List of available features for simple house: " << std::endl;
	std::for_each(std::begin(m_houseParts), std::end(m_houseParts), [](const std::string& houseElement) {
		std::cout << "- " << houseElement << std::endl;
	});
}

void SimpleHouse::AddHouseElement(const std::string& houseElement)
{
	m_houseParts.emplace_back(houseElement);
}
