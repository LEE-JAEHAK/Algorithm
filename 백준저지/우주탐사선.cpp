//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int dist[12][12];
//int n, k;
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> dist[i][j];
//		}
//	}
//	for (int k = 0; k < n; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//			}
//		}
//	}
//
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		if (i != k)v.push_back(i);
//	}
//	int ans = 1e9;
//	do {
//		int time = dist[k][v[0]];
//		for (int i = 1; i < v.size(); i++) {
//			time += dist[v[i - 1]][v[i]];
//		}
//		ans = min(ans, time);
//	} while (next_permutation(v.begin(), v.end()));
//	cout << ans;
//}