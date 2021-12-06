#include <iostream>

using namespace std;

int main() {
    int n, cur, min = 1000000001, id, flag = 1;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        cin >> cur;
        if(cur < min) {
            min = cur;
            id = i;
            flag = 1;
        } else if(cur == min) {
            flag = 0;
        }
    }

    if(flag == 1) cout << id << endl;
    else cout << "Still Rozdil" << endl;

    return 0;
}