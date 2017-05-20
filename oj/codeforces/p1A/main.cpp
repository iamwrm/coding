#include <iostream>

int main()
{
    using namespace std;
    string console_input;
    // getline(cin,console_input);

    long long int m, n, a;
    cin >> m;
    cin >> n;
    cin >> a;

    cout << (m / a + 1) * (n / a + 1);

    return 0;
}