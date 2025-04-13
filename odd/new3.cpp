#include <iostream>
using namespace std;

int main() {
    // Print letters from A to Z using ASCII values
    for (int i = 65; i <= 90; ++i) {
        cout << static_cast<char>(i) << " ";
    }
        cout << endl;
    
    return 0;
}