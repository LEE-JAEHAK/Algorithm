//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int arr[205];
//bool robot[205];
//int n, k;
//
//void move() {
//	int tmp = arr[2 * n];
//	for (int i = 2 * n; i >= 2; i--) {
//		arr[i] = arr[i - 1];
//	}
//	arr[1] = tmp;
//
//	for (int i = n; i >= 2; i--) {
//		robot[i] = robot[i - 1];
//	}
//	robot[1] = 0;
//}
//void moverobot() {
//	for (int i = n - 1; i >= 1; i--) {
//		if (robot[i] == 1) {
//			if (robot[i + 1] == 0 && arr[i + 1] >= 1) {
//				robot[i + 1] = 1;
//				robot[i] = 0;
//				arr[i + 1]--;
//			}
//		}
//	}
//}
//bool condition() {
//	int cnt = 0;
//	for (int i = 1; i <= 2 * n; i++) {
//		if (arr[i] == 0)cnt++;
//	}
//	return cnt >= k ? 1 : 0;
//}
//void print() {
//	cout << "\n������   ";
//	for (int i = 1; i <= 2 * n; i++)cout << arr[i] << ' ';
//	cout << "\n�κ�     ";
//	for (int i = 1; i <= 2 * n; i++)cout << robot[i] << ' ';
//}
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= 2 * n; i++) {
//		cin >> arr[i];
//	}
//	int time = 0;
//	while (1) {
//		move(); //��Ʈ ȸ��
//		if (robot[n] == 1)robot[n] = 0; //������
//		//cout << "\n------ȸ�� ��-------"; print();
//		moverobot();
//		//set(); // ������ 1�� ����
//		if (robot[n] == 1)robot[n] = 0; //������
//		if (robot[1] == 0 && arr[1] > 0) { robot[1] = 1; arr[1]--; } //�ø���
//		//cout << "\n------�κ� �̵� ��-------"; print();
//		time++;
//		if (condition())break;
//	}
//	cout << time;
//}