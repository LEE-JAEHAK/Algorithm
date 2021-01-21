//#include <iostream>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//int check[10001][10001];
//queue<pair<int, int>> q;
//int BFS(int s) {
//	while (!q.empty()) {
//		int scr, clbd;
//		tie(scr, clbd) = q.front();
//		//cout << scr << ' ' << clbd << ' ' << check[scr][clbd] << endl;
//		q.pop();
//		if (scr != 0 && scr != clbd && check[scr][scr] == 0) {
//			q.push(make_pair(scr, scr));
//			check[scr][scr] = check[scr][clbd] + 1;
//		}
//		if (clbd != 0 && check[scr + clbd][clbd] == 0) {
//			q.push(make_pair(scr + clbd, clbd));
//			check[scr + clbd][clbd] = check[scr][clbd] + 1;
//			if (scr + clbd == s)return check[scr + clbd][clbd];
//		}
//		if (scr != 0 && check[scr - 1][clbd] == 0) {
//			q.push(make_pair(scr - 1, clbd));
//			check[scr - 1][clbd] = check[scr][clbd] + 1;
//			if (scr - 1 == s)return check[scr - 1][clbd];
//		}
//	}
//}
//int main() {
//	int s;
//	cin >> s;
//	q.push(make_pair(1, 0));
//	check[1][0] = 1;
//	cout << BFS(s) - 1;
//}