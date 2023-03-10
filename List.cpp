//
// Created by kiubabuba on 09.03.23.
//
#include <iostream>
#include "List.h"
#include "Task.h"

void List::show_tasks() {
    std::cout << "Task List:\n";
    short i = 0;
    for (const auto& task : tasks) {
        ++i;
        std::cout << i << "." << std::endl;
        task.print_task();
    }
}

List::List(const std::vector<Task> &tasks) : tasks(tasks) {}

void List::delete_task() {
    std::cout << "Which task to delete?\n";
    int i = 0;
    std::cin >> i;
    if (i <= 0 && i > tasks.size()) {
        return;
    }

    tasks.erase(tasks.begin() + i - 1);
}
