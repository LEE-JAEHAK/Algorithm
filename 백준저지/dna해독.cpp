//#include <iostream>
//#include <string>
//using namespace std;
//
//char arr[100][100];
//
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//
//	arr['A']['A'] = 'A';
//	arr['A']['G'] = 'C';
//	arr['A']['C'] = 'A';
//	arr['A']['T'] = 'G';
//	arr['G']['A'] = 'C';
//	arr['G']['G'] = 'G';
//	arr['G']['C'] = 'T';
//	arr['G']['T'] = 'A';
//	arr['C']['A'] = 'A';
//	arr['C']['G'] = 'T';
//	arr['C']['C'] = 'C';
//	arr['C']['T'] = 'G';
//	arr['T']['A'] = 'G';
//	arr['T']['G'] = 'A';
//	arr['T']['C'] = 'G';
//	arr['T']['T'] = 'T';
//
//	for (int i = n - 1; i > 0; i--) {
//		char t = arr[s[i]][s[i - 1]];
//		s.pop_back();
//		s.pop_back();
//		s.push_back(t);
//	}
//	cout << s;
//}