//#include <iostream>
//using namespace std;
//
//int arr[6][9];
//int havetomove[6];
//
//void moveright(int x) {
//	int tmp = arr[x][8];
//	for (int i = 8; i >= 2; i--) {
//		arr[x][i] = arr[x][i - 1];
//	}
//	arr[x][1] = tmp;
//}
//void moveleft(int x) {
//	int tmp = arr[x][1];
//	for (int i = 1; i <= 7; i++) {
//		arr[x][i] = arr[x][i + 1];
//	}
//	arr[x][8] = tmp;
//}
//
//int main() {
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 1; j <= 8; j++) {
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//	int k;
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		int a, b;
//		cin >> a >> b;
//		if (b == -1)havetomove[a] = -1; //반시계
//		else havetomove[a] = 1; //시계
//		int tmp = a;
//		while (tmp < 4) {
//			if (arr[tmp][3] == arr[tmp + 1][7])break;
//			else if (arr[tmp][3] != arr[tmp + 1][7])havetomove[tmp + 1] = havetomove[tmp] * -1;
//			tmp++;
//		}
//		tmp = a;
//		while (tmp > 1) {
//			if (arr[tmp][7] == arr[tmp - 1][3])break;
//			else if (arr[tmp][7] != arr[tmp - 1][3])havetomove[tmp - 1] = havetomove[tmp] * -1;
//			tmp--;
//		}
//		for (int k = 1; k <= 4; k++) {
//			if (havetomove[k] == -1)moveleft(k);
//			else if (havetomove[k] == 1)moveright(k);
//			havetomove[k] = 0;
//		}
//	}
//	int sum = 0;
//	for (int i = 1; i <= 4; i++) {
//		sum += arr[i][1] * (1 << (i - 1));
//	}
//	cout << sum;
//}