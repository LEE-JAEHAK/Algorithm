//#include <iostream>  ��������
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	vector<int> v = { 0,1,2,3,4};
//    do {
//        for (int i = 0; i < v.size(); i++)
//            cout << v[i] << ' ';
//        cout << '\n';
//    } while (next_permutation(v.begin(), v.end()));
//}

//#include <iostream>  MAP����
//#include <map>
//using namespace std;
//
//map<string, string> ma;
//
//int main() {
//	ma["a"] = "hello1";
//	ma["a"] = "hello2";
//	ma["b"] = "hello3";
//	cout << ma["a"] << endl << ma["b"];
//}

//int sec = 62;   ��Ʈ��&��Ʈ����ũ
//cout << sec << endl;
//cout << bitset<6>(sec) << endl;
//sec = (sec & (1 << 'A ' - 'A'));
//cout << bitset<6>(sec) << endl;
// 1000111010
//char ch = 'D';
//if (sec & 1 << ch - 'A')cout << "Yes";

//str.erase(unique(str.begin(), str.end()), str.end());   �ߺ�����
//str.erase(remove(str.begin(), str.end(), '#'), str.end());  Ư����������

//string i = "hello world man kind";  // string split ����
//istringstream ss(i);
//string buf;
//while (getline(ss, buf, ' ')) {
//	cout << buf << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void recur(int cnt, int idx, int bit) {     // 4��Ʈ �߿� 2�� �� ����� ��
//	if (cnt == 2) {
//		cout << bitset<4>(bit) << endl;
//		return;
//	}
//	if (idx == 4) {
//		//cout << bitset<4>(bit) << endl;
//		return;
//	}
//	recur(cnt + 1, idx + 1, bit | (1 << idx));
//	recur(cnt, idx + 1, bit);
//}
//int main() {
//	recur(0, 0, 0);
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void recur(int idx, int bit) {     //�ش� �ڸ��� ��Ʈ���� ��� ����Ǽ� 2��������
//	if (idx == 4) {
//		cout << bitset<4>(bit) << endl;
//		return;
//	}
//	recur(idx + 1, bit);
//	recur(idx + 1, bit | (1 << idx));
//}
//int main() {
//	recur(0, 0);
//}

//void recur(int cnt, int idx) {   ���Ĺ� ����Ǽ� ���ϱ�  k=����
//	if (idx == 27)return;
//	if (cnt == k) { 
//		return;
//	}
//	if (arr[idx] == 0) {
//		arr[idx] = 1;
//		recur(cnt + 1, idx + 1);
//		arr[idx] = 0;
//	}
//	recur(cnt, idx + 1);
//}
//recur(0, 0);

//void recur(int idx) {   // ���̰� m �� ���� ��� ���ϱ� 
//	if (idx == m) {
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (check[i] == 0) {
//			arr[idx] = i;
//			check[i] = 1;
//			recur(idx + 1);
//			check[i] = 0;
//		}
//	}
//}
//	recur(0);

// ��Ʈ��ŷ �迭 - 2048(easy)  ���⸸ �̸� ���ϰ� �迭�� ó������ ���� 