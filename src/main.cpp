//
// Created by 杜铁生 on 2020/7/2.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fun(int a, int b) {
    a = 10;
    cout << a << " - " << b << endl;
    return a + b;
}

int main(int argc, char *argv[]) {
    cout << fun(1, 2) << endl;
    return 0;
}