//#include <bits/stdc++.h>
//using namespace std;
//
//int KEY[100][100];
//int MAP[100][100];
//
//void rotate(int sz) {
//	int tmp[25][25];
//	for (int i = 1; i <= sz; i++) {
//		for (int j = 1; j <= sz; j++) {
//			tmp[j][sz - i + 1] = KEY[i][j];
//		}
//	}
//	for (int i = 1; i <= sz; i++) {
//		for (int j = 1; j <= sz; j++) {
//			KEY[i][j] = tmp[i][j];
//		}
//	}
//}
//
//bool check(int sz) {
//	for (int i = 21; i <= 20 + sz; i++) {
//		for (int j = 21; j <= 20 + sz; j++) {
//			if (MAP[i][j] == 0)return 0;
//			if (MAP[i][j] > 1)return 0;
//		}
//	}
//	return 1;
//}
//
//void reset() {
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			MAP[i][j] = 0;
//		}
//	}
//}
//
//void reset2(vector<vector<int>> lock) {
//	for (int i = 0; i < lock.size(); i++) {
//		for (int j = 0; j < lock.size(); j++) {
//			MAP[i + 21][j + 21] = lock[i][j];
//		}
//	}
//}
//
//void gokey(int x, int y, int sz) {
//	for (int i = x; i < x + sz; i++) {
//		for (int j = y; j < y + sz; j++) {
//			MAP[i][j] += KEY[i - x + 1][j - y + 1];
//		}
//	}
//}
//
//void print() {
//	cout << endl;
//	for (int i = 19; i <= 25; i++) {
//		for (int j = 19; j <= 25; j++) {
//			cout << MAP[i][j];
//		}
//		cout << endl;
//	}
//}
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//	bool answer = 0;
//	int keysize = key.size();
//	int mapsize = lock.size();
//
//	for (int i = 0; i < keysize; i++) {
//		for (int j = 0; j < keysize; j++) {
//			KEY[i + 1][j + 1] = key[i][j];
//		}
//	}
//
//	reset();
//	reset2(lock);
//	for (int k = 1; k <= 4; k++) {
//		for (int i = 22 - keysize; i <= 20 + mapsize; i++) {
//			for (int j = 22 - keysize; j <= 20 + mapsize; j++) {
//				reset();
//				reset2(lock);
//				gokey(i, j, keysize);
//				if (check(mapsize))return 1;
//				//print();
//			}
//		}
//		rotate(keysize);
//	}
//
//	return answer;
//}
//
//int main() {
//	cout << solution({ {0, 0, 0}, {1, 0, 0}, {0, 1, 1} }, { {1, 1, 1}, {1, 1, 0}, {1, 0, 1} });
//}