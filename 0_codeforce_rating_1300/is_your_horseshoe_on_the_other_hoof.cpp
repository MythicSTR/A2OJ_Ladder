#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int temp, count = 0;
    vector<int> v;
    for(int i = 0; i < 4; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < 4; ++i) {
        if(v[i] == v[i + 1]) ++count;
    }

    cout << count << endl;
    
    return 0;
}