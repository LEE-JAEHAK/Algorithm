//#include <iostream>
//using namespace std;
//
//bool arr[105];
//
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	for (int i = a; i <= b; i++)
//		arr[i] = 1;
//	for (int i = c; i <= d; i++)
//		arr[i] = 1;
//
//	int cnt = 0;
//	for (int i = 1; i < 101; i++) {
//		if (arr[i] != arr[i - 1])cnt++;
//	}
//
//	int cnt1 = 0;
//	if (cnt < 3) {
//		for (int i = 0; i < 101; i++) {
//			if (arr[i] == 1)cnt1++;
//		}
//		cout << cnt1 - 1;
//	}
//	else {
//		for (int i = 0; i < 101; i++) {
//			if (arr[i] == 1)cnt1++;
//		}
//		cout << cnt1 - 2;
//	}
//}