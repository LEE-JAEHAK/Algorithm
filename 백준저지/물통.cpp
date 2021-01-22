//#include <bits/stdc++.h>
//using namespace std;
//
//int A, B, C;
//int visited[205][205][205];
//queue<pair<pair<int, int>, int>> q;
//vector<int> v;
//
//void BFS() {
//	while (!q.empty()) {
//		int a = q.front().first.first;
//		int b = q.front().first.second;
//		int c = q.front().second;
//		q.pop();
//
//		if (visited[a][b][c])continue;
//		visited[a][b][c] = 1;
//		if (a == 0)v.push_back(c);
//
//		if (a + b > B) { // A->B
//			q.push({ {a + b - B,B},c });
//		}
//		else {
//			q.push({ {0,a + b} ,c });
//		}
//		if (b + a > A) q.push({ {A, b + a - A}, c });
//		else q.push(make_pair(make_pair(b + a, 0), c));
//
//		if (b + c > C) q.push(make_pair(make_pair(a, b + c - C), C));
//		else q.push(make_pair(make_pair(a, 0), b + c));
//
//		if (c + a > A) q.push(make_pair(make_pair(A, b), c + a - A));
//		else q.push(make_pair(make_pair(c + a, b), 0));
//
//		if (c + b > B) q.push(make_pair(make_pair(a, B), c + b - B));
//		else q.push(make_pair(make_pair(a, b + c), 0));
//
//
//	}
//	sort(v.begin(), v.end());
//	for (auto i : v)cout << i << ' ';
//}
//
//int main() {
//	cin >> A >> B >> C;
//	q.push({ {0,0},C });
//	BFS();
//}