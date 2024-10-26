#include "Task.hpp"
#include <vector>
#include <string>

void Task::markCompleted()
{
	completed = true;
}

std::string Task::getName()
{
	return name;
}

bool Task::isCompleted() 
{
	return completed;
}