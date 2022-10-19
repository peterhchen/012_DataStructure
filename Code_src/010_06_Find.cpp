#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Find operation" << endl;
    vector <int> LA = { 1, 2, 3, 4, 5 };
    vector<int>::iterator it;

    int k = 3;
    cout << "Orginal Vector:" << endl;
    for (auto x : LA)
        cout << x << " ";
    cout << "find element value = " << k  << endl;

    it = find(LA.begin(), LA.end(), k);
    if (it != LA.end()) {
        cout << "Element k = " << k << " Found " << endl;

        cout << "LA.begin(): " << *LA.begin() << endl;
        // https://stackoverflow.com/questions/31574737/how-the-iterator-in-c-could-be-printed
        cout << "&it: " << &it << endl; // print the address.
        cout << "&(*it): " << &(*it) << endl; // print addres of content.
        // We can print as below. it is converted into value to print out.
        //cout << "it: " << it << endl;  // No value define in "it".
        cout << "it - LA.begin(): " << it - LA.begin() << endl;
        cout << "at position " << it - LA.begin() << endl;
        }
    else cout << "Element not found." << endl;
    return 0;
}
