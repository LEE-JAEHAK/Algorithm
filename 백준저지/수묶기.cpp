//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end(), greater<>());
//	int sum = 0;
//	for (int i = 0; i < v.size(); i += 2) {
//		if (v[i] <= 0)break;
//		if (i == v.size() - 1) { sum += v[i]; break; }
//		if (v[i + 1] == 1) {
//			sum += v[i] + v[i + 1];
//		}
//		else if (v[i + 1] > 0) {
//			sum += v[i] * v[i + 1];
//		}
//		else if (v[i + 1] == 0) {
//			sum += v[i];
//			break;
//		}
//		else if (v[i] > 0 && v[i + 1] < 0) {
//			sum += v[i];
//			break;
//		}
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i += 2) {
//		if (v[i] > 0)break;
//		if (i == v.size() - 1) { sum += v[i]; break; }
//		if (v[i + 1] < 0) {
//			sum += v[i] * v[i + 1];
//		}
//		else if (v[i + 1] == 0) {
//			break;
//		}
//		else if (v[i] < 0 && v[i + 1] > 0) {
//			sum += v[i];
//			break;
//		}
//	}
//	cout << sum;
//}