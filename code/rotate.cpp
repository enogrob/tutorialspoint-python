//
// Created by Roberto Nogueira on 04/11/16.
//

#include <iostream>
//#include <string>

using namespace std;

bool is_rotate(string s1, string s2) {
    int i = 0;
    string c;

    do {
        if(s1 == s2)
            return true;
        else {
            // rotate string
            c = s2.back();
            s2.insert(0, c);
            s2.pop_back();
            i++;
        }
    } while(i < s1.size());

    return false;
}

int main() {

    if (is_rotate("abc", "acb")) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

