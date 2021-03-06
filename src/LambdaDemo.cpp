//
// Created by 杜铁生 on 2020/7/2.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Use lambda to do sum.
void sum() {
    auto fun = [](int a, int b) {
        return a + b;
    };
    cout << fun(3, 4) << endl;
}

// Use lambda to do sum version 2.0.
void catchSum() {
    int a = 8; // random give a int number.
    auto fun = [a](int b) {
        return a + b;
    };
    cout << fun(10) << endl;
}

// Usage of partition and for_each.
void StablePartition() {
    vector<string> vec{"do", "you", "need", "partition", "?"};
    auto iter = stable_partition(vec.begin(), vec.end(), [](const string &str) {
        return str.size() < 3;
    });
    for_each(iter, vec.end(), [](const string &s) {
        cout << s << endl;
    });
}

// Note:none declare return type lambda do not get a compile error when include other segment.
void returnTest() {
    vector<int> vec(10, -5);
    vector<int> tar(10);
    // if segment may not get an error here.
    transform(vec.begin(),vec.end(),tar.begin(),[](int i) {
        if (i > 0) return i;
        else return -i;
    });
}

int main(int argc, char *argv[]) {
    return 0;
}