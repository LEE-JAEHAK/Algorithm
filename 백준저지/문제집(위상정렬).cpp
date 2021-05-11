//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//vector<int> v[32005];
//int degree[32005];
//
//void BFS() {
//	priority_queue<int, vector<int>, greater<int>> q;
//	for (int i = 1; i <= n; i++) {
//		if (!degree[i])q.push(i);
//	}
//	
//	while (!q.empty()) {
//		int x = q.top();
//		q.pop();
//		cout << x << ' ';
//		for (int i = 0; i < v[x].size(); i++) {
//			degree[v[x][i]]--;
//			if (!degree[v[x][i]]) {
//				q.push(v[x][i]);
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		degree[b]++;
//	}
//
//	BFS();
//}