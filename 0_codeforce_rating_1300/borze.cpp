#include <iostream>

using namespace std;

int main() {
    string q, n = "";
    cin >> q;

    for(int i = 0; i < q.length(); ++i) {
        if(q[i] == '-') {
            if(q[i+1] == '.')
                n.append("1");
            else
                n.append("2");
            ++i;
        } else
            n.append("0");
    }

    cout << n << endl;

    return 0;
}