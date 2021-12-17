#pragma once

#include "Employee.h"

class Teseter : public Employee
{
private:
	string m_category;

public:
	Teseter();

	Teseter(int id, string name);

    void input() override;

	void show() override;
};

