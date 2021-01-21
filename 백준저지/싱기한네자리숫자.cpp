//#include <iostream>
//using namespace std;
//
//int sumi(int x) {
//	int ret = 0;
//	while (x != 0) {
//		ret += x % 10;
//		x /= 10;
//	}
//	return ret;
//}
//
//int sumi2(int x) {
//	int ret = 0;
//	while (x != 0) {
//		ret += x % 12;
//		x /= 12;
//	}
//	return ret;
//}
//int sumi3(int x) {
//	int ret = 0;
//	while (x != 0) {
//		ret += x % 16;
//		x /= 16;
//	}
//	return ret;
//}
//int main() {
//	for (int i = 1000; i < 10000; i++) {
//		int sum1 = sumi(i);
//		int sum2 = sumi2(i);
//		int sum3 = sumi3(i);
//		//cout << i << ' ' << sum1 << ' ' << sum2 << ' ' << sum3 << endl;
//		if (sum1 == sum2 && sum2 == sum3) {
//			cout << i << '\n';
//		}
//	}
//}