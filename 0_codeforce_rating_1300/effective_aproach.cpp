#include <iostream>

using namespace std;

int main() {
    int n, a, arr[100001];
    cin >> n;
    
    for(int i = 1; i <= n; ++i) {
        cin >> a;
        arr[a] = i;
    }

    int q;
    long long vasya(0), petya(0);
    cin >> q;

    for(int i = 0; i < q; ++i) {
        cin >> a;
        vasya +=  arr[a];
        petya += n - arr[a] + 1;
    }

    cout << vasya << " " << petya << endl;
    
    return 0;
}