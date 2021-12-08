#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k;
    int month[12];
    cin >> k;

    for(int i = 0; i < 12; ++i)
        cin >> month[i];
    sort(month, month + 12, greater<int>());

    int temp = 0, count = 0;
    for(int i = 0; i < 12; ++i) {
        if(temp >= k) {
            break;
        }
        temp += month[i];
        ++count;
        
    }

    if(temp < k) cout << -1 << endl;
    else cout << count << endl;

    return 0;
}