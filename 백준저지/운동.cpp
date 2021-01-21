//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dist[405][405];
//
//int main() {
//	int v, e;
//	cin >> v >> e;
//	for (int i = 0; i <= v; i++) {
//		for (int j = 0; j <= v; j++) {
//			dist[i][j] = 1e9;
//		}
//	}
//	for (int i = 0; i < e; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		dist[a][b] = c;
//	}
//	for (int k = 1; k <= v; k++) {
//		for (int i = 1; i <= v; i++) {
//			for (int j = 1; j <= v; j++) {
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//	int minn = 1e9;
//	for (int i = 1; i <= v; i++) {
//		minn = min(minn, dist[i][i]);
//	}
//	if (minn == 1e9)cout << -1;
//	else cout << minn;
//}