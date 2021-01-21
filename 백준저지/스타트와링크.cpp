//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, arr[25][25], ans = 1e9;
//vector<int> v;
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> arr[i][j];
//	v.resize(n);
//	for (int i = 0; i < n / 2; i++)v[i] = 1;
//	sort(v.begin(), v.end());
//	do {
//		vector<int> team1, team2;
//		for (int i = 0; i < v.size(); i++) {
//			if (v[i] == 0) {
//				team1.push_back(i + 1);
//			}
//			else
//				team2.push_back(i + 1);
//		}
//		vector<int> vv(n / 2);
//		for (int i = 0; i < 2; i++)vv[i] = 1;
//		sort(vv.begin(), vv.end());
//		int sum1 = 0, sum2 = 0;
//		for (int i = 0; i < n / 2; i++) {
//			for (int j = 0; j < n / 2; j++) {
//				if (i == j)continue;
//				sum1 += arr[team1[i]][team1[j]];
//				sum2 += arr[team2[i]][team2[j]];
//			}
//		}
//		if (sum1 >= sum2) {
//			ans = min(ans, sum1 - sum2);
//		}
//	} while (next_permutation(v.begin(), v.end()));
//	cout << ans;
//}