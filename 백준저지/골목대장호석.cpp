//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, m, a, b, c;
//vector<pair<int, int>> v[100005];
//bool visited[100005];
//long long ans = 1e9;
//bool flag = 0;
//void DFS(int here, long long money, long long maxi) {
//	if (here == b) {
//		if (c >= money) {
//			flag = 1;
//			ans = min(maxi, ans);
//			//cout << money << ' ' << maxi << '\n';
//		}
//		return;
//	}
//	for (int i = 0; i < v[here].size(); i++) {
//		int next = v[here][i].first;
//		long long cost = v[here][i].second;
//		if (visited[next] == 1)continue;
//		visited[next] = 1;
//		DFS(next, money + cost, max(maxi, cost));
//		visited[next] = 0;
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m >> a >> b >> c;
//	for (int i = 0; i < m; i++) {
//		int d, e, f;
//		cin >> d >> e >> f;
//		v[d].push_back({ e,f });
//	}
//	visited[a] = 1;
//	DFS(a, 0, 0);
//	if (flag == 0)cout << -1;
//	else cout << ans;
//}