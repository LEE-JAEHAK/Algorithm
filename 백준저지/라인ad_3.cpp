//#include <bits/stdc++.h>
//using namespace std;
//
//int solution(vector<vector<int>> ads) {
//	int answer = 0;
//	sort(ads.begin(), ads.end());
//	int x = ads[0][0];
//	int sum = 0;
//	for (int i = 1; i < ads.size()-1; i++) {
//
//		int tmp = 0, tmp2=0, maxx=0;
//		tmp += (x + 5 - ads[i][0]) * ads[i][1];
//		tmp += (x + 10 - ads[i + 1][0]) * ads[i + 1][1];
//
//		tmp2 += (x + 5 - ads[i+1][0]) * ads[i+1][1];
//		tmp2 += (x + 10 - ads[i ][0]) * ads[i ][1];
//		if (tmp > tmp2) { 
//			swap(ads[i], ads[i + 1]);
//			sum += tmp2;
//		}
//		else {
//			sum += tmp;
//		}
//		x += 5;
//	}
//	cout << sum << endl;
//	answer = sum;
//	return answer;
//}
//
//int main() {
//	solution({ {1,3}, {3,2},{5,4} });
//	solution({ {0,3}, {5,4} });
//	solution({ {0,1}, {0,2},{6,3},{8,4} });
//	solution({ {5,2}, {2,2},{6,3},{9,2} });
//}