#include <vector>
#include <iostream>
using namespace std;
int main() {
    int * memleak;
    cout << "we do a little trolling";
    while (true) {
        try {memleak = new int(0);} catch (...) {cout << "ur mother"; return 0;}
    }
}