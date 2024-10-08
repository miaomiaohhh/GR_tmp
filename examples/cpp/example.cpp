#include <iostream>
#include "../client/GRouterClient.h"

int main() {
    GRouterClient client;
    client.initialize();
    client.routeData(1, "Hello, GRouter!");
    client.scheduleTransfer(1);

    return 0;
}
