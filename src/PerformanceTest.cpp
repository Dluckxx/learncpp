#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template<class T>
int sequentialSearch(T *a, int n, const T &x) {
    int i;
    for (i = 0; i < n && a[i] != x; ++i);
    if (i == n) return -1;
    else return i;
}

template<class T>
void insertSort(T a[], int n) {
    for (int i = 1; i < n; ++i) {
        T t = a[i];
        int j;
        for (j = i - 1; j >= 0 && t < a[j]; --j)
            a[j + 1] = a[j];
        a[j + 1] = t;
    }
}

int main(int argc, char *argv[]) {
    int arr[1000], step = 10, i;
    for (i = 0; i <= 1000; i += step) {
        unsigned long repeat = 0;
        clock_t startTime = clock();
        do {
            repeat++;
            for (int j = 0; j < i; ++j) {
                arr[i] = i - j;
            }
            insertSort(arr, i);
        } while (clock() - startTime < 1000);

        double endTime = (double) (clock() - startTime) / (double) repeat;
        cout << i << "\t" << repeat << "\t" << endTime << "\t" << endTime / (double) repeat << endl;
        if (i == 100) step = 100;
    }
    return 0;
}

