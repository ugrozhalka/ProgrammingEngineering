#pragma once

#include <iostream>
using namespace std;

// Работник
class worker
{
	// Имя работника
	string _name;

	// Зарплата работника
	double _salary;

	// Должность работника
	string _job;

public:
	// Конструктор
	worker(string n, double sal, string j) : _name(n), _job(j)
	{
		salary(sal);
	}

	// Возвращает имя работника
	string name() const;

	// Возвращает зарплату работника
	double salary() const;

	// Возвращает должность работника
	string job() const;

	// Устанавливает новое имя работнику
	void name(string);

	// Устанавливает новую зарплату работнику
	void salary(double);

	// Устанавливает новую должность работнику
	void job(string newJob);
};

// Перегруженная операция вывода информации о работнике в поток
inline ostream& operator<<(ostream& os, const worker& w)
{
	return os << "Имя: " << w.name() << "\nЗарплата: " << w.salary() << "\nДолжность: " << w.job();
}