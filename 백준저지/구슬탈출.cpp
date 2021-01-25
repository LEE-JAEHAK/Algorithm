#include <bits/stdc++.h>
using namespace std;

int n, m;
char MAP[12][12];
vector<int> v;
bool red = 1;
bool blue = 1;

void print() {
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << MAP[i][j];
		}
		cout << endl;
	}
}

void GOUP(int x, int y) {
	char tmp = MAP[x][y];
	MAP[x][y] = '.';
	while (MAP[x - 1][y] == '.') {
		x--;
	}
	if (tmp == 'R' && MAP[x - 1][y] == 'O') {
		red = 0;
	}
	else if (tmp == 'B' && MAP[x - 1][y] == 'O') {
		blue = 0;
	}
	else
		MAP[x][y] = tmp;
}

void UP() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (MAP[i][j] == 'R' || MAP[i][j] == 'B') {
				GOUP(i, j);
			}
		}
	}
}

void GODOWN(int x, int y) {
	char tmp = MAP[x][y];
	MAP[x][y] = '.';
	while (MAP[x + 1][y] == '.') {
		x++;
	}
	if (tmp == 'R' && MAP[x + 1][y] == 'O') {
		red = 0;
	}
	else if (tmp == 'B' && MAP[x + 1][y] == 'O') {
		blue = 0;
	}
	else
		MAP[x][y] = tmp;
}

void DOWN() {
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			if (MAP[i][j] == 'R' || MAP[i][j] == 'B') {
				GODOWN(i, j);
			}
		}
	}
}

void GOLEFT(int x, int y) {
	char tmp = MAP[x][y];
	MAP[x][y] = '.';
	while (MAP[x][y - 1] == '.') {
		y--;
	}
	if (tmp == 'R' && MAP[x][y - 1] == 'O') {
		red = 0;
	}
	else if (tmp == 'B' && MAP[x][y - 1] == 'O') {
		blue = 0;
	}
	else
		MAP[x][y] = tmp;
}

void LEFT() {
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (MAP[i][j] == 'R' || MAP[i][j] == 'B') {
				GOLEFT(i, j);
			}
		}
	}
}

void GORIGHT(int x, int y) {
	char tmp = MAP[x][y];
	MAP[x][y] = '.';
	while (MAP[x][y + 1] == '.') {
		y++;
	}
	if (tmp == 'R' && MAP[x][y + 1] == 'O') {
		red = 0;
	}
	else if (tmp == 'B' && MAP[x][y + 1] == 'O') {
		blue = 0;
	}
	else
		MAP[x][y] = tmp;
}

void RIGHT() {
	for (int j = m - 1; j >= 0; j--) {
		for (int i = 0; i < n; i++) {
			if (MAP[i][j] == 'R' || MAP[i][j] == 'B') {
				GORIGHT(i, j);
			}
		}
	}
}

char COPY[12][12];

void reset() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			MAP[i][j] = COPY[i][j];
		}
	}
}

void print2() {
	cout << endl;
	for (auto i : v)cout << i << ' ';
}

void DFS() {
	if (v.size() == 10) {
		reset();
		red = 1, blue = 1;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1)UP();
			if (v[i] == 2)DOWN();
			if (v[i] == 3)LEFT();
			if (v[i] == 4)RIGHT();
			if (red == 0 && blue == 1) {
				cout << 1;
				exit(0);
			}
		}
		//print2();
		//print();
		return;
	}
	for (int i = 1; i <= 4; i++) {
		v.push_back(i);
		DFS();
		v.pop_back();
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> MAP[i][j];
			COPY[i][j] = MAP[i][j];
		}
	}
	DFS();
	cout << 0;
}