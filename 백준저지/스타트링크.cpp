//#include <bits/stdc++.h>
//using namespace std;
//
//int f, s, g, u, d;
//int visited[1000005];
//queue<int> q;
//bool flag;
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		if (x == g) {
//			cout << visited[x] - 1;
//			flag = 1;
//			break;
//		}
//		int nx = x + u;
//		int ny = x - d;
//		if (0 < nx && nx <= f) {
//			if (visited[nx] == 0) {
//				q.push(nx);
//				visited[nx] = visited[x] + 1;
//			}
//		}
//		if (0 < ny && ny <= f) {
//			if (visited[ny] == 0) {
//				q.push(ny);
//				visited[ny] = visited[x] + 1;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> f >> s >> g >> u >> d;
//	visited[s] = 1;
//	q.push(s);
//	bfs();
//	if (flag == 0) {
//		cout << "use the stairs";
//	}
//}