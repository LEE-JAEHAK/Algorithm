//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[1'000'005];
//int ranks[1'000'005];
//
//int find(int x) {
//	if (x == arr[x])return x;
//	else return arr[x] = find(arr[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	if (ranks[x] < ranks[y]) swap(x, y);
//	arr[y] = x;
//	if (ranks[x] == ranks[y])ranks[x] = ranks[y] + 1;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i <= n; i++) { arr[i] = i; ranks[i] = 0; }
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0) {
//			merge(b, c);
//		}
//		if (a == 1) {
//			if (find(b) == find(c))cout << "YES\n";
//			else cout << "NO\n";
//		}
//	}
//}