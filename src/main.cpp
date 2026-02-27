#include "../include/Scheduler.h"
#include <iostream>

int main()
{
    Scheduler scheduler;
    Task sensorTask(1,3,[](){std::cout<<"reading..\n";});
    Task motorTask(2,2,[](){std::cout<<"controlling motor..\n";});
    Task logTask(3,1,[](){std::cout<<"logging data..\n";});

    scheduler.addTask(sensorTask);
    scheduler.addTask(motorTask);
    scheduler.addTask(logTask);

    scheduler.start();
    
    return 0;
}