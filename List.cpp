//
// Created by kiubabuba on 09.03.23.
//
#include <iostream>
#include "List.h"

void List::show_tasks() {
    std::cout << "Task List:\n";
    for (const auto& task : tasks) {
        std::cout << "Task Name: " << task.getTaskName() << "\n";
        std::cout << "Description: " << task.getDescription() << "\n";
        std::cout << "Due Date: " << task.getDueDate() << "\n";
        std::cout << "Priority: " << task.getPriority() << "\n\n";
    }

}

List::List(const std::vector<Task> &tasks) : tasks(tasks) {}

void List::delete_task() {

}
