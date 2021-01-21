//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int arr[2'222'225];
//int arrtmp[2'222'225];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		arrtmp[i] = arr[i];
//	}
//	int total = 0;
//	for (int j = 0; j < 22; j++) {
//		int sum = 0;
//		for (int i = 0; i < n; i++) {
//			if (arrtmp[i] & 1)
//				sum += 1;
//			arrtmp[i] >>= 1;
//		}
//		if (sum % 2 == 0)continue;
//		else total += 1 << j;
//	}
//	int ans = total;
//	for (int i = 0; i < n; i++) {
//		int tmp = 0, cnt = 0, totaltmp = total;
//		while (!(totaltmp == 0 && arr[i] == 0)) {
//			int temp = 0;
//			temp += (arr[i] & 1) + (totaltmp & 1);
//			temp %= 2;
//			if (temp == 1)
//				tmp += 1 << cnt;
//			cnt++;
//			arr[i] >>= 1;
//			totaltmp >>= 1;
//		}
//		ans = max(tmp, ans);
//	}
//	cout << ans << ans;
//}
//
////#include <iostream>
////#include <string>
////#include <algorithm>
////#include <cmath>
////#include <bitset>
////
////using namespace std;
////
////typedef long long LL;
////
////const int MAX_N = 2e6 + 3e5;
////
////int ans, x, arr[MAX_N];
////
////int main()
////{
////	int n;
////
////	cin >> n;
////	for (int i = 0; i < n; i++) {
////		cin >> arr[i];
////		x ^= arr[i];
////		//cout << bitset<8>(x) << '\n';
////	}
////
////	ans = x;
////
////	for (int i = 0; i < n; i++) {
////		ans = max(ans, x ^ arr[i]);
////	}
////
////	cout << ans << ans << '\n';
////	return 0;
////}