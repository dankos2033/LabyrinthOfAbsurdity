#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    for (int i = 0; i < 10; ++i) {
        std::cout << rand() % 100 << std::endl;
    }
    return 0;
}
