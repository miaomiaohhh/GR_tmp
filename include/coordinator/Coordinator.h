#ifndef COORDINATOR_H
#define COORDINATOR_H

#include <string>

class Coordinator {
public:
    Coordinator();
    ~Coordinator();

    void initialize();
    void routeData(int functionId, const std::string &data);
};

#endif // COORDINATOR_H
