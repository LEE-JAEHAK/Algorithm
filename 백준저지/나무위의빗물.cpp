//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v[500'005];
//int visited[500005];
//queue<int> q;
//double cnt;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		if (x != 1 && v[x].size() == 1) {
//			cnt++;
//		}
//		for (int i = 0; i < v[x].size(); i++) {
//			int nx = v[x][i];
//			if (visited[nx] == 0) {
//				visited[nx] = 1;
//				q.push(nx);
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	double w;
//	cin >> n >> w;
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	visited[1] = 1;
//	q.push(1);
//	BFS();
//	//cout << fixed;
//	cout.precision(6);
//	cout << fixed << w / cnt;
//}