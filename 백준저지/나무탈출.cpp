//#include <bits/stdc++.h>
//using namespace std;
//
//int visited[500'005];
//vector<int> v[500'005];
//queue<int> q;
//int cnt;
//
//void GO() {
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		if (x != 1 && v[x].size() == 1) {
//			cnt += visited[x] - 1;
//		}
//		for (int i = 0; i < v[x].size(); i++) {
//			int nx = v[x][i];
//			if (visited[nx] == 0) {
//				visited[nx] = visited[x] + 1;
//				q.push(nx);
//			}
//		}
//	}
//
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	q.push(1);
//	visited[1] = 1;
//	GO();
//	if (cnt % 2)cout << "Yes";
//	else cout << "No";
//}