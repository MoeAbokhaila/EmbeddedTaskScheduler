#pragma once

#include "Task.h"
#include <vector>

class Scheduler {
public:
    void addTask(const Task& task);
    void start();

private:
    Task* selectNextTask();
    std::vector<Task> tasks;
};
