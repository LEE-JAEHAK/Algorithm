//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> v[101];
//bool check[101];
//
//void bfs() {
//	queue<int> q;
//	q.push(1);
//	while (!q.empty()) {
//		int tmp = q.front();
//		check[tmp] = true;
//		q.pop();
//		for (int i = 0; i < v[tmp].size(); i++) {
//			if (check[v[tmp][i]] == false) {
//				q.push(v[tmp][i]);
//				check[v[tmp][i]] = true;
//			}
//
//		}
//	}
//}
//int main() {
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < k; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	bfs();
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (check[i] == true) {
//			ans++;
//		}
//	}
//	cout << ans - 1;
//}
