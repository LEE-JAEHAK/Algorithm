//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[105];
//int visited[105];
//int cycle[105];
//int cnt;
//
//void reset() {
//	for (int i = 1; i <= n; i++) {
//		visited[i] = 0;
//	}
//}
//
//void DFS(int start, int n) {
//	if (visited[n])return;
//	visited[n] = 1;
//	DFS(start, arr[n]);
//	if (start == n) {
//		cnt++;
//		cycle[start] = 1;
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		DFS(i, arr[i]);
//		reset();
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= n; i++) {
//		if (cycle[i] != 0)cout << i << endl;
//	}
//}