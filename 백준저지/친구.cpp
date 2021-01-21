//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int cnt[52];
//vector<int> v[51];
//int visited[52];
//queue<int> q;
//
//void BFS(int n) {
//	while (!q.empty()) {
//		int num = q.front();
//		q.pop();
//		if (visited[num] == 3) {
//			cnt[n]++;
//			goto a;
//		}
//		for (int i = 0; i < v[num].size(); i++) {
//			int tn = v[num][i];
//			if (visited[tn] == 0) {
//				q.push(tn);
//				visited[tn] = visited[num] + 1;
//			}
//		}
//	a:;
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			char a;
//			cin >> a;
//			if (a == 'Y') {
//				cnt[i]++;
//				v[i].push_back(j);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//		visited[i] = 1;
//		BFS(i);
//		for (int j = 1; j <= n; j++) {
//			visited[j] = 0;
//		}
//	}
//	//for (int i = 1; i <= n; i++) {
//	//	cout << cnt[i] << ' ';
//	//}
//	//cout << '\n';
//	int maxi = 0, tmp = 0;
//	for (int i = 1; i <= n; i++) {
//		if (maxi < cnt[i]) {
//			maxi = cnt[i];
//			tmp = i;
//		}
//	}
//	cout << maxi;
//}