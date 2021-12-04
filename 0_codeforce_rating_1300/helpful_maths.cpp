#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string q; int num; char c;
    cin >> q;

    stringstream ss(q);
    vector<int> v;

    while(ss >> num) {
        v.push_back(num);
        ss >> c;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if(i+1 != v.size()) cout << "+";
    }

    return 0;
}