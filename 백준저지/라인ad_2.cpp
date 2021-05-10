//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//int check(int x) {
//	int up = x, down = x, minn = 1e9, ans = 0, flag = 0;
//	while (1) {
//		up++;
//		down--;
//		if (up >= v.size() && down < 0)return -1;
//		if (down < 0)down++;
//		if (up >= v.size())up--;
//		if (v[up] > v[x]) {
//			minn = min(up, minn);
//			flag = 1;
//		}
//		if (v[down] > v[x]) {
//			minn = min(down, minn);
//			flag = 1;
//		}
//		if (flag == 1)break;
//	}
//	return minn;
//}
//
//vector<int> solution(vector<int> array) {
//	vector<int> answer;
//	v = array;
//	for (int i = 0; i < array.size(); i++) {
//		answer.push_back( check(i) );
//	}
//
//	return answer;
//}
//
//int main() {
//	solution({ 3,5,4,1,2 });
//}