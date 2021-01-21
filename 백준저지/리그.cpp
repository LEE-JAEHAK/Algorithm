//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int win[101];
//int draw[101];
//int def[101];
//int total[101];
//class tot {
//public:
//	int score;
//	int num;
//	bool operator <(const tot& other) {
//		return score > other.score;
//	}
//};
//int ans[101];
//vector<tot> v;
//
//int main() {
//	int n;
//	cin >> n;
//	int l = (n * (n - 1)) / 2;
//	for (int i = 0; i < l; i++) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		if (c < d) {
//			def[a]++;
//			win[b]++;
//		}
//		else if (c > d) {
//			win[a]++;
//			def[b]++;
//		}
//		else {
//			draw[a]++;
//			draw[b]++;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		total[i] = 3 * win[i] + draw[i];
//		tot t;
//		t.score = total[i];
//		t.num = i;
//		v.push_back(t);
//		//cout << win[i] << ' ' << draw[i] << ' ' << def[i] << ' ' << total[i] << endl;
//	}
//	sort(v.begin(), v.end());
//	int tmp = 0;
//	for (int i = 0; i < v.size(); i++) {
//		tmp = i;
//		if (i > 0) {
//			while (v[i].score == v[i - 1].score) {
//				ans[v[i].num] = tmp;
//				i++;
//			}
//		}
//		ans[v[i].num] = i + 1;
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << ans[i] << endl;
//	}
//}