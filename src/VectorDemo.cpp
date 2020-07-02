//
// Created by 杜铁生 on 2020/6/25.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void initStringFromVector(){
    vector<char> stringVector{'h', 'e', 'l', 'l', 'o'};
    string str(stringVector.begin(), stringVector.end());
    cout << "Vector to string is: " << str << endl;
}

void vectorIncrease(){
    vector<int> container(10, 1);
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    container.push_back(1);
    cout << "after push back! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    for (int i = 0; i < 9; ++i) {
        container.push_back(1);
    }
    cout << "after push back 9 times! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    container.push_back(1);
    cout << "after push back! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    container.resize(1);
    cout << "after resize to 1! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    container.shrink_to_fit();
    cout << "after shrink_to_fit! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;

    container.reserve(20);
    cout << "after reserve(20)! " << endl;
    cout << "size: " << container.size()
         << " capacity: " << container.capacity()
         << endl;
}

int main(int argc, char *argv[]) {

    return 0;
}