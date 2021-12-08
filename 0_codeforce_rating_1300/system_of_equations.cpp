#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int pair = 0;
    for(int i = 0; i <= n; ++i) {
        if(i * i > n || i > m) break;
        for(int j = 0; j <= m; ++j) {
            if(j > n || j * j > m)
                break;
            if((i * i + j) == n && (i + j * j) == m)
                ++pair;
        }
    }

    cout << pair << endl;

    return 0;
}