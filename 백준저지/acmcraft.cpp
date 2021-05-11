//#include <bits/stdc++.h>
//using namespace std;
//
//int n, k;
//vector<int> v[1005];
//int degree[1005];
//int arr[1005];
//int dp[1005];
//void reset() {
//	for (int i = 0; i < 1001; i++) {
//		v[i].clear();
//		degree[i] = 0;
//		arr[i] = 0;
//		dp[i] = 0;
//	}
//}
//
//void BFS() {
//	queue<int> q;
//	for (int i = 1; i <= n; i++) {
//		if (!degree[i])q.push(i);
//	}
//
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//
//		for (int i = 0; i < v[x].size(); i++) {
//			degree[v[x][i]]--;
//			dp[v[x][i]] = max(arr[v[x][i]] + dp[x], dp[v[x][i]]);
//			if (!degree[v[x][i]]) {
//				q.push(v[x][i]);
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		reset();
//		cin >> n >> k;
//		for (int i = 1; i <= n; i++) {
//			cin >> arr[i];
//			dp[i] = arr[i];
//		}
//		for (int i = 0; i < k; i++) {
//			int a, b;
//			cin >> a >> b;
//			v[a].push_back(b);
//			degree[b]++;
//		}
//		int w;
//		cin >> w;
//
//		BFS();
//		cout << dp[w] << '\n';
//	}
//}