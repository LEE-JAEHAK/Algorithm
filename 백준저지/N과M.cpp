#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m;
vector<int> v;
int visited[10];

//void dfs1(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] == 0) {
//			v.push_back(i);
//			visited[i] = 1;
//			dfs1(cnt + 1);
//			visited[i] = 0;
//			v.pop_back();
//		}
//	}
//}

//void dfs2(int idx, int cnt) {
//	if (idx > n + 1)return;
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	v.push_back(idx);
//	dfs2(idx + 1, cnt + 1);
//	v.pop_back();
//	dfs2(idx + 1, cnt);
//}

//void dfs2(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = idx; i <= n; i++) {
//		if (visited[i] == 0) {
//			visited[i] = 1;
//			v.push_back(i);
//			dfs2(idx + 1, cnt + 1);
//			visited[i] = 0;
//			v.pop_back();
//		}
//	}
//}

//void dfs3(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = idx; i <= n; i++) {
//		v.push_back(i);
//		dfs3(idx, cnt + 1);
//		v.pop_back();
//	}
//}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	//dfs1(0);
	//dfs2(1, 0);
	//dfs3(1, 0);
}