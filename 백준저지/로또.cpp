//#include <iostream>
//#include <vector>
//using namespace std;
//
//int k;
//vector<int> v;
//vector<int> ans;
//
//void solve(int idx, int cnt) {
//	if (cnt == 6) {
//		for (int i : ans)cout << i << ' ';
//		cout << '\n';
//		return;
//	}
//	if (idx == k)return;
//	ans.push_back(v[idx]);
//	solve(idx + 1, cnt + 1);
//	ans.pop_back();
//	solve(idx + 1, cnt);
//}
//
//int main() {
//	cin >> k;
//	v.resize(k);
//	for (int i = 0; i < k; i++) {
//		cin >> v[i];
//	}
//	solve(0, 0);
//}