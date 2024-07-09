#pragma once
#include <vector>
#include <string>

class SimpleHouse
{
private:
	std::vector<std::string> m_houseParts;

public:
	void ListHouseParts() const;
	void AddHouseElement(const std::string& houseElement);
};

