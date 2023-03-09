//
// Created by kiubabuba on 09.03.23.
//

#include "Task.h"
#include <utility>

Task::Task(std::string task_name, std::string description, std::string due_date, unsigned priority) {
    this->task_name = std::move(task_name);
    this->description = std::move(description);
    this->due_date = std::move(due_date);
    this->priority = priority;
}

void Task::add_task(std::string task, std::string desc, std::string date, unsigned prior) {
    this->task_name = std::move(task);
    this->description = std::move(desc);
    this->due_date = std::move(date);
    this->priority = prior;
}

void Task::edit_task(std::string task, std::string desc, std::string date, unsigned prior) {
    this->task_name = std::move(task);
    this->description = std::move(desc);
    this->due_date = std::move(date);
    this->priority = prior;
}


void Task::mark_task() {}

void Task::show_tasks() {


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




