//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	for (int j = 0; j < n; j++)cout << '*';
//	for (int j = 0; j < 2 * (n - 2) + 1; j++)cout << ' ';
//	for (int j = 0; j < n; j++)cout << '*';
//	cout << '\n';
//
//	for (int i = 1; i < n - 1; i++) {
//		for (int j = 0; j < i; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < n - 2; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < 2 * (n - 2) + 1 - 2 * i; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < n - 2; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		cout << '\n';
//	}
//
//	for (int j = 0; j < n - 1; j++)cout << ' ';
//	cout << '*';
//	for (int j = 0; j < n - 2; j++)cout << ' ';
//	cout << '*';
//	for (int j = 0; j < n - 2; j++)cout << ' ';
//	cout << '*';
//	cout << '\n';
//
//	for (int i = 1; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < n - 2; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < 2 * i - 1; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		for (int j = 0; j < n - 2; j++) {
//			cout << ' ';
//		}
//		cout << '*';
//		cout << '\n';
//	}
//
//	for (int j = 0; j < n; j++)cout << '*';
//	for (int j = 0; j < 2 * (n - 2) + 1; j++)cout << ' ';
//	for (int j = 0; j < n; j++)cout << '*';
//}