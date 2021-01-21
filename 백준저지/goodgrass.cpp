//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[103][103];
//int sum(int a, int b) {
//	int sum = 0;
//	for (int i = a; i < a + 3; i++) {
//		for (int j = b; j < b + 3; j++) {
//			sum += arr[i][j];
//		}
//	}
//	return sum;
//}
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= b; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	int maxi = 0, ai = 0, aj = 0;
//	for (int i = 1; i <= a - 2; i++) {
//		for (int j = 1; j <= b - 2; j++) {
//			if (maxi < sum(i, j)) {
//				maxi = sum(i, j);
//				ai = i;
//				aj = j;
//			}
//		}
//	}
//	cout << maxi << '\n' << ai << ' ' << aj;
//}