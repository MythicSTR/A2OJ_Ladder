#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int arrN[n];
    for(int i = 0; i < n; ++i) cin >> arrN[i];

    cin >>m;
    int arrM[m];
    for(int i = 0; i < m; ++i) cin >> arrM[i];

    int max_gear_ratio = 0, gear_count = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(arrM[j] % arrN[i] == 0) {
                if(arrM[j] / arrN[i] > max_gear_ratio) {
                    max_gear_ratio = arrM[j] / arrN[i];
                    gear_count = 1;
                } else if(arrM[j] / arrN[i] == max_gear_ratio) {
                    ++gear_count;
                }
            }
        }
    }

    cout << gear_count << endl;

    return 0;
}