# Embedded Task Scheduler (Mini RTOS Simulation)

## Overview

This project is a simple cooperative task scheduler written in C++.  
I built it to understand how embedded systems and RTOS kernels manage multiple tasks on a single CPU.

It registers tasks, assigns priorities, and continuously runs the highest-priority task that is ready.

## Features

- Task Control Block (TCB)
- Priority-based scheduling
- Cooperative multitasking
- Task states (Ready, Running, Waiting)

## Build

g++ src/*.cpp -Iinclude -o scheduler

## Run

./scheduler