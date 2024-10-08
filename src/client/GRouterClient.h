#ifndef GR_ROUTER_CLIENT_H
#define GR_ROUTER_CLIENT_H

#include "../include/coordinator/Coordinator.h"
#include "../include/executor/Executor.h"

class GRouterClient {
public:
    GRouterClient();
    ~GRouterClient();
    void initialize();
    void routeData(int functionId, const std::string &data);
    void scheduleTransfer(int functionId);

private:
    Coordinator coordinator;
    Executor executor;
};

#endif // GR_ROUTER_CLIENT_H
