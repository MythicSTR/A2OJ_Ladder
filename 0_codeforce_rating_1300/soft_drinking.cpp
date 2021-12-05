#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = (k * l) / nl;
    int salt = p / np;
    int slice = c * d;

    int minimum = min({drinks, salt, slice});
    cout << minimum / n << endl;

    return 0;
}