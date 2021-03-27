#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m;
vector<int> v;
vector<int> arr;
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
//			dfs2(i + 1, cnt + 1);
//			visited[i] = 0;
//			v.pop_back();
//		}
//	}
//}

//void dfs3(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		v.push_back(i);
//		dfs3(cnt + 1);
//		v.pop_back();
//	}
//}

//void dfs4(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = idx; i <= n; i++) {
//		v.push_back(i);
//		dfs4(i, cnt + 1);
//		v.pop_back();
//	}
//}

//void dfs5(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (visited[i] == 0) {
//			visited[i] = 1;
//			v.push_back(arr[i]);
//			dfs5(cnt + 1);
//			visited[i] = 0;
//			v.pop_back();
//		}
//	}
//}

//void dfs6(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = idx; i < n; i++) {
//		if (visited[i] == 0) {
//			visited[i] = 1;
//			v.push_back(arr[i]);
//			dfs6(i + 1, cnt + 1);
//			v.pop_back();
//			visited[i] = 0;
//		}
//	}
//}

//void dfs7(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		v.push_back(arr[i]);
//		dfs7(cnt + 1);
//		v.pop_back();
//	}
//}

//void dfs8(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	for (int i = idx; i < n; i++) {
//		v.push_back(arr[i]);
//		dfs8(i, cnt + 1);
//		v.pop_back();
//	}
//}

//void dfs9(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	int tmp = 0;
//	for (int i = 0; i < n; i++) {
//		if (visited[i] == 0 && arr[i] != tmp) {
//			visited[i] = 1;
//			v.push_back(arr[i]);
//			tmp = arr[i];
//			dfs9(cnt + 1);
//			v.pop_back();
//			visited[i] = 0;
//		}
//	}
//}

//void dfs10(int idx, int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	int tmp = 0;
//	for (int i = idx; i < n; i++) {
//		if (tmp != arr[i]) {
//			v.push_back(arr[i]);
//			tmp = arr[i];
//			dfs10(i + 1, cnt + 1);
//			v.pop_back();
//		}
//	}
//}

//void dfs11(int cnt) {
//	if (cnt == m) {
//		for (auto i : v)cout << i << ' ';
//		cout << endl;
//		return;
//	}
//	int tmp = 0;
//	for (int i = 0; i < n; i++) {
//		if (tmp != arr[i]) {
//			tmp = arr[i];
//			v.push_back(arr[i]);
//			dfs11(cnt + 1);
//			v.pop_back();
//		}
//	}
//}

void dfs12(int idx, int cnt) {
	if (cnt == m) {
		for (auto i : v)cout << i << ' ';
		cout << endl;
		return;
	}
	int tmp = 0;
	for (int i = idx; i < n; i++) {
		if (tmp != arr[i]) {
			tmp = arr[i];
			v.push_back(arr[i]);
			dfs12(i, cnt + 1);
			v.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	//dfs1(0);
	//dfs2(1, 0);
	//dfs3(0);
	//dfs4(1, 0);

	arr.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	//dfs5(0);
	//dfs6(0, 0);
	//dfs7(0);
	//dfs8(0, 0);

	//dfs9(0);
	//dfs10(0, 0);
	//dfs11(0);
	dfs12(0, 0);
}