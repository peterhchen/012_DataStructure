#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> LA = { 1, 2, 3, 4, 5 };
	int k = 3;
	cout << "Original vector:" << endl;
	for (auto x : LA)
		cout << x << " ";
	cout << endl;

	LA.erase(LA.begin() + k);
	cout << "After remove kth element in vector:" << endl;
	for (auto x : LA)
		cout << x << " ";
	cout << endl;
	return 0;
}