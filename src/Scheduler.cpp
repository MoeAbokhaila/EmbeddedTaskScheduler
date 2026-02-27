#include "../include/Scheduler.h"

void Scheduler::addTask(const Task& task)
{
    tasks.push_back(task);
}

Task* Scheduler::selectNextTask()
{
    Task*selected =nullptr;
    int highestPriority=-1;

    for (auto& task : tasks)
    {
        if(task.getState()==TaskState::Ready && task.getPriority()>highestPriority)
        {
            highestPriority = task.getPriority();
            selected = &task;
        }
    
    }
    return selected;
}

void Scheduler:: start()
{
    while(true)
    {
        Task* next =selectNextTask();
        if (next!=nullptr)
        {
            next->run();
        } 
    }
}