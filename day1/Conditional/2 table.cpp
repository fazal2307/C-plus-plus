#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= 40; j++) {
            cout << (j * i) << " ";
        }
        cout << endl;
    }

    return 0;
}
