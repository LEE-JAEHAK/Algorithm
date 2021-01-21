//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int A[50002];
//int B[50002];
//int Avisited[50002];
//int Bvisited[50002];
//
//int main() {
//	int m, n;
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		cin >> A[i];
//		Bvisited[A[i]] = 1;
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> B[i];
//		Avisited[B[i]] = 1;
//	}
//
//	for (int i = 1; i <= m; i++) {
//		if (Avisited[i] == 0) {
//			Avisited[i] = 2;
//			Bvisited[A[i]] = 4;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (Bvisited[i] == 0) {
//			Bvisited[i] = 2;
//			Avisited[B[i]] = 4;
//		}
//	}
//
//	for (int i = 1; i <= m; i++) {
//		if (Avisited[i] == 1) {
//			Avisited[i] = 2;
//			Bvisited[A[i]] = 4;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (Bvisited[i] == 1) {
//			Bvisited[i] = 2;
//			Avisited[B[i]] = 4;
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		if (Avisited[i] == 2)Avisited[i] = 1;
//		if (Avisited[i] == 4)Avisited[i] = 0;
//		cout << Avisited[i];
//	}
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		if (Bvisited[i] == 2)Bvisited[i] = 1;
//		if (Bvisited[i] == 4)Bvisited[i] = 0;
//		cout << Bvisited[i];
//	}
//}