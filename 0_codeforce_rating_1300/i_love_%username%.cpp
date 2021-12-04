#include <iostream>

using namespace std;

int main() {
    int n, highest = 0, least = 0, temp, performance = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> temp;
        if(i == 0) highest = least = temp;
        if(temp > highest) {
            ++performance;
            highest = temp;
        } else if(temp < least) {
            ++performance;
            least = temp;
        }
    }
    
    cout << performance << endl;
    return 0;
}