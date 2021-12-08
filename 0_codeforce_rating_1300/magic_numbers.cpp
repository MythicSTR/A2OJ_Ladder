#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;

    for(int i = 0; i < n.length(); ++i) {
        if(n[i] == '1') {
            if(n[i + 1] == '4' && n[i + 2] == '4') {
                i += 2;
            } else if(n[i + 1] == '4') {
                i += 1;
            } else {
                continue;
            }
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}