#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "argc:" << argc << std::endl;
    std::cout << "hehhehehehehe\n"
              << **(argv + 1)
              << *(*argv + 1)
              << *(*argv + 2);
    return 0;
}