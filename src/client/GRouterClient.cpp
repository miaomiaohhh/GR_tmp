#include "GRouterClient.h"
#include <iostream>

GRouterClient::GRouterClient() {
    // Initialization
}

GRouterClient::~GRouterClient() {
    // Cleanup
}

void GRouterClient::initialize() {
    coordinator.initialize();
    executor.initialize();
}

void GRouterClient::routeData(int functionId, const std::string &data) {
    std::cout << "Routing data for function ID " << functionId << ": " << data << std::endl;
    executor.sendData(functionId, data);
}

void GRouterClient::scheduleTransfer(int functionId) {
    executor.scheduleTransfer(functionId);
}
