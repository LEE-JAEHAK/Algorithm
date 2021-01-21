//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//string arr[100002];
//class C {
//public:
//	string name;
//	int num;
//	bool operator <(const C& other) {
//		return name < other.name;
//	}
//};
//vector<C> v;
//
//void Binary(string s) {
//	int start = 0, end = v.size() - 1;
//	while (end - start >= 0) {
//		int mid = (start + end) / 2;
//		if (s == v[mid].name) {
//			cout << v[mid].num << '\n';
//			return;
//		}
//		else if (v[mid].name > s) {
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//	}
//}
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//		C c;
//		c.name = arr[i];
//		c.num = i;
//		v.push_back(c);
//	}
//	int num;
//	sort(v.begin(), v.end());
//	//for (int i = 0; i < n; i++) {
//	//	cout << v[i].name << endl;
//	//}
//	for (int i = 0; i < m; i++) {
//		string s;
//		cin >> s;
//		if (atoi(s.c_str())) {
//			num = atoi(s.c_str());
//			cout << arr[num] << '\n';
//		}
//		else { // binary search
//			Binary(s);
//		
//		}
//	}
//}