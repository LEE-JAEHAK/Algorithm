//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int dist[405][405];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			dist[i][j] = 1e9;
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		int a, b;
//		cin >> a >> b;
//		dist[b][a] = 1;
//	}
//	for (int k = 1; k <= n; k++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//
//	int s;
//	cin >> s;
//	for (int i = 0; i < s; i++) {
//		int a, b;
//		cin >> a >> b;
//		if (dist[b][a] == 1e9 && dist[a][b] == 1e9)cout << 0 << '\n';
//		else {
//			if (dist[b][a] != 1e9) cout << -1 << '\n';
//			else cout << 1 << '\n';
//		}
//	}
//}