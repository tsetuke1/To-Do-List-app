#include "ToDoList.hpp"


void ToDoList::addTask(std::string& taskName) 
{
	tasks.emplace_back(taskName);
}

void ToDoList::viewTasks()
{
	if (tasks.empty()) {
		std::cout << "No tasks available.\n";
		return;
	}

	for (size_t i = 0; i < tasks.size(); ++i) {
		std::cout << i + 1 << ". " << tasks[i].getName()
			<< (tasks[i].isCompleted() ? " (Completed)" : " (Pending)")
			<< std::endl;
	}
}

void ToDoList::markTaskCompleted(int index)
{
	if (index < 1 || index > tasks.size()) {
		std::cout << "Invalid task number.\n";
		return;
	}
	tasks[index - 1].markCompleted();
	std::cout << "Task marked as completed.\n";
}

/*void ToDoList::deleteTask(int taskNumber)
{
	
		if (tasks.empty()) 
		{
			cout << "No tasks to delete!" << endl;
			return;
		}
		cout << "Tasks:" << endl;
		for (int i = 0; i < tasks.size(); ++i)
		{
			cout << i + 1 << ". " << tasks[i].getName()
				<< endl;
		}
		cout << "Enter the task number to delete: ";
		cin >> taskNumber;
		if (taskNumber >= 1 && taskNumber <= tasks.size())
		{
			tasks.erase(tasks.begin() + taskNumber - 1);
			cout << "Task deleted successfully!" << endl;
		}
		else 
		{
			cout << "Invalid task number!" << endl;
		}
}*/