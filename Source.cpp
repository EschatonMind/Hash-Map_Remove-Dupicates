#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> RemoveDuplicates(int a[], int& n);

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> output = RemoveDuplicates(a, n);

	for (vector<int>::iterator it = output.begin(); it != output.end(); it++) {
		cout << " | " << *it << " | ";
	}

	return 0;
}

vector<int> RemoveDuplicates(int a[], int& n) {

	vector<int> output;
	unordered_map<int, bool> map;
	for (int i = 0; i < n; i++) {
		if (map.count(a[i]) == 0) {

			output.push_back(a[i]);
			map[a[i]] = false;

		}
	}
	return output;
}