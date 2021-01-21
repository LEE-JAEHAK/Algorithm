//#include <iostream>
//#include <string>
//using namespace std;
//
//string reverse(string s) {
//	string ret;
//	int flag = 1;
//	for (int i = s.length() - 1; i >= 0; i--) { // 1000
//		if (s[s.length() - 1] == '0' && flag == 1) {
//			while (s[i] == '0')i--;
//			flag = 0;
//		}
//			ret.push_back(s[i]);
//	}
//	return ret;
//}
//
//int main() {
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	while (n--) {
//		string a, b;
//		cin >> a >> b;
//		int na = atoi(reverse(a).c_str());
//		int nb = atoi(reverse(b).c_str());
//		//cout << na << ' ' << nb << endl;
//		int sum = na + nb;
//		string ts = to_string(sum);
//		//cout << ts << endl;
//		cout << atoi(reverse(ts).c_str()) << '\n';
//	}
//}