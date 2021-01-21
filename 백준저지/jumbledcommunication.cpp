//#include <iostream>
//using namespace std;
//
//int arr[260];
//
//int main() {
//	int tmp = 0;
//	for (int i = 1; i < 1 << 8; i++) {
//		tmp = i;
//		tmp = tmp ^ (tmp << 1);
//		tmp = tmp & 255;
//		arr[i] = tmp;
//		//cout << i << ' ' << tmp << endl;
//		//cout << bitset<6>(i) << endl;
//	}
//	int n;
//	cin >> n;
//	for (int k = 0; k < n; k++) {
//		int b;
//		cin >> b;
//		for (int i = 0; i < 1 << 8; i++) {
//			if (arr[i] == b) {
//				cout << i << ' ';
//			}
//		}
//	}
//}