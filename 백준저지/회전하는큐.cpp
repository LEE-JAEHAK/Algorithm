//#include <iostream>
//#include <vector>
//#include <list>
//#include <algorithm>
//using namespace std;
//list<int> v;
//int arr[55];
//list<int>::iterator find(int n) {
//	list<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		if (*it == n)return it;
//	}
//}
//int checkleft(int idx, int target) {
//	list<int>::iterator it = find(idx);
//	int cntleft = 0;
//	for (it; it != find(target); it--) {
//		if (it == v.begin())it = v.end();
//		cntleft++;
//	}
//	return cntleft;
//}
//int checkright(int idx, int target) {
//	list<int>::iterator it = find(idx);
//	int cntright = 0;
//	for (it; it != find(target); it++) {
//		if (it == v.end())it = v.begin();
//		cntright++;
//	}
//	return cntright;
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		v.push_back(i);
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> arr[i];
//	}
//	int ans = 0;
//	for (int j = 0; j < m; j++) {
//		int idx = v.front(), target = arr[j];
//		int left = checkleft(idx, target), right = checkright(idx, target);
//		if (left < right) {
//			for (int i = 0; i < left; i++) {
//				v.push_front(v.back());
//				v.pop_back();
//			}
//			v.pop_front();
//			ans += left;
//		}
//		else {
//			for (int i = 0; i < right; i++) {
//				v.push_back(v.front());
//				v.pop_front();
//			}
//			v.pop_front();
//			ans += right;
//		}
//	}
//	cout << ans;
//}