#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> LA{ 1, 2, 3, 5, 6, 7 };
    int k = 3; // insert position
    cout << "The original vector elements are:" << endl;
    for (auto x : LA)
        cout << x << " ";
    cout << endl;


    cout << "Insert element" << endl;
    LA.insert(LA.begin() + k, 4); // k = position, value = 4
    cout << "The vector elements after insertion" << endl;
    for (auto x : LA)
        cout << x << " ";
    cout << endl;
    return 0;
}