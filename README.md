# Embedded Task Scheduler

A small C++ cooperative scheduler simulation that selects the highest-priority ready task. The example registers sensor, motor, and logging tasks.

## Build and run

Use a C++11-compatible compiler:

```sh
g++ -std=c++11 src/*.cpp -Iinclude -o scheduler
./scheduler
```

Stop the program with Ctrl+C. The scheduler runs continuously. A task that remains ready and has the highest priority can be selected repeatedly, so lower-priority tasks may not run; this is a simple simulation rather than a preemptive RTOS.

## Structure

- `include/`: task and scheduler interfaces
- `src/`: implementations and an example program
