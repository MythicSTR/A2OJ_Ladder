#include <iostream>

using namespace std;

int main() {
    int n;
    string q;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> q;
        if(q.length() > 10)
            cout << q[0] << q.length() - 2 << q[q.length() - 1] << endl;
        else cout << q << endl;
    }

    return 0;
}