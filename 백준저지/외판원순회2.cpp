//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int W[11][11];
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back(i);
//		for (int j = 0; j < n; j++) {
//			cin >> W[i][j];
//		}
//	}
//	int mini = 2000000000;
//	do {
//		int sum = 0;
//		for (int i = 0; i < n - 1; i++) { // 0 1 2 3
//			if (W[a[i]][a[i + 1]] == 0) {
//				goto a;
//			}
//			sum += W[a[i]][a[i + 1]];
//		}
//		if (W[a[n - 1]][a[0]] == 0) {
//			goto a;
//		}
//		sum += W[a[n - 1]][a[0]];
//		mini = min(sum, mini);
//	a:;
//	} while (next_permutation(a.begin() + 1, a.end())); // 0 1 2 3
//	cout << mini;
//}