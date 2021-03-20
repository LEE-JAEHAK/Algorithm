//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[1005];
//
//vector<int> solution(vector<int> enter, vector<int> leave) {
//	vector<int> answer;
//	int i1 = 0;
//	vector<int> v;
//	int i2 = 0;
//	while (1) {
//		if (i1 >= enter.size() || i2 >= enter.size())break;
//		int memo1 = leave[i2];
//		while (enter[i1] != memo1) {
//			v.push_back(enter[i1]);
//			i1++;
//		}
//		v.push_back(enter[i1]);
//		i1++;
//		for (int i = 0; i < v.size(); i++) {
//			arr[v[i]] += v.size() - 1;
//		}
//		while (1) {
//			bool flag = 0;
//			for (int i = 0; i < v.size(); i++) {
//				if (v[i] == leave[i2]) {
//					v.erase(v.begin() + i);
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)break;
//			i2++;
//		}
//	}
//	for (int i = 0; i < enter.size(); i++) {
//		answer.push_back(arr[i + 1]);
//	}
//	return answer;
//}
//
//int main() {
//	for(auto i:solution({ 5,4,3,2,1 }, { 3,5,1,4,2 }))cout << i << ' ';
//	//for(auto i:solution({ 1,4,2,3 }, { 2,1,3,4 }))cout << i << ' ';
//	//for(auto i:solution({ 3,2,1 }, { 2,1,3 }))cout << i << ' ';
//}