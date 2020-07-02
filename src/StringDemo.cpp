//
// Created by 杜铁生 on 2020/6/25.
//

#include <iostream>
#include <string>

using namespace std;

void findCharWhichIsNumber() {
    string s1("ab2c3d7R4E6"), number("0123456789");
    //find all number
    cout << "This is all numbers in string: " << s1 << endl;
    auto pos = s1.find_first_of(number);
    while (pos != string::npos) {
        cout << "pos: " << pos
             << " - char: " << s1.at(pos)
             << endl;
        pos = s1.find_first_of(number, ++pos);
    }
    //find all number
    cout << "This is all char in string: " << s1 << endl;
    pos = s1.find_first_not_of(number);
    while (pos != string::npos) {
        cout << "pos: " << pos
             << " - char: " << s1.at(pos)
             << endl;
        pos = s1.find_first_not_of(number, ++pos);
    }
}

int main(int argc, char *argv[]) {
    findCharWhichIsNumber();
    return 0;
}