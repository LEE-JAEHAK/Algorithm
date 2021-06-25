//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	int t;
//	cin >> t;
//	int idx = 1;
//	while (t--) {
//		int n;
//		int sum = 0;
//		priority_queue<int> q1;
//		queue<int> q2;
//		cin >> n;
//		v.resize(n);
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//		}
//		sort(v.begin(), v.end());
//		for (int i = 0; i < v.size(); i++) {
//			q2.push(v[i]);
//		}
//		if (v.size() == 1) {
//			cout << "#" << idx << ' ' << v[0] << endl;
//		}
//		else if (v.size() == 2) {
//			cout << "#" << idx << ' ' << max(v[0], v[1]) << endl;
//		}
//		else {
//			while (!q2.empty()) {
//				q1.push(-q2.front());
//				int x = q2.front();
//				q2.pop();
//				q1.push(-q2.front());
//				int y = q2.front();
//				sum += max(x, y);
//				q2.pop();
//				if (q2.empty())break;
//				sum += (-q1.top());
//				q2.push(-q1.top());
//				q1.pop();
//			}
//			cout << "#" << idx << ' ' << sum << endl;
//		}
//		idx++;
//	}
//}