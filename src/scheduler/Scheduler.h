#ifndef SCHEDULER_H
#define SCHEDULER_H

class Scheduler {
public:
    Scheduler();
    ~Scheduler();
    void initialize();
    void schedule(int functionId);
};

#endif // SCHEDULER_H
