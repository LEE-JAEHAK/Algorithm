//#include <bits/stdc++.h>
//using namespace std;
//
//vector<pair<int, int>> v;
//vector<int> bag;
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back({ a,b });
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < k; i++) {
//		int a;
//		cin >> a;
//		bag.push_back(a);
//	}
//	sort(bag.begin(), bag.end());
//
//	priority_queue<int> q;
//	long long sum = 0, j = 0;
//	for (int i = 0; i < k; i++) {
//		while (j < n && v[j].first <= bag[i]) {
//			q.push(v[j++].second);
//		}
//		if (q.empty())continue;
//		sum += q.top();
//		q.pop();
//	}
//
//	cout << sum;
//}