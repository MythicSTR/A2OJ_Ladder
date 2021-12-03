#include <iostream>

using namespace std;

int main() {
    string q;
    cin >> q;

    for(int i = 0; i < q.length(); ++i) {
        if(i == 0) cout << (char) toupper(q[i]);
        else cout << q[i];
    }

    return 0;
}