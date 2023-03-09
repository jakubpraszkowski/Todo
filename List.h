//
// Created by kiubabuba on 09.03.23.
//

#ifndef TO_DO_LIST_H
#define TO_DO_LIST_H

#include <vector>
#include "Task.h"

class List {
    std::vector<Task> tasks;

public:
    List(const std::vector<Task> &tasks);

    void show_tasks();
    void delete_task();
};


#endif //TO_DO_LIST_H
