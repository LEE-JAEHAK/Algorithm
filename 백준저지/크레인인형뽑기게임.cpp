//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//
//void print(vector<vector<int>> board) {
//	cout << endl;
//	for (auto i : v)cout << i << ' ';
//	cout << endl;
//	for (int i = 0; i < board.size(); i++) {
//		for (int j = 0; j < board[0].size(); j++) {
//			cout << board[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//	int answer = 0;
//	for (int k = 0; k < moves.size(); k++) {
//		int x = moves[k] - 1;
//		for (int i = 0; i < board.size(); i++) {
//			if (board[i][x] != 0) {
//				v.push_back(board[i][x]);
//				board[i][x] = 0;
//				break;
//			}
//		}
//		if (v.size() > 1) {
//			if (v[v.size() - 1] == v[v.size() - 2]) {
//				answer++;
//				v.pop_back();
//				v.pop_back();
//			}
//		}
//		//print(board);
//	}
//
//	return answer*2;
//}
//
//int main() {
//	vector<vector<int>> board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
//	vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
//
//	cout << solution(board, moves);
//}