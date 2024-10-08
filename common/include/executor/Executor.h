#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <string>

class Executor {
public:
    Executor();
    ~Executor();

    void initialize();
    void sendData(int functionId, const std::string &data);
    void scheduleTransfer(int functionId);
};

#endif // EXECUTOR_H
