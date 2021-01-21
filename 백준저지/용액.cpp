//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	int n;
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	int left = 0, right = n - 1, sum = 0, ans = 2e9, ansleft = 0, ansright = 0;
//	while (1) {
//		sum = abs(v[left] + v[right]);
//		if (sum < ans) {
//			ans = sum;
//			ansleft = v[left];
//			ansright = v[right];
//		}
//		ans = min(ans, sum);
//		if (left < right - 1) {
//			if (abs(v[left] + v[right - 1]) < abs(v[left + 1] + v[right])) {
//				right--;		
//			}
//			else left++;
//		}
//		else break;
//	}
//	cout << ansleft << ' ' << ansright;
//}