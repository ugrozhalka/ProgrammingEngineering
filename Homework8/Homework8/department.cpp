#include "department.h"

string department::name() const
{
	return _name;
}

void department::name(string newName)
{
	_name = newName;
}

department& department::operator+=(const worker& newWorker)
{
	_workers.push_back(newWorker);
	return *this;
}

int department::get_number_of_workers() const
{
	return _workers.size();
}

double department::get_average_salary()
{
	double sum = 0;

	for (worker w : _workers)
		sum += w.salary();

	return sum / get_number_of_workers();
}

ostream& operator<<(ostream& os, const department& d)
{
	os << "Название отдела: " << d.name() << endl;

	int i = 1;
	for (worker w : d._workers)
	{ 
		os << "Работник №" << i << endl;
		os << w << endl;
		os << endl;
		i++;
	}

	return os;
}
