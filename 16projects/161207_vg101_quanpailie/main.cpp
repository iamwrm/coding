#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void p(int N, int lev, int *array)
{
    if (lev == N)
    {
        for (int i = 0; i < N; i++)
        {
            cout << *(array + i);
        }
        cout << endl;
        return;
    }
    for (int i = 1; i < N - lev + 1; i++)
    {
        swap(array[0], array[i]);
        p(N, lev + 1, array);
        swap(array[0], array[i]);
    }
}

int main()
{
    int *array;
    int N;
    std::cin >> N;
    array = (int *)malloc(N * sizeof(int));
    p(N, 1, array);

    cin.get();
}