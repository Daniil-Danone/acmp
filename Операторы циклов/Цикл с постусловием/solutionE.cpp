#include <iostream>

using namespace std;

int main() {
    int n;
    int max = 0;
    do {
        cin >> n;
        if (n > max) {
            max = n;
        }
    } while (n != 0);

    cout << max;
}