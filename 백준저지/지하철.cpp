//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int COM[1005];
////int MAP[1005][1005];
////vector<pair<int, int>> v[1005];
//vector<pair<int, int>> vv[1005];
//priority_queue<pair<int, int>> q;
//
//void DIK() {
//	vector<int> DIST(n, 1e9);
//	//vector<int> COST(n, 1e9);
//	//COST[0] = 0;
//	DIST[0] = 0;
//	q.push({ 0,0 });
//	while (!q.empty()) {
//		int here = q.top().second;
//		int cost = -q.top().first;
//		q.pop();
//		if (DIST[here] < cost)continue;
//		for (int i = 0; i < vv[here].size(); i++) {
//			int there = vv[here][i].first;
//			int therecost = vv[here][i].second;
//			//int therecost2 = vv[here][i].second;
//			if (DIST[there] > cost + therecost) {
//				//if (DIST[there] == cost + therecost) {
//				//	if (COST[there] > COST[here] + therecost2) {
//				//		COST[there] = COST[here] + therecost2;
//				//	}
//				//}
//				//else {
//				//	COST[there] = COST[here] + therecost2;
//				//}
//				DIST[there] = cost + therecost;
//				q.push({ -DIST[there],there });
//			}
//		}
//	}
//	cout << DIST[m] / 1000000 << ' ' << (DIST[m] % 1000000);
//}
//
////void print() {
////	for (int i = 0; i < n; i++) {
////		for (int j = 0; j < n; j++) {
////			cout << MAP[i][j] << ' ';
////		}
////		cout << endl;
////	}
////}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> COM[i];
//	}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		if (COM[i] != COM[j]) {
//	//			MAP[i][j] = 1;
//	//		}
//	//		else MAP[i][j] = 0;
//	//	}
//	//}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int a;
//			cin >> a;
//			if (a == 0)continue;
//			if (COM[i] != COM[j]) {
//				a += 1e6;
//			}
//			//v[i].push_back({ j,MAP[i][j] });
//			vv[i].push_back({ j,a });
//		}
//	}
//	//print();
//	DIK();
//}