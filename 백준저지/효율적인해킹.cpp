//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<int> v[10002];
//queue<int> q;
//bool visited[10002];
//int cnt[10002];
//
//void BFS(int st) {
//	while (!q.empty()) {
//		int n = q.front();
//		q.pop();
//		for (int i = 0; i < v[n].size(); i++) {
//			int nn = v[n][i];
//			if (visited[nn] == 0) {
//				visited[nn] = 1;
//				q.push(nn);
//			}
//		}
//		cnt[st]++;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int n, m;
//	cin >> n >> m;
//	while (m--) {
//		int a, b;
//		cin >> a >> b;
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//		visited[i] = 1;
//		BFS(i);
//		for (int j = 1; j <= n; j++) {
//			visited[j] = 0;
//		}
//	}
//	int maxi = 0;
//	for (int i = 1; i <= n; i++) {
//		if (maxi < cnt[i]) {
//			maxi = cnt[i];
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (maxi == cnt[i]) {
//			cout << i << ' ';
//		}
//	}
//}