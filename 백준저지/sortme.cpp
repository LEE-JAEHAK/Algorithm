//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//string arr[25];
//int alp[26];
//int n;
//
//bool comp(int x) {
//	bool ret = 0;
//	int minn = min(arr[x].length(), arr[x + 1].length());
//	int cnt = 0;
//	for (int i = 0; i < minn; i++) {
//		if (alp[arr[x][i] - 'A'] > alp[arr[x + 1][i] - 'A']) {
//			ret = 1;
//			break;
//		}
//		else if (alp[arr[x][i] - 'A'] < alp[arr[x + 1][i] - 'A']) {
//			break;
//		}
//		else {
//			cnt++;
//		}
//	}
//	if (cnt == minn) {
//		if (arr[x].length() > arr[x + 1].length())ret = 1;
//	}
//	return ret;
//}
//
//void mid() {
//	cout << endl;
//	for (int i = 0; i < n; i++)cout << arr[i] << ' ';
//}
//
//void SORT() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (comp(j)) {
//				swap(arr[j], arr[j + 1]);
//				//mid();
//			}
//		}
//	}
//}
//
//void print(int year) {
//	cout << "year " << year << endl;
//	for (int i = 0; i < n; i++)cout << arr[i] << endl;
//}
//
//int main() {
//	int year = 0;
//	while (1) {
//		year++;
//		cin >> n;
//		if (n == 0)break;
//		string order;
//		cin >> order;
//		for (int i = 0; i < 26; i++) {
//			alp[order[i] - 'A'] = i;
//		}
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//		}
//
//		SORT();
//		print(year);
//	}
//}