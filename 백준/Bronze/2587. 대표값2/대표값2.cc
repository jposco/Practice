#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int num = 0;
	int aa, bb, cc, dd, ee;
	cin >> aa >> bb >> cc >> dd >> ee;
	v.push_back(aa);
	v.push_back(bb);
	v.push_back(cc);
	v.push_back(dd);
	v.push_back(ee);
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i : v) sum += i;
	sum /= 5;
	cout << sum <<endl << v.at(2);
}