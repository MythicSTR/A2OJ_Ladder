#include <iostream>

using namespace std;

int main() {
    int n, a, sum = 0, way = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
    }

    for(int i = 1; i <= 5; ++i) {
        if((sum + i) % (n + 1) != 1) ++way;
    }
    cout << way << endl;

    return 0;
}