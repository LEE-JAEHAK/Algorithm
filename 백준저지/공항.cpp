//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int g, p;
//int arr[100005];
//int parent[100005];
//
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	if (x > y)swap(x, y);
//	parent[y] = x;
//}
//
//int main() {
//	cin >> g >> p;
//	for (int i = 0; i < 100003; i++)parent[i] = i;
//	int ans = 0;
//	for (int i = 1; i <= p; i++) {
//		cin >> arr[i];
//		int a = find(arr[i]);
//		if (a == 0)break;
//		merge(a, a - 1);
//		ans = i;
//	}
//	cout << ans;
//}