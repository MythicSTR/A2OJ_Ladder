#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, candies, child;
    double temp, highest_diff(0);
    cin >> n >> candies;

    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        if(ceil(temp / candies) >= highest_diff) {
            highest_diff = ceil(temp / candies);
            child = i;
        }
    }

    cout << child << endl;

    return 0;
}