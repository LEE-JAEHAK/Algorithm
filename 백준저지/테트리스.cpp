//#include <iostream>
//using namespace std;
//int arr[102];
//int main() {
//	int c, p;
//	cin >> c >> p;
//	for (int i = 0; i < 102; i++)arr[i] = -1;
//	for (int i = 0; i < c; i++)cin >> arr[i];
//
//	int ans = 0;
//	for (int i = 0; i < c; i++) {
//		switch (p) {
//		case 1:
//			ans++;
//			if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2] && arr[i + 2] == arr[i + 3])ans++;
//			break;
//		case 2:
//			if (arr[i] == arr[i + 1])ans++;
//			break;
//		case 3:
//			if (arr[i] == arr[i + 1] && arr[i + 1] + 1 == arr[i + 2])ans++;
//			if (arr[i] == arr[i + 1] + 1)ans++;
//			break;
//		case 4:
//			if (arr[i] == arr[i + 1] + 1 && arr[i + 1] == arr[i + 2])ans++;
//			if (arr[i] + 1 == arr[i + 1])ans++;
//			break;
//		case 5:
//			if (arr[i] == arr[i + 1] + 1)ans++;
//			if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])ans++;
//			if (arr[i] == arr[i + 1] + 1 && arr[i + 1] + 1 == arr[i + 2])ans++;
//			if (arr[i] + 1 == arr[i + 1])ans++;
//			break;
//		case 6:
//			if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])ans++;
//			if (arr[i] + 1 == arr[i + 1] && arr[i + 1] == arr[i + 2])ans++;
//			if (arr[i] == arr[i + 1] + 2)ans++;
//			if (arr[i] == arr[i + 1])ans++;
//			break;
//		case 7:
//			if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])ans++;
//			if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2] + 1)ans++;
//			if (arr[i] + 2 == arr[i + 1])ans++;
//			if (arr[i] == arr[i + 1])ans++;
//			break;
//		}
//	}
//	cout << ans;
//}