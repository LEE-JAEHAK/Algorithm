#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else return a.size() < b.size();
}

vector<int> solution(vector<string> words, vector<string> queries) {
	vector<int> answer;
	vector<string> v = words;
	vector<string> rv = v;
	for (int i = 0; i < rv.size(); i++)reverse(rv[i].begin(), rv[i].end());
	sort(rv.begin(), rv.end(), compare);
	sort(v.begin(), v.end(), compare);

	for (auto i : queries) {
		int sz = i.length();
		string s1;
		string s2;
		if (i[0] == '?') {
			reverse(i.begin(), i.end());
			for (int j = 0; j < sz; j++) {
				if (i[j] == '?') {
					s1.push_back('a');
					s2.push_back('z');
				}
				else {
					s1.push_back(i[j]);
					s2.push_back(i[j]);
				}
			}
			answer.push_back((upper_bound(rv.begin(), rv.end(), s2, compare) - rv.begin())
				-(lower_bound(rv.begin(), rv.end(), s1, compare) - rv.begin()));
		}
		else {
			for (int j = 0; j < sz; j++) {
				if (i[j] == '?') {
					s1.push_back('a');
					s2.push_back('z');
				}
				else {
					s1.push_back(i[j]);
					s2.push_back(i[j]);
				}
			}
			answer.push_back((upper_bound(v.begin(), v.end(), s2, compare) - v.begin())
				-(lower_bound(v.begin(), v.end(), s1, compare) - v.begin()));
		}
	}
	return answer;
}

int main() {
	for (auto i : solution({ "frodo", "front", "frost", "frozen", "frame", "kakao" },
		{ "fro??", "????o", "fr???", "fro???", "pro?" })) {
		cout << i << ' ';
	}
}