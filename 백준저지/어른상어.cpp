//#include <iostream>
//using namespace std;
//
//int dir[5][2] = { {0,0}, {-1,0},{1,0},{0,-1},{0,1} }; //고정
//int sharkdir[405];
//int priority[405][6][6]; //고정
//int map[22][22];
//int blood[22][22];
//int sharkloc[22][22];
//int n, m, k;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	cin >> n >> m >> k;   // 5 4 4
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			if (map[i][j] != 0) {
//				sharkloc[i][j] = map[i][j];
//				blood[i][j] = k;
//			}
//		}
//	for (int i = 1; i <= m; i++)
//		cin >> sharkdir[i];
//	for (int k = 1; k <= m; k++)
//		for (int i = 1; i <= 4; i++)
//			for (int j = 0; j < 4; j++)
//				cin >> priority[k][i][j];
//
//
//	int time = 0;
//	while (1)
//	{
//		int sharknum = m;
//		while (sharknum)
//		{
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (sharkloc[i][j] == sharknum)
//					{
//						int direc = sharkdir[sharknum];
//						for (int p = 0; p < 4; p++) {
//							int next = priority[sharknum][direc][p];
//							int nx = i + dir[next][0];
//							int ny = j + dir[next][1];
//							if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//								if (blood[nx][ny] == 0) {
//									sharkdir[sharknum] = next;
//									map[nx][ny] = sharknum;
//									sharkloc[i][j] = 0;
//									sharkloc[nx][ny] = sharknum;
//									goto exit;
//								}
//							}
//						}
//						for (int p = 0; p < 4; p++) {
//							int next = priority[sharknum][direc][p];
//							int nx = i + dir[next][0];
//							int ny = j + dir[next][1];
//							if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//								if (sharkloc[i][j] == map[nx][ny]) {
//									sharkdir[sharknum] = next;
//									map[nx][ny] = sharknum;
//									sharkloc[i][j] = 0;
//									sharkloc[nx][ny] = sharknum;
//									goto exit;
//								}
//							}
//						}
//						goto exit;
//					}
//				}
//			}
//		exit:;
//			sharknum--;
//
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (blood[i][j] != 0) {
//					blood[i][j]--;
//					if (blood[i][j] == 0) {
//						map[i][j] = 0;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (sharkloc[i][j] != 0) {
//					blood[i][j] = k;
//					map[i][j] = sharkloc[i][j];
//				}
//			}
//		}
//
//		/*cout << "--time--" << endl;
//		cout << time << endl;
//		cout << "--SHARK--" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				cout << sharkloc[i][j];
//			cout << endl;
//		}
//		cout << "--MAP--" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				cout << map[i][j];
//			cout << endl;
//		}
//		cout << "--BLOOD--" << endl;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				cout << blood[i][j];
//			cout << endl;
//		}*/
//
//		time++;
//
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (sharkloc[i][j] != 0)cnt++;
//			}
//		}
//		if (cnt == 1)break;
//		if (time >= 1000 && cnt > 1) {
//			cout << -1;
//			return 0;
//		}
//	}
//	cout << time;
//}