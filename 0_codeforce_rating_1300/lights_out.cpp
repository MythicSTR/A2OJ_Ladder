#include <iostream>

using namespace std;
int n[3][3];
int main() {
    int x;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> x;
            n[i][j] += x;
            if(j + 1 < 3) n[i][j+1] += x;
            if(j - 1 >= 0) n[i][j-1] += x;
            if(i - 1 >= 0) n[i-1][j] += x;
            if(i + 1 < 3) n[i+1][j] += x;
        }
    }

    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            if(n[i][j] % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}