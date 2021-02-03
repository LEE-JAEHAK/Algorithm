//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[370000];
//
//int TIME(string s) {
//	istringstream ss(s);
//	string buf;
//	int time[3];
//	int idx = 0;
//	while (getline(ss, buf, ':')) {
//		time[idx++] = stoi(buf);
//	}
//	int playtime = 3600 * time[0] + 60 * time[1] + time[2];
//	return playtime;
//}
//
//tuple<int, int> TIME2(string s) {
//	string s1 = s.substr(0, 2);
//	string s2 = s.substr(3, 2);
//	string s3 = s.substr(6, 2);
//	int starttime = 3600 * stoi(s1) + 60 * stoi(s2) + stoi(s3);
//	s1 = s.substr(9, 2);
//	s2 = s.substr(12, 2);
//	s3 = s.substr(15, 2);
//	int endtime = 3600 * stoi(s1) + 60 * stoi(s2) + stoi(s3);
//	return tuple<int, int>(starttime, endtime);
//}
//
//string TIME3(int n) {
//	int tmp = n / 3600;
//	string s1 = to_string(tmp);
//	n -= tmp * 3600;
//	tmp = n / 60;
//	string s2 = to_string(tmp);
//	n -= tmp * 60;
//	string s3 = to_string(n);
//	if (s1.size() == 1)s1 = '0' + s1;
//	if (s2.size() == 1)s2 = '0' + s2;
//	if (s3.size() == 1)s3 = '0' + s3;
//
//	return s1 + ":" + s2 + ":" + s3;
//}
//
//string solution(string play_time, string adv_time, vector<string> logs) {
//	string answer = "";
//	int playtime = TIME(play_time);
//	int advtime = TIME(adv_time);
//
//	for (auto i : logs) {
//		int starttime = get<0>(TIME2(i));
//		int endtime = get<1>(TIME2(i));
//		for (int j = starttime; j < endtime; j++) {
//			arr[j]++;
//		}
//	}
//	long long left = 0, right = advtime, sum = 0;
//	for (int i = 0; i < right; i++) {
//		sum += arr[i];
//	}
//	long long maxx = sum, memo = 0;
//	while (right < playtime) {
//		sum -= arr[++left];
//		sum += arr[++right];
//		if (maxx < sum) {
//			maxx = sum;
//			memo = left + 1;
//		}
//	}
//	answer = TIME3(memo);
//	return answer;
//}
//
//int main() {
//	solution("02:03:55", "00:14:15",
//		{ "01:20:15-01:45:14", "00:40:31-01:00:00", "00:25:50-00:48:29",
//		"01:30:59-01:53:29", "01:37:44-02:02:30" });
//
//	solution("99:59:59", "25:00:00",
//		{ "69:59:59-89:59:59", "01:00:00-21:00:00", "79:59:59-99:59:59", "11:00:00-31:00:00" });
//
//	solution("50:00:00", "50:00:00",
//		{ "15:36:51-38:21:49", "10:14:18-15:36:51", "38:21:49-42:51:45" });
//}