#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string username;
    int count = 0;
    cin >> username;

    sort(username.begin(), username.end());
    for(int i = 0; i < username.length(); ++i) {
        if(username[i] != username[i + 1]) ++count;
    }

    printf("%s", count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    
    return 0;
}