#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, first;
    cin >> n >> first;

    int prev = first, cur, reconnaissance = 10001, index1, index2;
    for(int i = 2; i <=n; ++i) {
        cin >> cur;
        int diff = abs(cur - prev);
        
        if(diff < reconnaissance) {
            reconnaissance = diff;
            index1 = i - 1;
            index2 = i;
        }
        prev = cur;
    }

    int diff = abs(first - prev);
    if(diff < reconnaissance) {
        index1 = n;
        index2 = 1;
    }

    cout << index1 << " " << index2 << endl;

    return 0;
}