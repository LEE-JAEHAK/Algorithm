#include <bits/stdc++.h>
using namespace std;

int arr[45];

int main() {
	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int left = 0, right = 0, sum = arr[0];
	while (right < n) {
		if (sum < s) {
			sum += arr[++right];
		}
		else if (sum > s) {

		}
	}
}