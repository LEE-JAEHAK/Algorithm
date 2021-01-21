//#include <iostream>
//using namespace std;
//
//int A[105][105];
//int B[105][105];
//int C[105][105];
//
//int main() {
//	int n, m, k;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cin >> A[i][j];
//	cin >> m >> k;
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < k; j++)
//			cin >> B[i][j];
//
//	for (int i = 0; i < n; i++) {
//		for (int p = 0; p < k; p++) {
//			for (int j = 0; j < m; j++) {
//				C[i][p] += A[i][j] * B[j][p];
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < k; j++) {
//			cout << C[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}