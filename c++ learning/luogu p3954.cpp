#include <iostream>
using namespace std;

int main() {
    int homework, quiz, final;
    cin >> homework >> quiz >> final;  // Fix here: use >> to read inputs separately
    double sum = homework * 0.2 + quiz * 0.3 + final * 0.5;  // Use double for more precise calculations
    cout << sum << endl;
    
    return 0;
}
