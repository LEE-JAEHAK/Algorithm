#include <bits/stdc++.h>
using namespace std;

long long arr[1000005];
vector<long long> v;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	v.push_back(arr[0]);
	for (int i = 1; i < n; i++) {
		if (arr[i] > v.back()) {
			v.push_back(arr[i]);
		}
		else {
			int tmp = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
			v[tmp] = arr[i];
		}
		for (auto i : v)cout << i << ' ';
		cout << endl;

	}
	cout << v.size() << endl;
	for (auto i : v)cout << i << ' ';

}