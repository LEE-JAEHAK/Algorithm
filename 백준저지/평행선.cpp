//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//class Loc {
//public:
//	int x, y;
//};
//vector<Loc> v;
//bool compare1(Loc a, Loc b) {
//	return a.x < b.x;
//}
//bool compare2(Loc a, Loc b) {
//	return a.y < b.y;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		Loc l;
//		l.x = a;l.y = b;
//		v.push_back(l);
//	}
//	int cnt = 0;
//	sort(v.begin(), v.end(), compare1);
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i + 1].x == v[i].x) {
//			cnt++;
//			if (i + 2 >= v.size()) {
//				break;
//			}
//			while (v[i + 1].x == v[i + 2].x) {
//				i++;
//			}
//		}
//	}
//	sort(v.begin(), v.end(), compare2);
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i].y == v[i + 1].y) {
//			cnt++;
//			if (i + 2 >= v.size()) {
//				break;
//			}
//			while (v[i + 2].y == v[i + 1].y) {
//				i++;
//			}
//		}
//	}
//	cout << cnt;
//}