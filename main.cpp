#include <iostream>

#include "Task.h"
#include "List.h"
#include <vector>
#include <string>

int main() {
    std::vector<Task> tasks;

    std::string name, desc, due_date;
    unsigned priority;

    std::cout << "Enter task name: ";
    std::getline(std::cin, name);
    std::cout << "Enter task description: ";
    std::getline(std::cin, desc);
    std::cout << "Enter due date (yyyy-mm-dd): ";
    std::getline(std::cin, due_date);
    std::cout << "Enter priority (1-5): ";
    std::cin >> priority;

    Task task1(name, "", "", 0);
    tasks.push_back(task1);

    Task task2;
    tasks.push_back(task2);

    List list1(tasks);
    list1.show_tasks();
    list1.delete_task();
    list1.show_tasks();


    return 0;
}
