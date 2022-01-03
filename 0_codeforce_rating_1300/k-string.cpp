#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k; string q;
    char ch; int count(0);
    cin >> k >> q;
    sort(q.begin(), q.begin() + q.size());

    for(int i = 0; i < q.size(); ++i) {
        if(i%k == 0) ch = q[i];
        if(q[i] == ch) ++count;
    }

    if(q.size() == count && count % k == 0) {
        for(int i = 0; i < k; ++i) {
            for(int l = 0; l < q.size(); l += k) {
                cout << q[l];
            }
        }
    } else {
        cout << "-1";
    }

    return 0;
}