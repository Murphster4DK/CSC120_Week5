#include <iostream>
using namespace std;


int main() {
    unsigned int sum{0};

    for (unsigned int count{1}; count <= 99; count +=2) {
        cout << sum << endl;
        sum += count;
        }
}