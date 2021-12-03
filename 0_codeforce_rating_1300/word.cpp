#include <iostream>

using namespace std;

int main() {
    string word;
    int count = 0;
    cin >> word;

    for(int i = 0; i < word.length(); ++i) {
        if(isupper(word[i])) ++count;
        else --count;
    }

    if(count <= 0)
        for(int i = 0; i < word.length(); ++i) cout << (char) tolower(word[i]);
    else
        for(int i = 0; i < word.length(); ++i) cout << (char) toupper(word[i]);
}