#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> LA = { 1, 2, 3, 4, 5 };
    cout << "The vector elements are:" << endl;
    for (auto x: LA) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}