#include <iostream>
#include <string>

using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    int flag = 0;
    for(int i = 0; i < first.length(); ++i) {
        char a = tolower(first[i]);
        char b = tolower(second[i]);

        if(int(a) < int(b)) {--flag; break;}
        else if(int(a) > int(b)) {++flag; break;}
    }

    cout << flag << endl;
    
    return 0;
}