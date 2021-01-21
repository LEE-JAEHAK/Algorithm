//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <string>
//#include <map>
//#include <iterator>
//#include <queue>
//using namespace std;
//
//int n, m;
//vector<int*> q;
//int arr[105];
//
//bool check(int num) {  
//	for (int i = 1; i < q.size(); i++) {
//		if (*q[i] > num) return 0;
//	}
//	return 1;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//			q.push_back(&arr[i]); // 1 1 6 1 1 1
//		}
//		int cnt = 0;
//		while (!q.empty()) {
//			if (check(*q.front())) {
//				cnt++;
//				if (q.front() == &arr[m]) {
//					break;
//				}
//				q.erase(q.begin());
//			}
//			else {
//				q.push_back(q.front());
//				q.erase(q.begin());
//			}
//		}
//		cout << cnt << endl;
//		q.clear();
//	}
//}