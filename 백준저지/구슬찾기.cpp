//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> pa[101];
//vector<int> ch[101];
//queue<int> q;
//bool visited[101];
//
//int BFS1() {
//	int cnt = 0;
//	while (!q.empty()) {
//		int n = q.front();
//		q.pop();
//		cnt++;
//		for (int i = 0; i < pa[n].size(); i++) {
//			int nn = pa[n][i];
//			if (visited[nn] == 0) {
//				q.push(nn);
//				visited[nn] = 1;
//			}
//		}
//	}
//	return cnt;
//}
//
//int BFS2() {
//	int cnt = 0;
//	while (!q.empty()) {
//		int n = q.front();
//		q.pop();
//		cnt++;
//		for (int i = 0; i < ch[n].size(); i++) {
//			int nn = ch[n][i];
//			if (visited[nn] == 0) {
//				q.push(nn);
//				visited[nn] = 1;
//			}
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		pa[b].push_back(a);
//		ch[a].push_back(b);
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//		visited[i] = 1;
//		int nop = BFS1() - 1;
//		for (int j = 1; j <= n; j++) {
//			visited[j] = 0;
//		}
//		q.push(i);
//		visited[i] = 1;
//		int noc = BFS2() - 1;
//		for (int j = 1; j <= n; j++) {
//			visited[j] = 0;
//		}
//		if (nop >= (n + 1) / 2 || noc >= (n + 1) / 2) {
//			ans++;
//		}
//	}
//	cout << ans;
//}