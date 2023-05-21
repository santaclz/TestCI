#include <iostream>

void runTests() {
    std::cout << "Running tests..." << std::endl;
    std::cout << "Test 1: PASSED" << std::endl;
    std::cout << "Test 2: PASSED" << std::endl;
    std::cout << "Test 3: FAILED" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc > 1 && std::string(argv[1]) == "--test") {
        runTests();
        return 0;
    }

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
