#include <iostream>

using namespace std;

int main() {
    int n, enter, exit, min_cap = 0, temp = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> exit >> enter;
        temp = temp - exit + enter;
        if(temp > min_cap) min_cap = temp;
    }

    cout << min_cap << endl;

    return 0;
}