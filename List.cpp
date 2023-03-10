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
    short i = 0;
    std::cin >> i;

    check_vector(i);

    tasks.erase(tasks.begin() + i - 1);
}

void List::mark_task() {
    std::cout << "Which task is done?\n";
    short i = 0;
    std::cin >> i;

    check_vector(i);

    done_tasks.push_back(tasks[i - 1]);
    tasks.erase(tasks.begin() + i - 1);
}

void List::show_marked_tasks() {
    std::cout << "Done tasks list:\n";
    short i = 0;
    for (const auto& task : done_tasks) {
        ++i;
        std::cout << i << "." << std::endl;
        task.print_done_task();
    }
}

void List::check_vector(short i) {
    if (i <= 0 && i > tasks.size()) {
        return;
    }
}
