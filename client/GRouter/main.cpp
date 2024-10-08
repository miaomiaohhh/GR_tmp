#include "GRouterClient.h"

int main() {
    GRouterClient gRouterClient;
    gRouterClient.initialize();

    // Example usage
    gRouterClient.routeData(1, "Sample Data");
    gRouterClient.scheduleTransfer(1);

    return 0;
}
