//
// Created by kiubabuba on 09.03.23.
//

#include "Task.h"

Task::Task(std::string task_name, std::string description, std::string due_date, unsigned priority) {
    this->task_name = std::move(task_name);
    this->description = std::move(description);
    this->due_date = std::move(due_date);
    this->priority = priority;
}

void Task::edit_task(std::string task, std::string desc, std::string date, unsigned prior) {
    this->task_name = std::move(task);
    this->description = std::move(desc);
    this->due_date = std::move(date);
    this->priority = prior;
}

void Task::print_task() const {
    std::cout << "Task Name: " << getTaskName() << "\n";
    std::cout << "Description: " << getDescription() << "\n";
    std::cout << "Due Date: " << getDueDate() << "\n";
    std::cout << "Priority: " << getPriority() << "\n\n";
}


const std::string &Task::getTaskName() const {
    return task_name;
}

void Task::setTaskName(const std::string &taskName) {
    task_name = taskName;
}

const std::string &Task::getDescription() const {
    return description;
}

void Task::setDescription(const std::string &desc) {
    Task::description = desc;
}

const std::string &Task::getDueDate() const {
    return due_date;
}

void Task::setDueDate(const std::string &dueDate) {
    due_date = dueDate;
}

unsigned int Task::getPriority() const {
    return priority;
}

void Task::setPriority(unsigned int prio) {
    Task::priority = prio;
}

void Task::print_done_task() const {
    std::cout << "\x1B[9m" << "Task Name: "  << getTaskName() << "\x1B[0m" << "\n";
    std::cout << "\x1B[9m" << "Description: "  << getDescription() << "\x1B[0m" << "\n";
    std::cout << "\x1B[9m" << "Due Date: " << getDueDate() << "\x1B[0m" << "\n";
    std::cout << "\x1B[9m" << "Priority: " << getPriority() << "\x1B[0m" << "\n\n";
}
