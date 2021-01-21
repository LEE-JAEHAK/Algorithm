//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dist[105][105];
//int ans[105];
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			dist[i][j] = 1e9;
//			if (i == j)dist[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		dist[a][b] = 1;
//		dist[b][a] = 1;
//	}
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//	int minn = 1e9;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			ans[i] += dist[i][j];
//		}
//		//cout << ans[i] << '\n';
//		minn = min(ans[i], minn);
//	}
//	for (int i = 1; i <= n; i++) {
//		if (ans[i] == minn) {
//			cout << i;
//			return 0;
//		}
//	}
//}