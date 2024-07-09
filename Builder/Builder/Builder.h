#pragma once
class Builder
{
public:
	virtual ~Builder() {}
	virtual void BuildWalls() const = 0;
	virtual void BuildRoof() const = 0;
	virtual void BuildWindows() const = 0;
	virtual void BuildGarage() const = 0;
	virtual void BuildPool() const = 0;
};
