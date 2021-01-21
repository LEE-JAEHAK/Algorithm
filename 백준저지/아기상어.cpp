//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int map[22][22];
//int visited[22][22];
//int fsize[22][22];
//bool edible[22][22];
//int shark = 2;
//int sharkeat;
//int anstime;
//int dir[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
//queue<pair<int, int>> q;
//int n;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		if (0 < fsize[x][y] && fsize[x][y] < shark) {
//			edible[x][y] = 1;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//				if (visited[nx][ny] == 0 && fsize[nx][ny] <= shark) {
//					q.push(make_pair(nx, ny));
//					visited[nx][ny] = visited[x][y] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			if (map[i][j] != 9)
//				fsize[i][j] = map[i][j];
//		}
//	}
//
//	while (1) {
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (map[i][j] == 9) {
//					map[i][j] = 0;
//					q.push(make_pair(i, j));
//					visited[i][j] = 1;
//					BFS();
//				}
//			}
//		}
//
//		int mini = 1e9, ediblecnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (edible[i][j] == 1) {
//					mini = min(mini, visited[i][j]);
//					ediblecnt++;
//				}
//			}
//		}
//		if (ediblecnt == 0) {
//			cout << anstime;
//			break;
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (edible[i][j] == 1 && visited[i][j] == mini) {
//					sharkeat++;
//					map[i][j] = 9;
//					fsize[i][j] = 0;
//					anstime += visited[i][j] - 1;
//					if (sharkeat == shark) {
//						shark++;
//						sharkeat = 0;
//					}
//					goto exit;
//				}
//			}
//		}
//	exit:;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				visited[i][j] = 0;
//				edible[i][j] = 0;
//			}
//		}
//
//	}
//
//
//
//
//	//출력 확인 
//	/*cout << endl << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << edible[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << fsize[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << '\n';
//	}*/
//}