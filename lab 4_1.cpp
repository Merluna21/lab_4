#include <iostream>
#include <Windows.h>

using namespace std;

class Array {
    int n;
    float* m;
public:
    Array(int k) {
        int num;
        n = k;
        m = new float[n];
        srand(time(0));
        for (int i = 0; i < n; i++) {
            num = -10 + rand() % (10 + 1 + 10);
            if (num % 2 == 0) {
                m[i] = num + 4.1;
            }
            else {
                m[i] = num - 1;
            }
        }
    }

    ~Array() {
        delete m;
    }

    void Sum(Array a) {
        int s=0;
        for (int i = 0; i < a.n; i++) {
            if (round (a.m[i] / 2) - a.m[i] / 2 == 0)
                s += int(a.m[i]);
        }
        cout <<"\n\nСума парних елементів масиву:" << s << endl;
    }
    void printf() {
        cout << "\t\t\t\tВихідний масив" << endl;
        for (int i = 0; i < n; i++) {
            cout << m[i] << "  ";
        }
    }
};

int main()
{
    SetConsoleOutputCP(1251);
    Array arr(15);
    arr.printf();
    arr.Sum(arr);
    arr.~Array();
    return 0;
}
