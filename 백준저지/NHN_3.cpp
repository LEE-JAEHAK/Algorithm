//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//using namespace std;
//int numOfOrder;
//vector<string> orderArr;
//string func(string s) {
//	string res = "";
//	bool prevbo = false;	// true = num, false = char
//	int prevNum = -1;
//	char prevChar = '-';
//	int uuntil = -1;
//	for (int i = 0; i < s.size(); i++) {
//		if (i <= uuntil) continue;
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			if (prevbo) {
//				for (int j = 0; j < prevNum; j++) {
//					res += s[i];
//				}
//			}
//			else {
//				res += s[i];
//				prevChar = s[i];
//				prevbo = false;
//			}
//		}
//		else if (s[i] >= '0' && s[i] <= '9') {
//			prevNum = s[i] - '0';
//			prevbo = true;
//		}
//		else if (s[i] == '(') {
//			string params = "";
//			int cnt = 0;
//			for (int j = i + 1; j < s.size(); j++) {
//				if (s[j] == '(') {
//					cnt++;
//					params += s[j];
//				}
//				else if (s[j] == ')') {
//					if (cnt == 0) {
//						string returnString = func(params);
//						uuntil = j;
//						if (prevbo) {
//							for (int k = 0; k < prevNum; k++) {
//								res += returnString;
//							}
//						}
//						else {
//							char mul_char = res[res.size() - 1];
//							res.pop_back();
//							for (int k = 0; k < returnString.size(); k++) {
//								res += mul_char;
//								res += returnString[k];
//							}
//						}
//						break;
//					}
//					else {
//						cnt--;
//						params += s[j];
//					}
//				}
//				else {
//					params += s[j];
//				}
//			}
//		}
//	}
//	return res;
//}
//void solution() {
//	// TODO: 이곳에 코드를 작성하세요. 추가로 필요한 함수와 전역변수를 선언해서 사용하셔도 됩니다.
//	for (int i = 0; i < numOfOrder; i++) {
//		cout << func(orderArr[i]) << "\n";
//	}
//}
//
//
//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <string>
//#include <vector>
//#include <stack>
//#include <cctype>
//using namespace std;
//int N;
//vector<string> v;
//void solve() {
//	stack<char> stk;
//	for (int i = 0; i < N; i++) {
//		while (!stk.empty()) stk.pop();
//		int len = v[i].length();
//		for (int j = len - 1; j >= 0; j--)
//			if (v[i][j] == ')' || isalpha(v[i][j])) stk.push(v[i][j]);
//			else if (v[i][j] == '(') {
//				string tmp;
//				while (stk.top() != ')') {
//					tmp += stk.top();
//					stk.pop();
//				}
//				stk.pop(); // pop ')'
//				j--;
//				if (isdigit(v[i][j])) {
//					int n = v[i][j] - '0';
//					for (int k = 0; k < n; k++)
//						for (int l = tmp.length() - 1; l >= 0; l--)
//							stk.push(tmp[l]);
//				}
//				else {
//					for (int k = tmp.length() - 1; k >= 0; k--) {
//						stk.push(tmp[k]);
//						stk.push(v[i][j]);
//					}
//				}
//			}
//			else { // isDigit()
//				int n = v[i][j] - '0';
//				char ch = stk.top();
//				for (int k = 0; k < n - 1; k++) stk.push(ch);
//			}
//		while (!stk.empty()) {
//			printf("%c", stk.top());
//			stk.pop();
//		}
//		printf("\n");
//	}
//}
//int main() {
//	//    scanf("%d", &N);
//	//    v.resize(N);
//	//    for(int i=0; i<N; i++) {
//	//        cin >> v[i];
//	//    }
//	N = 9;
//	v.resize(N);
//	v[0] = "B2(RG)";
//	v[1] = "3(R2(GB))";
//	v[2] = "3(BR2(R))";
//	v[3] = "B(RGB(RG))";
//	v[4] = "1B2R3G";
//	v[5] = "1(R)2(G)B";
//	v[6] = "2(R3G)";
//	v[7] = "2(B(1(R)2(G2B)))";
//	v[8] = "2(B(R)2(G))1(B2(B(R)))";
//	solve();
//	return 0;
//}