//#include <iostream>  순열조합
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	vector<int> v = { 0,1,2,3,4};
//    do {
//        for (int i = 0; i < v.size(); i++)
//            cout << v[i] << ' ';
//        cout << '\n';
//    } while (next_permutation(v.begin(), v.end()));
//}

//#include <iostream>  MAP사용법
//#include <map>
//using namespace std;
//
//map<string, string> ma;
//
//int main() {
//	ma["a"] = "hello1";
//	ma["a"] = "hello2";
//	ma["b"] = "hello3";
//	cout << ma["a"] << endl << ma["b"];
//}

//int sec = 62;   비트셋&비트마스크
//cout << sec << endl;
//cout << bitset<6>(sec) << endl;
//sec = (sec & (1 << 'A ' - 'A'));
//cout << bitset<6>(sec) << endl;
// 1000111010
//char ch = 'D';
//if (sec & 1 << ch - 'A')cout << "Yes";

//str.erase(unique(str.begin(), str.end()), str.end());   중복제거
//str.erase(remove(str.begin(), str.end(), '#'), str.end());  특정문자제거

//string i = "hello world man kind";  // string split 공백
//istringstream ss(i);
//string buf;
//while (getline(ss, buf, ' ')) {
//	cout << buf << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void recur(int cnt, int idx, int bit) {     // 4비트 중에 2개 고를 경우의 수
//	if (cnt == 2) {
//		cout << bitset<4>(bit) << endl;
//		return;
//	}
//	if (idx == 4) {
//		//cout << bitset<4>(bit) << endl;
//		return;
//	}
//	recur(cnt + 1, idx + 1, bit | (1 << idx));
//	recur(cnt, idx + 1, bit);
//}
//int main() {
//	recur(0, 0, 0);
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void recur(int idx, int bit) {     //해당 자릿수 비트까지 모든 경우의수 2진법으로
//	if (idx == 4) {
//		cout << bitset<4>(bit) << endl;
//		return;
//	}
//	recur(idx + 1, bit);
//	recur(idx + 1, bit | (1 << idx));
//}
//int main() {
//	recur(0, 0);
//}

//void recur(int cnt, int idx) {   알파뱃 경우의수 구하기  k=개수
//	if (idx == 27)return;
//	if (cnt == k) { 
//		return;
//	}
//	if (arr[idx] == 0) {
//		arr[idx] = 1;
//		recur(cnt + 1, idx + 1);
//		arr[idx] = 0;
//	}
//	recur(cnt, idx + 1);
//}
//recur(0, 0);

//void recur(int idx) {   // 길이가 m 인 수열 모두 구하기 
//	if (idx == m) {
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (check[i] == 0) {
//			arr[idx] = i;
//			check[i] = 1;
//			recur(idx + 1);
//			check[i] = 0;
//		}
//	}
//}
//	recur(0);

// 백트래킹 배열 - 2048(easy)  방향만 미리 정하고 배열은 처음부터 수행 