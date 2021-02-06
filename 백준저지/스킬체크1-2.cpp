//#include <bits/stdc++.h>
//using namespace std;
//
//int man1[5] = { 1,2,3,4,5 };
//int man2[8] = { 2,1,2,3,2,4,2,5 };
//int man3[10] = { 3,3,1,1,2,2,4,4,5,5 };
//
//vector<int> solution(vector<int> answers) {
//	vector<int> answer;
//	int idx1 = 0, idx2 = 0, idx3 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
//	for (int i = 0; i < answers.size(); i++) {
//		if (answers[i] == man1[idx1++])cnt1++;
//		if (answers[i] == man2[idx2++])cnt2++;
//		if (answers[i] == man3[idx3++])cnt3++;
//		if (idx1 == 5)idx1 = 0;
//		if (idx2 == 8)idx2 = 0;
//		if (idx3 == 10)idx3 = 0;
//	}
//	int maxx = 0;
//	maxx = max({ cnt1,cnt2,cnt3 });
//	if (maxx == cnt1)answer.push_back(1);
//	if (maxx == cnt2)answer.push_back(2);
//	if (maxx == cnt3)answer.push_back(3);
//	return answer;
//}
//
//int main() {
//	for (auto i : solution({ 1,2,3,4,5 })) {
//		cout << i << ' ';
//	}
//	cout << endl;
//	for (auto i : solution({ 1,3,2,4,2 })) {
//		cout << i << ' ';
//	}
//}