//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int p, w, c, v;
//class World {
//public:
//	int s, e, w;
//	bool operator <(const World& other) {
//		return w > other.w;
//	}
//};
//vector<World> vec;
//int parent[10005];
//
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	parent[y] = x;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> p >> w >> c >> v;
//	vec.resize(w);
//	for (int i = 0; i < 10000; i++)parent[i] = i;
//	for (int i = 0; i < w; i++) {
//		cin >> vec[i].s >> vec[i].e >> vec[i].w;
//	}
//	sort(vec.begin(), vec.end());
//	int maxx = 1e9;
//	for (int i = 0; i < w; i++) {
//		int x = vec[i].s, y = vec[i].e;
//		merge(x, y);
//		maxx = min(maxx, vec[i].w);
//		if (find(c) == find(v)) break;
//	}
//	cout << maxx;
//}