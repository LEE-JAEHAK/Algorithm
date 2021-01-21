//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <set>
//using namespace std;
//
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<int> q;
//map<int, int> m;
//void BFS() {
//	while (!q.empty()) {
//		int num = q.front(); // 1 9 3 4 2 5 7 8 6
//		string tmp = to_string(num);
//		q.pop();
//		int loc = tmp.find('9');
//		int x = loc / 3;
//		int y = loc % 3;
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < 3 && 0 <= ny && ny < 3) {
//				string next = tmp;
//				swap(next[x * 3 + y], next[nx * 3 + ny]);
//				int num2 = stoi(next);
//
//				if (m.count(num2) == 0) {
//					m[num2] = m[num] + 1;
//					q.push(num2);
//				}
//			}
//		}
//	}
//	if (m.count(123456789) == 0)cout << -1;
//	else cout << m[123456789];
//}
//int main() {
//	string s;
//	for (int i = 0; i < 9; i++) {
//		int n;
//		cin >> n;
//		if (n == 0)n = 9;
//		s += to_string(n);
//	}
//	int num = stoi(s);
//	q.push(num);
//	m[num] = 0;
//	BFS();
//}