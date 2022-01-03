#include <iostream>

using namespace std;

int main() {
    int n, a, b, count(0);
    cin >> n >> a >> b;

    for(int i = 1; i <= n; ++i) {
        if((i-1) >= a && (n - i) <= b) {
            ++count;
        }
    }

    cout << count;

    return 0;
}