//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> v;
//int ans;
//int recursive(vector<int> a) {
//	int sz = a.size();
//	if (sz == 2)return 0;
//	int ans = 0;
//	for (int i = 1; i < sz - 1; i++) {
//		int energy = a[i - 1] * a[i + 1];
//		vector<int> b(a);
//		b.erase(b.begin() + i);
//		energy += recursive(b);
//		ans = max(ans, energy);
//	}
//	return ans;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int t;
//		cin >> t;
//		v.push_back(t);
//	}
//
//	cout << recursive(v);
//}