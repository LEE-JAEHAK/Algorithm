//#include <bits/stdc++.h>
//using namespace std;
//
//string p;
//int k;
//bool visited[100005];
//
//bool check(int x) {
//	int sum = 0;
//	for (int i = 0; i < p.size(); i++) {
//		sum = (sum * 10 + (p[i]-'0')) % x;
//	}
//	if (sum == 0)return 1;
//	else return 0;
//}
//
//int main() {
//	cin >> p >> k;
//
//	for (int i = 2; i < k; i++) {
//		if (check(i)) {
//			cout << "BAD " << i;
//			return 0;
//		}
//	}
//	cout << "GOOD";
//}