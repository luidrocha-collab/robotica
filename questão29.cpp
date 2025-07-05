#include <iostream>
using namespace std;

template <typename T>
void trocar(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 1, y = 2;
    trocar(&x, &y);
    cout << x << " " << y << endl;

    float f1 = 3.5, f2 = 7.2;
    trocar(&f1, &f2);
    cout << f1 << " " << f2 << endl;

    return 0;
}