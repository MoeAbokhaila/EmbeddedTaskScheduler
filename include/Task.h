#pragma once

#include <functional>

enum class TaskState { Ready, Running, Waiting };

class Task {
public:
    Task(int id, int priority, std::function<void()> func);
    void run();
    void setState(TaskState newState);
    TaskState getState() const { return state; }
    int getPriority() const { return priority; }

private:
    int ID;
    int priority;
    TaskState state;
    std::function<void()> TaskFunction;
};
