#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, Total;
    float Avg;
    cout << "Enter values of m1, m2, m3: ";
    cin >> m1 >> m2 >> m3;
    Total = m1 + m2 + m3;
    Avg = Total / 3.0;
    if (Avg >= 80 && Avg <= 85) {
        cout << "Good Marks";
    } else if (Avg < 60) {  // Removed the redundant 'else' here
        cout << "Moderate";
    } else {
        cout << "Very bad";
    }
    return 0;
}