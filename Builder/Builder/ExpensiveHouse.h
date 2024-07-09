#pragma once
#include <vector>
#include <string>

class ExpensiveHouse
{
private:
	std::vector<std::string> m_houseParts;

public:
	void ListHouseParts() const;
	void AddHouseElement(const std::string& houseElement);
};
