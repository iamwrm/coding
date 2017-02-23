#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    std::cout << "argc:" << argc << std::endl;
    std::cout << "hehhehehehehe\n";
    vector<string> v1(argc);
    for (int i = 0; i < argc; i++)
    {
        string temp;
        int j = 0;
        while (*(*(argv + i) + j) != '\0')
        {
            temp.push_back(*(*(argv + i) + j) != '\0');
        }
        cout << temp << endl;
        v1.push_back(temp);
    }
    return 0;
}