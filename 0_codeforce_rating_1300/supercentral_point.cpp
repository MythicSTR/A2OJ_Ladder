#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> coord;
    int n, x, y, left, right, upper, lower;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        coord.push_back(vector<int>());
        cin >> x >> y;
        coord[i].push_back(x);
        coord[i].push_back(y);
    }

    int point = 0;
    for(int i = 0; i < n; ++i) {
        left = right = upper = lower = 0;
        for(int j = 0; j < n; ++j) {
            if(j == i) continue;
            if(coord[i][1] == coord[j][1]) {
                if(coord[i][0] > coord[j][0]) ++left;
                if(coord[i][0] < coord[j][0]) ++right;
            }
            if(coord[i][0] == coord[j][0]) {
                if(coord[i][1] > coord[j][1]) ++lower;
                if(coord[i][1] < coord[j][1]) ++upper;
            }
        }
        if(left > 0 && right > 0 && lower > 0 && upper > 0)
            ++point;
    }

    cout << point << endl;

    return 0;
}