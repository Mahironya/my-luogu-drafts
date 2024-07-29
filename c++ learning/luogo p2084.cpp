#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string system,raw_number;
    cin>>system>>raw_number;
    vector<string> help_list;
    int power = raw_number.length();
    for (int i = 0; i < power; i=i+1) {
        if (raw_number[i] != '0') {
            help_list.push_back(string(1, raw_number[i]) + "*" + system + "^" + to_string(power - i - 1));
            help_list.push_back("+");
        }
    }
    
    // Remove the last '+' sign
    if (!help_list.empty()) {
        help_list.pop_back();
    }
    
    // Output the result
    for (const auto& part : help_list) {
        cout << part;
    }
    cout << endl;
    
    return 0;
}
