//#include <bits/stdc++.h>
//using namespace std;
//
//long long arr[1000005];
//long long dp[1000005];
//vector<long long> v;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	v.push_back(arr[0]);
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > v.back()) {
//			v.push_back(arr[i]);
//			dp[i] = v.size() - 1;
//		}
//		else {
//			int tmp = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
//			v[tmp] = arr[i];
//			dp[i] = tmp;
//		}
//		//for (auto i : v)cout << i << ' ';
//		//cout << '\n';
//	}
//	//for (auto i : v)cout << i << ' ';
//	cout << v.size() << '\n';
//	int k = v.size() - 1;
//	vector<long long> ans;
//	for (int i = n - 1; i >= 0; i--) {
//		if (dp[i] == k) {
//			ans.push_back(arr[i]);
//			k--;
//		}
//	}
//	//for (int i = 0; i < n; i++)cout << dp[i] << ' ';
//	//cout << '\n';
//	reverse(ans.begin(), ans.end());
//	for (auto i : ans)cout << i << ' ';
//}