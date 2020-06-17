#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    string file = "test.txt";

    //生成文件
    ofstream out(file);
    out << "I am a good file!" << endl
        << "Please read data from me!" << endl;
    out.close();

    ifstream fin(file);

    string line, word;
    vector<string> list;

    while (getline(fin, line)) {
        list.push_back(line);
    }

    for (const auto &item : list) {
        istringstream sin(item);
        while (sin >> word) {
            cout << word;
            if (!sin.eof()){
                cout << " ";
            }
        }
        cout << endl;
    }

    fin.close();
    return 0;
}