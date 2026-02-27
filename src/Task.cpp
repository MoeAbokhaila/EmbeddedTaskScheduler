#include "../include/Task.h"

Task::Task(int id, int priority, std::function<void()> func)
    : ID(id), priority(priority), state(TaskState::Ready), TaskFunction(func)
{
}

void Task::run()
{
    state =TaskState::Running;
    TaskFunction();
    state = TaskState::Ready;
}



void Task::setState(TaskState newState)
{
    state=newState;
}