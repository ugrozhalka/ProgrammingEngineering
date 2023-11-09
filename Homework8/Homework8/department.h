#pragma once

#include "worker.h"
#include <vector>

// Отдел компании
class department
{
	// Название отдела
	string _name;

	// Работники компании
	vector<worker> _workers;

public:
	// Конструктор
	department(string n) : _name(n) {}

	// Возвращает название отдела
	string name() const;
	
	// Устанавливает новое название отдела
	void name(string);

	// Перегруженная операция += для добавления работника в отдел
	department& operator+=(const worker&);

	// Возвращает количество работников в отделе
	int get_number_of_workers() const;

	// Возвращает среднюю зарплату сотрудников данного отдела
	double get_average_salary();

	// Перегруженная операция вывода книжного магазина в поток
	friend ostream& operator<<(ostream&, const department&);
};