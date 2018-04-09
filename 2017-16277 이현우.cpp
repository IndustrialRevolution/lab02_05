#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main() {
	int num;
	vector<int> v;
	while (cin >> num) {
		v.push_back(num);
	}
	sort(v.rbegin(), v.rend());
	cout << "ordered array" << endl;
	for (auto i : v) { cout << i << " "; }
		system("pause");
}