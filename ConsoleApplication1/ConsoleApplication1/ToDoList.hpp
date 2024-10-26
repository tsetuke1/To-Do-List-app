#include "Task.hpp"


class ToDoList {

private:
	std::vector<Task> tasks;

public:
	void addTask(std::string& taskName);

	void viewTasks();

	void markTaskCompleted(int index);

	//void deleteTask(int taskNumber);

};
