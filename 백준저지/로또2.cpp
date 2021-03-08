#include <bits/stdc++.h>
using namespace std;

void DFS(int n, int idx, int cnt, vector<int> v, vector<int> tmp) {
	if (cnt == 6) {
		for (auto i : tmp) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	if (idx == n)return;
	tmp.push_back(v[idx]);
	DFS(n, idx + 1, cnt + 1, v, tmp);
	tmp.pop_back();
	DFS(n, idx + 1, cnt, v, tmp);
}

int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0)break;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		vector<int> tmp;
		DFS(n, 0, 0, v, tmp);
		cout << '\n';
	}
}