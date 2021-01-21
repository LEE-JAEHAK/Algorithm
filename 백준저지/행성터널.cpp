//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//class P {
//public:
//	int num, x, y, z;
//};
//vector<P> v;
//bool comx(P a, P b) {
//	return a.x < b.x;
//}
//bool comy(P a, P b) {
//	return a.y < b.y;
//}
//bool comz(P a, P b) {
//	return a.z < b.z;
//}
//class PP {
//public:
//	int st, en, gap;
//	bool operator <(const PP& other) {
//		return gap < other.gap;
//	}
//};
//vector<PP> vv;
//int parent[300'005];
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//bool merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return 0;
//	parent[y] = x;
//	return 1;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i <= 300000; i++)parent[i] = i;
//	for (int i = 0; i < n; i++) {
//		v[i].num = i + 1;
//		cin >> v[i].x >> v[i].y >> v[i].z;
//	}
//	sort(v.begin(), v.end(), comx);
//	PP pp;
//	for (int i = 0; i < n - 1; i++) {
//		//pp.st = v[i].num;
//		//pp.en = v[i + 1].num;
//		//pp.gap = abs(v[i].x - v[i + 1].x);
//		vv.push_back({ v[i].num,v[i + 1].num,abs(v[i].x - v[i + 1].x) });
//	}
//	sort(v.begin(), v.end(), comy);
//	for (int i = 0; i < n - 1; i++) {
//		pp.st = v[i].num;
//		pp.en = v[i + 1].num;
//		pp.gap = abs(v[i].y - v[i + 1].y);
//		vv.push_back(pp);
//	}
//	sort(v.begin(), v.end(), comz);
//	for (int i = 0; i < n - 1; i++) {
//		pp.st = v[i].num;
//		pp.en = v[i + 1].num;
//		pp.gap = abs(v[i].z - v[i + 1].z);
//		vv.push_back(pp);
//	}
//	sort(vv.begin(), vv.end());
//	int ans = 0, cnt = 0;
//	for (int i = 0; i < vv.size(); i++) {
//		if (merge(vv[i].st, vv[i].en)) {
//			cnt++;
//			ans += vv[i].gap;
//		}
//		if (cnt == n - 1)break;
//		//cout << vv[i].st << ' ' << vv[i].en << ' ' << vv[i].gap << '\n';
//	}
//	cout << ans;
//}