//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, des;
//vector<pair<int, int>> v[1005];
//priority_queue<pair<int, int>> q;
//
//
//void DI(int start) {
//	vector<int> dist(n + 1, 1e9);
//	dist[start] = 0;
//	q.push({ 0,start });
//	while (!q.empty()) {
//		int cost = -q.top().first;
//		int here = q.top().second;
//		q.pop();
//		if (dist[here] < cost)continue;
//		for (auto i : v[here]) {
//			int there = i.first;
//			int therecost = i.second;
//			if (dist[there] > cost + therecost) {
//				dist[there] = cost + therecost;
//				q.push({ -dist[there], there });
//			}
//		}
//	}
//	cout << dist[des];
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		v[a].push_back({ b,c });
//	}
//	int start;
//	cin >> start >> des;
//	DI(start);
//}