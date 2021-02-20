//#include <bits/stdc++.h>
//using namespace std;
//
//int visited[10005];
//vector<string> answer;
//bool flag = 0;
//
//void DFS(string s, vector<vector<string>> tickets, vector<string> tmp) {
//	if (tmp.size() == tickets.size() + 1) {
//		//cout << endl;
//		//for (auto i : tmp)cout << i << ' ';
//		answer = tmp;
//		flag = 1;
//		return;
//	}
//	if (flag == 1)return;
//	for (int i = 0; i < tickets.size(); i++) {
//		if (tickets[i][0] == s && visited[i] == 0) {
//			//cout << tickets[i][1] << endl;
//			tmp.push_back(tickets[i][1]);
//			visited[i] = 1;
//			DFS(tickets[i][1], tickets, tmp);
//			visited[i] = 0;
//			tmp.pop_back();
//		}
//	}
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//	sort(tickets.begin(), tickets.end());
//	vector<string> tmp;
//	tmp.push_back("ICN");
//	DFS("ICN", tickets, tmp);
//	//for (auto i : answer)cout << i << ' ';
//	return answer;
//}
//
//int main() {
//	//solution({ {"ICN", "JFK"} ,{"HND", "IAD"},{"JFK", "HND"} });
//	solution({ {"ICN", "SFO"} ,{"ICN","ATL"},{"SFO", "ATL"},{"ATL", "ICN"},{"ATL","SFO"} });
//
//}