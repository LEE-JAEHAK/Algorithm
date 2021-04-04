//#include <bits/stdc++.h>
//using namespace std;
//#define endl '\n'
//
//int n;
//int arr[105][105];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 0)arr[i][j] = 1e9;
//		}
//	}
//
//	for (int k = 0; k < n; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (arr[i][j] > arr[i][k] + arr[k][j])
//					arr[i][j] = arr[i][k] + arr[k][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] == 1e9)arr[i][j] = 0;
//			else arr[i][j] = 1;
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}