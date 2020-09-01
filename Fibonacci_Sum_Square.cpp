#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long> Fib(long n)
{
    vector<unsigned long long> f(n);
    long i;

    f[0] = 0; f[1] = 1;

    for (i = 2; i < n; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }
    
    return f;
}

int main()
{
    long n;
    unsigned long long sum = 0;
    cin >> n;
    ++n;
    n %= 60;
    vector<unsigned long long> f(n);
    f = Fib(n);
    
    for (auto i : f)
    {
        sum = (sum + (i * i)) % 10;
    }
    cout << sum << endl;
    return 0;
}