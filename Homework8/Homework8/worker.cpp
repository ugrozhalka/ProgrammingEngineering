#include "worker.h"

string worker::name() const
{
	return _name;
}

double worker::salary() const
{
	return _salary;
}

string worker::job() const
{
	return _job;
}

void worker::name(string newName)
{
	_name = newName;
}

void worker::salary(double newSalary)
{
	if (newSalary < 0)
		throw invalid_argument("Incorrect salary");
	_salary = newSalary;
}

void worker::job(string newJob)
{
	_job = newJob;
}
