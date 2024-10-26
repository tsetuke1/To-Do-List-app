#ifndef Task_hpp
#define Task_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Task 
{

private:
	std::string name;
	bool completed;

public:
	Task(std::string name) : name(name), completed(false) {}

	void markCompleted();

	std::string getName();

	bool isCompleted();
};
#endif