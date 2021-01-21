//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a;
//	int tmp;
//	for (int i = 0; i < n; i++) {
//		cin >> tmp;
//		a.push_back(tmp);
//	}
//	sort(a.begin(), a.end());
//	int maxi = 0;
//	do {
//		int sum = 0;
//		for (int i = 0; i < n - 1; i++) {
//			if (a[i] - a[i + 1] > 0)
//				sum += a[i] - a[i + 1];
//			else
//				sum += a[i + 1] - a[i];
//		}
//		maxi = max(maxi, sum);
//	} while (next_permutation(a.begin(), a.end()));
//	cout << maxi;
//}