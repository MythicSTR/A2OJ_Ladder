#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long evens = n / 2, odds, q;
    odds = (n % 2 == 0) ? evens : evens + 1;
    if(k <= odds) {
        q = k * 2 - 1;
    } else if(k > odds) {
        q = (k - odds) * 2;
    }

    cout << q << endl;

    return 0;
}