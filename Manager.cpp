#include "Manager.h"

Manager::Manager()
	:Employee{}
{
}

Manager::Manager(int id, string name)
	:Employee{id, name }
{
}

void Manager::input()
{
	cout << "I am manager  " << '\n';

	Employee::input();

	cout << " Emter years of experience : " << '\n';
	cin >> m_yoe;

	cin.ignore(100, '\n'); //ignore new line
}

void Manager::show()
{
	Employee::show();
	cout << "I am manager, I have " << m_yoe << " years of experience " << '\n';
}
