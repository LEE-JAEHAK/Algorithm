//#include <iostream>
//#include <map>
//#include <tuple>
//#include <string>
//using namespace std;
//int sh, sm, eh, em, qh, qm;
//int arr[100005][2];
//map<string, int> ma;
//
//tuple<int, int> split(string s) {
//	string hour1 = s.substr(0, 2);
//	string min1 = s.substr(3, 2);
//	int hour = atoi(hour1.c_str());
//	int min = atoi(min1.c_str());
//	return tuple<int, int>(hour, min);
//}
//
//int main() {
//	string start, end, quit;
//	cin >> start >> end >> quit;
//	sh = get<0>(split(start));
//	sm = get<1>(split(start));
//	eh = get<0>(split(end));
//	em = get<1>(split(end));
//	qh = get<0>(split(quit));
//	qm = get<1>(split(quit));
//
//	string s, name;
//	while (cin >> s >> name) {
//		int th = get<0>(split(s));
//		int tm = get<1>(split(s));
//		if (th < sh) {
//			ma[name] = 1;
//		}
//		if (th == sh && tm <= sm) {
//			ma[name] = 1;
//		}
//		if (ma[name] == 1) {
//			if (eh < th && th <= qh) {
//				if (th < qh)
//					ma[name] = 2;
//				if (th == qh && tm <= qm)
//					ma[name] = 2;
//			}
//			if (eh == th && em <= tm && th <= qh) {
//				if (th < qh)
//					ma[name] = 2;
//				if (th == qh && tm <= qm)
//					ma[name] = 2;
//			}
//
//		}
//	}
//
//	int cnt = 0;
//	for (auto it = ma.begin(); it != ma.end(); it++) {
//		if (it->second == 2)cnt++;
//	}
//	cout << cnt;
//}