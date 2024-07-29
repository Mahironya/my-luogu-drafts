#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;  // Read input string
    int len = a.size();  // Get the length of the string
    
    // Iterate from the end of the string to the beginning
    for (int i = len - 1; i >= 0; i--) {
        cout << a[i];  // Print each character in reverse order
    }
    
    return 0;
}
