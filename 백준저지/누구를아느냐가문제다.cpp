//#include <bits/stdc++.h>
//using namespace std;
//
//vector<pair<int, int>> v[22];
//priority_queue<pair<int, int>> q;
//vector<int> from;
//int n, m;
//
//void print(int x) {
//	if (x == 0) { cout << 0 << ' '; return; }
//	print(from[x]);
//	cout << x << ' ';
//}
//
//void BFS() {
//	from.resize(m);
//	vector<int> dist(m, 1e9);
//	dist[0] = 0;
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
//				from[there] = here;
//				q.push({ -dist[there], there });
//			}
//		}
//	}
//	if (dist[m - 1] == 1e9) { 
//		cout << -1 << endl; 
//	}
//	else {
//		print(m - 1);
//		cout << endl;
//	}
//}
//
//int main() {
//	int t;
//	cin >> t;
//	for (int k = 1; k <= t; k++) {
//		from.clear();
//		for (int i = 0; i < 22; i++) {
//			v[i].clear();
//		}
//		cin >> n >> m;
//		for (int i = 0; i < n; i++) {
//			int a, b, c;
//			cin >> a >> b >> c;
//			v[a].push_back({ b,c });
//			v[b].push_back({ a,c });
//		}
//		cout << "Case #" << k << ": ";
//		q.push({ 0,0 });
//		BFS();
//	}
//}