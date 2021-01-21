//#include <iostream>
//using namespace std;
//
//int arr[130][130];
//void recur(int n, int std, int row, int col) {
//	for (int i = row; i < row + n; i++) {
//		for (int j = col; j < col + n; j++) {
//			if (arr[i][j] != std) {
//				cout << '(';
//				recur(n / 2, arr[row][col], row, col);
//				recur(n / 2, arr[row][col + n / 2], row, col + n / 2);
//				recur(n / 2, arr[row + n / 2][col], row + n / 2, col);
//				recur(n / 2, arr[row + n / 2][col + n / 2], row + n / 2, col + n / 2);
//				cout << ")";
//				return;
//			}
//		}
//	}
//	if (std == 0)cout << 0;
//	if (std == 1)cout << 1;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			scanf("%1d", &arr[i][j]);
//	recur(n, arr[0][0], 0, 0);
//}