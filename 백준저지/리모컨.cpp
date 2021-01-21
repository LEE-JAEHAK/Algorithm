//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int channel[10];
//int num[7];
//int ispossible(int n);
//
//int main() {
//	int n;
//	cin >> n; //5457
//	int m;
//	cin >> m; //3
//	while (m--) {
//		int tmp;
//		cin >> tmp; // 6 7 8
//		channel[tmp] = 1;
//	}
//	int ans = 0, mins = n - 100;
//	if (mins < 0)mins *= -1;
//	for (int i = 0; i <= 1000000; i++) {
//		if (ispossible(i)) {
//			if (n - i < 0)ans = i - n + ispossible(i);
//			else ans = n - i + ispossible(i);
//			mins = min(mins, ans);
//		}
//	}
//	cout << mins;
//}
//
//int ispossible(int n) {
//	if (n == 0) {
//		if (channel[n] == 1)return 0;
//		else return 1;
//	}
//	int tmp = 0, cnt = 0;
//	while (n) {
//		tmp = n % 10;
//		if (channel[tmp] == 1)return 0;
//		n /= 10;
//		cnt++;
//	}
//	return cnt;
//}