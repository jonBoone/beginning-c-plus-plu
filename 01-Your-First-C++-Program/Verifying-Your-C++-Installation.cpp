// used to verify g++ installation
// compile with g++ -o hello Verifying-Your-C++-Installation.cpp -std=c++17
// won't compile with -std=c++-11 due to non literal lambda
// 2021-01-17

#include <iostream>
#include <string>

constexpr auto fx = [] (std::string msg) {
    return msg + "!\n";  };

int main(int argc, char* argv[]) {
    if (argc == 2)
        std::cout << "hello " << fx(argv[1]);
    else
        std::cout << "hello world!" << std::endl;
}
