//#include <iostream>
//#include <string>
//using namespace std;
//
//long long arr[1002];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int k;
//		cin >> k;
//		for (int j = 0; j < k; j++) {
//			int t;
//			cin >> t;
//			arr[i] = arr[i] | ((long long)1 << t);
//		}
//	}
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int p;
//		cin >> p;
//		long long tmp = 0;
//		for (int j = 0; j < p; j++) {
//			int q;
//			cin >> q;
//			tmp = tmp | ((long long)1 << q);
//		}
//		tmp = ~tmp;
//		int cnt = 0;
//		for (int j = 0; j < n; j++) {
//			if (!(tmp & arr[j]))cnt++;
//		}
//		cout << cnt << endl;
//	}
//}