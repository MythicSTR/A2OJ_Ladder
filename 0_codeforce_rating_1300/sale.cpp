#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int money[n], temp, count = 0;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        money[i] = -(temp);
    }

    sort(money, money + n, greater<int>());
    int money_earned = 0;
    for(int i = 0; i < m; ++i) {
        if(money[i] > 0) money_earned += money[i];
    }

    cout << money_earned << endl;

    return 0;
}