#include <iostream>
#include <algorithm> // std::replace
#include <vector>
using namespace std;

int main() {
	vector <int> LA = { 1, 2, 3, 4, 5 };
	cout << "Orginal Vector: " << endl;
	for (auto x : LA)
		cout << x << " ";
	cout << endl;
	int k = 2;
	LA.at(k) = 100; //replace poistion k with 100
	cout << "Replace Vector: " << endl;
	for (auto x : LA)
		cout << x << " ";
	cout << endl;
    return 0;
}
