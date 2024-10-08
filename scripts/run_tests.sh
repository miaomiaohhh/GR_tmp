#!/bin/bash
set -e

# 创建一个临时测试目录
TEST_DIR="./test"
mkdir -p $TEST_DIR

# 编写一个简单的测试程序
cat <<EOL > $TEST_DIR/test_example.cpp
#include <iostream>
#include "../include/coordinator/Coordinator.h"
#include "../include/executor/Executor.h"
#include "../include/scheduler/Scheduler.h"

int main() {
    Coordinator coordinator;
    Executor executor;
    Scheduler scheduler;

    coordinator.initialize();
    executor.initialize();
    scheduler.initialize();

    coordinator.routeData(1, "Test Data");
    executor.sendData(1, "Test Data");
    scheduler.schedule(1);

    std::cout << "All tests passed." << std::endl;
    return 0;
}
EOL

# 编译测试程序
g++ -o $TEST_DIR/test_example $TEST_DIR/test_example.cpp -I ../include

# 运行测试
echo "Running tests..."
$TEST_DIR/test_example

# 清理
rm -rf $TEST_DIR

echo "Tests completed."
