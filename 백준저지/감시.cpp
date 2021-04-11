#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10][10];
int dup[10][10];
int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
vector<pair<pair<int, int>, pair<int, int>>> v;
// x좌표, y좌표, cctv종류, 방향
vector<int> vv;

void cctv(int x, int y, int di) { // 몇 번째
	int nx = x + dir[di][0];
	int ny = y + dir[di][1];
	while (0 <= nx && nx < n && 0 <= ny && ny < m) {
		if (arr[nx][ny] == 6)break;
		if (arr[nx][ny] >= 1 && arr[nx][ny] <= 5) {
			nx += dir[di][0];
			ny += dir[di][1];
			continue;
		}
		arr[nx][ny] = 9;
		nx += dir[di][0];
		ny += dir[di][1];
	}
}

void func() {
	for (int i = 0; i < v.size(); i++) {
		int x = v[i].first.first;
		int y = v[i].first.second;
		int di = v[i].second.second;

		if (v[i].second.first == 1) {
			cctv(x, y, di);
		}
		else if (v[i].second.first == 2) {
			cctv(x, y, di);
			cctv(x, y, (di + 2) % 4);
		}
		else if (v[i].second.first == 3) {
			cctv(x, y, di);
			cctv(x, y, (di + 1) % 4);
		}
		else if (v[i].second.first == 4) {
			cctv(x, y, di);
			cctv(x, y, (di + 1) % 4);
			cctv(x, y, (di + 2) % 4);
		}
	}
}

void print() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

int minn = 1e9;
int SUM() {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0)sum++;
		}
	}
	return sum;
}

void reset() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = dup[i][j];
		}
	}
}

void dfs(int cnt) {
	if (cnt == v.size()) {
		reset();
		for (int i = 0; i < v.size(); i++) { // cctv 개수
			v[i].second.second = vv[i]; // 방향 바꾸기 
		}
		func();
		//print();
		minn = min(minn, SUM());
		return;
	}
	for (int i = 0; i < 4; i++) {
		vv.push_back(i);
		dfs(cnt + 1);
		vv.pop_back();
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > 0 && arr[i][j] < 5) {
				v.push_back({ {i,j},{arr[i][j],0} });
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 5) {
				cctv(i, j, 0);
				cctv(i, j, 1);
				cctv(i, j, 2);
				cctv(i, j, 3);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dup[i][j] = arr[i][j];
		}
	}

	dfs(0);
	cout << minn;
}