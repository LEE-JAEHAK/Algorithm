//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	long long k;
//	cin >> k;
//	int arr[6] = { 0,0,1,1,0 };
//	long long cnt = 0;
//	while (k > 2) {
//		cnt++;
//		long long n;
//		for (long long i = 1; i < k; i *= 2) {
//			n = i;
//		}
//		k -= n;
//	}
//	if (cnt % 2 == 1) {
//		if (arr[k] == 0)cout << 1;
//		else cout << 0;
//	}
//	else {
//		if (arr[k] == 0)cout << 0;
//		else cout << 1;
//	}
//}