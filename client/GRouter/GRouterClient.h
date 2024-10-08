#ifndef G_ROUTER_CLIENT_H
#define G_ROUTER_CLIENT_H

#include "../src/coordinator/Coordinator.h"
#include "../src/executor/Executor.h"

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

#endif // G_ROUTER_CLIENT_H
