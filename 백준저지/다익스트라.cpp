//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int INF = 1e9;
//int V, E;
//vector<pair<int, int>> adj[20005];
//
//void dik(int start) {
//	vector<int> dist(V + 1, INF);
//	priority_queue<pair<int, int>> pq;
//	pq.push({ start, 0 });
//	dist[start] = 0;
//	while (!pq.empty()) {
//		int here = pq.top().first;
//		int cost = -pq.top().second;
//		pq.pop();
//		if (dist[here] < cost)continue;
//		for (int i = 0; i < adj[here].size(); i++) {
//			int there = adj[here][i].first;
//			int therecost = adj[here][i].second;
//			if (dist[there] > cost + therecost) {
//				dist[there] = cost + therecost;
//				pq.push(make_pair(there, -dist[there]));
//			}
//		}
//	}
//	for (int i = 1;i <= V;i++) {
//		if (dist[i] == 1e9)cout << "INF\n";
//		else printf("%d\n", dist[i]);
//	}
//}
//
//int main() {
//	cin >> V >> E;
//	int k;
//	cin >> k;
//	for (int i = 0; i < E; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		adj[a].push_back({ b,c });
//	}
//	dik(k);
//}