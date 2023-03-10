//
// Created by kiubabuba on 09.03.23.
//
#include <string>
#include <utility>
#include <iostream>

#ifndef TO_DO_TASK_H
#define TO_DO_TASK_H


class Task {
    std::string task_name;
    std::string description;
public:
    Task(std::string taskName, std::string description, std::string dueDate,
         unsigned int priority);
    Task(){};

private:
    std::string due_date;
    unsigned priority{};

public:
    const std::string &getTaskName() const;

    void setTaskName(const std::string &taskName);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    const std::string &getDueDate() const;

    void setDueDate(const std::string &dueDate);

    unsigned int getPriority() const;

    void setPriority(unsigned int priority);

    void edit_task(std::string task, std::string desc, std::string date, unsigned prior);
    void mark_task();
    void print_task() const;
};


#endif //TO_DO_TASK_H
