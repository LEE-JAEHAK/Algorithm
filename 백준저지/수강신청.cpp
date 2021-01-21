//#include <iostream>
//#include <vector>
//#include <set>
//#include <string>
//using namespace std;
//
//vector<string> arr;
//vector<string> v;
//set<string> s;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	int k, l;
//	cin >> k >> l;
//	arr.resize(l);
//	for (int i = 0; i < l; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = l - 1; i >= 0; i--) {
//		if (s.end() == s.find(arr[i])) {
//			s.insert(arr[i]);
//			v.push_back(arr[i]);
//		}
//	}
//
//	//int size = v.size();
//	//for (int i = size - 1; i >= size - k && i >= 0; --i)
//	//	cout << v[i] << "\n";
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << ' ';
//	for (int i = 0; i < k; i++) {
//		if (!v.empty()) {
//			cout << v.back() << '\n';
//			v.pop_back();
//		}
//	}
//}