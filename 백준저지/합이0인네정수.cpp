//#include <bits/stdc++.h>
//using namespace std;
//
//int A[4005];
//int B[4005];
//int C[4005];
//int D[4005];
//vector<long long> v1;
//vector<long long> v2;
//
//void print() {
//	cout << endl;
//	for (auto i : v1)cout << i << ' ';
//	cout << endl;
//	for (auto i : v2)cout << i << ' ';
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> A[i] >> B[i] >> C[i] >> D[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			v1.push_back(A[i] + B[j]);
//			v2.push_back(C[i] + D[j]);
//		}
//	}
//
//	sort(v1.begin(), v1.end());
//	sort(v2.begin(), v2.end());
//
//	long long left = 0, right = v2.size() - 1;
//	long long cnt = 0;
//	print();
//	while (left < v1.size() && right >= 0) {
//		if (v1[left] + v2[right] == 0) {
//			long long leftcnt = 1, rightcnt = 1;
//			while (left + 1 < v1.size() && v1[left] == v1[left + 1]) {
//				left++;
//				leftcnt++;
//			}
//			while (right > 0 && v2[right] == v2[right - 1]) {
//				right--;
//				rightcnt++;
//			}
//			cout << endl << v1[left] << ' ' << v2[right] << endl;
//			left++;
//			right--;
//			cnt += leftcnt * rightcnt;
//		}
//		else if (v1[left] + v2[right] < 0) {
//			left++;
//		}
//		else right--;
//	}
//	cout << cnt;
//}