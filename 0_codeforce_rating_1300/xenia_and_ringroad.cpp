#include <iostream>

using namespace std;

int main() {
    long long int n, m, time = 0;
    cin >> n >> m;

    long long int cur = 1, temp;
    for(int i = 0; i < m; ++i) {
        cin >> temp;
        if(temp > cur) time += temp - cur;
        if(temp < cur) time += (n - cur) + temp;
        cur = temp;
    }

    cout << time << endl;

    return 0;
}