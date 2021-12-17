#include "Teseter.h"

Teseter::Teseter()
	:Employee{}
{
}

Teseter::Teseter(int id, string name)
	: Employee{id, name }
{
}

void Teseter::input()
{
	cout << "I am Teseter " << '\n';

	Employee::input();

	cout << " Enter category : " ;
	getline(cin, m_category);
	
}

void Teseter::show()
{
	Employee::show();
	cout << "I am tester, I test software programms... " << '\n';
}
