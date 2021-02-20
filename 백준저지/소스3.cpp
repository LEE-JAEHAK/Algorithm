#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h;
	cin >> n >> h;
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n / 2; i++) {
		int a, b;
		cin >> a >> b;
		v1.push_back(a);
		v2.push_back(b);
	}
	sort(v1.begin(), v1.end(), greater<>());
	sort(v2.begin(), v2.end(), greater<>());
	int minn = 1e9;
	vector<int> v;
	for (int i = 1; i <= h; i++) {
		int x = (upper_bound(v1.begin(), v1.end(), i, greater<>()) - v1.begin()) +
			(upper_bound(v2.begin(), v2.end(), h - i + 1, greater<>()) - v2.begin());
		v.push_back(x);
		minn = min(minn, x);
	}
	int cnt = 0;
	for (auto i : v) {
		if (minn == i)cnt++;
	}
	cout << minn << ' ' << cnt;
}