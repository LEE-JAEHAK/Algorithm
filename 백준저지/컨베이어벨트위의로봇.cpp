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
//	cout << "\n내구도   ";
//	for (int i = 1; i <= 2 * n; i++)cout << arr[i] << ' ';
//	cout << "\n로봇     ";
//	for (int i = 1; i <= 2 * n; i++)cout << robot[i] << ' ';
//}
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= 2 * n; i++) {
//		cin >> arr[i];
//	}
//	int time = 0;
//	while (1) {
//		move(); //벨트 회전
//		if (robot[n] == 1)robot[n] = 0; //내리기
//		//cout << "\n------회전 후-------"; print();
//		moverobot();
//		//set(); // 내구도 1씩 감소
//		if (robot[n] == 1)robot[n] = 0; //내리기
//		if (robot[1] == 0 && arr[1] > 0) { robot[1] = 1; arr[1]--; } //올리기
//		//cout << "\n------로봇 이동 후-------"; print();
//		time++;
//		if (condition())break;
//	}
//	cout << time;
//}