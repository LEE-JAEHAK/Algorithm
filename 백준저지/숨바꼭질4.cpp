//#include <iostream>
//#include <queue>
//using namespace std;
//int check[100001];
//int from[100001];
//queue<int> q;
//int BFS(int n, int k) { // 5 17
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//		if (now == k)return check[now];
//		if (now - 1 >= 0 && check[now - 1] == 0) {
//			q.push(now - 1);
//			check[now - 1] = check[now] + 1;
//			from[now - 1] = now;
//		}
//		if (now + 1 < 100001 && check[now + 1] == 0) {
//			q.push(now + 1);
//			check[now + 1] = check[now] + 1;
//			from[now + 1] = now;
//		}
//		if (now * 2 < 100001 && check[now * 2] == 0) {
//			q.push(now * 2);
//			check[now * 2] = check[now] + 1;
//			from[now * 2] = now;
//		}
//	}
//}
//void print(int n, int k) {
//	if (k != n) {
//		print(n, from[k]);
//	}
//	cout << k << ' ';
//}
//int main() {
//	int n, k;
//	cin >> n >> k; // 5 17
//	q.push(n);
//	check[n]++;
//	cout << BFS(n, k) - 1 << endl;
//	print(n, k);
//}