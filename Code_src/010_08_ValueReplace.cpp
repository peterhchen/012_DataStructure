#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector <int> LA = { 1, 2, 3, 4, 5 };
    cout << "Original Vector:" << endl;
    for (auto x : LA)
        cout << x << " ";
    cout << endl;
    cout << "Vector replace matched element with value: " << endl;
    int k = 1;
    replace(LA.begin(), LA.end(), k, 100);
    for (auto x : LA)
        cout << x << " ";
    cout << endl;
}
