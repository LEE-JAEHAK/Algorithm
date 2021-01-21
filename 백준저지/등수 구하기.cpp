//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int arr[100];
//
//int main() {
//	long long int n, score, p;
//	cin >> n >> score >> p;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int rank = 1;
//	for (int i = 0; i < n; i++) {
//		if (score < arr[i]) {
//			rank++;
//		}
//		if (i == n - 1) {
//			if (n == p && score <= arr[i]) {
//				cout << -1;
//				return 0;
//			}
//		}
//	}
//	cout << rank;
//}