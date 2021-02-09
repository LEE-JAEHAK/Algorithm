#include <bits/stdc++.h>
using namespace std;

int n; // 2
int arr[35]; // 1 5
bool dp[35][40'005];

void recur(int idx, int weight) {
	if (n < idx)return;
	if (dp[idx][weight])return;
	dp[idx][weight] = 1;

	recur(idx + 1, weight + arr[idx]);

	recur(idx + 1, weight);

	recur(idx + 1, abs(weight - arr[idx]));

}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	recur(0, 0);
	//for (int i = 1; i < 15; i++) {
	//	cout << dp[n][i] << ' ';
	//}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		cout << (dp[n][a] ? "Y" : "N") << ' ';
	}
}