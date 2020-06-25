//
// Created by 杜铁生 on 2020/6/22.
//
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
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
    return 0;
}
