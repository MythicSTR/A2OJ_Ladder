#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;
#define N 48

ull fib[N];

void generate() {
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < N; ++i)
        fib[i] = fib[i - 2] + fib[i - 1];
}

int main() {
    generate();
    ull n;
    cin >> n;
    ull * p = upper_bound(fib, fib + N, n) - 1;
    if(p - 4 >= fib)
        cout << *(p - 4) << " " << *(p - 3) << " " << *(p - 1) << endl;
    else
        cout << "0 0 " << *p << endl;
}