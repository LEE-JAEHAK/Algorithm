//#include <iostream>
//using namespace std;
//
//long long arr[105];
//
//long long gcd(long long a, long long b) {
//	long long n;
//	while (b) {
//		n = a % b;
//		a = b;
//		b = n;
//	}
//	return a;
//}
//
//long long lcm(long long a, long long b) {
//	return a * b / gcd(a, b);
//}
//
//int main() {
//	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	if (n == 1) {
//		cout << arr[0] << '/' << 1;
//		return 0;
//	}
//	long long LCM = lcm(arr[0], arr[1]);
//	for (int i = 1; i < n; i++) {
//		LCM = lcm(arr[i], LCM);
//	}
//	//cout << LCM;
//	long long child = 0, parent = LCM;
//	for (int i = 0; i < n; i++) {
//		child += LCM / arr[i];
//	}
//	long long g = gcd(parent, child);
//	cout << parent / g << '/' << child / g;
//}