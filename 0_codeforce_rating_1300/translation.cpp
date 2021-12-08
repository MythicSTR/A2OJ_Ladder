#include <iostream>

using namespace std;

int main() {
    string q, r;
    cin >> q >> r;

    for(int i = 0; i < q.length(); ++i) {
        if(q[i] != r[q.length() - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}