#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    string q;

    cin >> n >> t >> q;

    for(int i = 0; i < t; ++i) {
        for(int j = 1; j < n; ++j) {
            if(q[j] == 'G' && q[j-1] == 'B') {
                cout << '"' << q[j-1] << '"' << endl;
                q[j-1] = 'G';
                q[j] = 'B';
                ++j;
            }
        }
    }

    cout << q << endl;

    return 0;
}