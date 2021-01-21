//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x, y, w, s; // w평행  s대각선 
//	cin >> x >> y >> w >> s;
//	long long sum = x + y; // 7 = 5 + 2
//	long long diag = 0;
//	long long ans = 0;
//	if (sum % 2 == 0) { // 3 5
//		diag = max(x, y);
//		if (sum * w <= diag * s) {
//			ans = sum * w;
//		}
//		else if (sum * w > diag* s) {
//			ans = diag * s;
//		}
//	}
//	else { // 3 6
//		diag = max(x, y) - 1;
//		if (sum * w <= diag * s + w) {
//			ans = sum * w;
//		}
//		else if (sum * w > diag* s + w) {
//			ans = diag * s + w;
//		}
//	}
//	diag = min(x, y);
//	long long tmp = diag * s + (max(x, y) - diag) * w;
//	ans = min(ans, tmp);
//	cout << ans;
//}