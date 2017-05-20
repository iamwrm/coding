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

    long long int ma, mb;
    if (m % a == 0)
    {
        ma = (m / a);
    }
    else
    {
        ma = (m / a + 1);
    }
    mb = ma;

    m = n;
    if (m % a == 0)
    {
        ma = (m / a);
    }
    else
    {
        ma = (m / a + 1);
    }

    cout << ma * mb;

    return 0;
}