#include "Task.hpp"
#include "ToDoList.hpp"
#include <iostream>
#include <vector>
#include <string>



int main() {
	ToDoList todoList;
	int input;
	std::string taskName;

	do {
		std::cout << "\nMenu:\n";
		std::cout << "1. New Task\n";
		std::cout << "2. View Task(s)\n";
		std::cout << "3. Mark Task as Completed\n";
		std::cout << "4. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> input;
		std::cin.ignore(); // This is to clear the input buffer

		switch (input) {
		case 1:
			std::cout << "Enter task name: ";
			std::getline(std::cin, taskName);
			todoList.addTask(taskName);
			break;
		case 2:
			todoList.viewTasks();
			break;
		case 3:
			int taskNumber;
			std::cout << "Enter task number to mark as completed: ";
			std::cin >> taskNumber;
			todoList.markTaskCompleted(taskNumber);
			break;
		case 4:
			std::cout << "Exiting the application.\n";
			break;
		default:
			std::cout << "Invalid choice, please try again.\n";
		}
	} while (input != 4);

	system("pause");
	return 0;
}
