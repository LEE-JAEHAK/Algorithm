//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//	int arr[8] = { 1700, 45, 75, 90, 2, 24, 802, 66 };
//	queue<int> radix[10]; // 자리수에 대한 큐 배열
//
//	int max = arr[0];
//	int d = 1;
//
//	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
//		if (max < arr[i]) max = arr[i];
//	}
//
//	while (max / 10) {
//		d *= 10;
//		max /= 10;
//	}
//
//	int mod = 10;
//	int dMin = 1;
//
//	while (dMin <= d) {
//		for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//			radix[(arr[i] % mod) / dMin].push(arr[i]);
//		}
//
//		for (int i = 0, j = 0; i < 10;) {
//			if (radix[i].size()) {
//				arr[j++] = radix[i].front();
//				radix[i].pop();
//			}
//			else i++;
//		}
//
//		dMin *= 10;
//		mod *= 10;
//	}
//
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		cout << arr[i] << ' ';
//	}
//}