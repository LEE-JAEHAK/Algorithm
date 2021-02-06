//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> EDGE[20005];
//int visited[20005];
//queue<int> q;
//int N;
//
//void BFS() {
//    while (!q.empty()) {
//        int x = q.front();
//        q.pop();
//        for (auto i : EDGE[x]) {
//            if (visited[i] == 0) {
//                visited[i] = visited[x] + 1;
//                q.push(i);
//            }
//        }
//    }
//}
//
//int solution(int n, vector<vector<int>> edge) {
//    int answer = 0;
//    N = n;
//    for (auto i:edge) {
//        EDGE[i[0]].push_back(i[1]);
//        EDGE[i[1]].push_back(i[0]);
//    }
//    q.push(1);
//    visited[1] = 1;
//    BFS();
//    int maxx = 0;
//    for (int i = 1; i <= n; i++) {
//        maxx = max(maxx, visited[i]);
//    }
//    for (int i = 1; i <= n; i++) {
//        if (visited[i] == maxx)answer++;
//    }
//    return answer;
//}
//
//int main() {
//    cout << solution(6, { {3,6},{4,3},{3,2},{1,3},{1,2},{2,4},{5,2} });
//}