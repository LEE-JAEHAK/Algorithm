//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> v[101];
//int blue[101];
//int white[101];
//queue<int> q;
//int visited[101];
//
//void BFS() {
//	while (!q.empty()) {
//		int n = q.front();
//		q.pop();
//		for (int i = 0; i < v[n].size(); i++) {
//			int nn = v[n][i];
//			if (visited[nn] == 0) {
//				q.push(nn);
//				visited[nn] = visited[n] + 1;
//			}
//		}
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int m;
//		cin >> m;
//		for (int j = 0; j < m; j++) {
//			int tmp;
//			cin >> tmp;
//			v[i].push_back(tmp);
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] == 0) {
//			visited[i] = 1;
//			q.push(i);
//			BFS();
//		}
//	}
//	int cb = 0, cw = 0;
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] % 2 == 1) {
//			cb++;
//			blue[i] = 1;
//		}
//		else {
//			cw++;
//			white[i] = 1;
//		}
//		//cout << visited[i] << ' ';
//	}
//
//	cout << cb << '\n';
//	for (int i = 1; i <= n; i++) {
//		if (blue[i])cout << i << ' ';
//	}
//	cout << '\n';
//
//	cout << cw << '\n';
//	for (int i = 1; i <= n; i++) {
//		if (white[i])cout << i << ' ';
//	}
//}