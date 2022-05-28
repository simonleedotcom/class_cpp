#include <iostream>
using namespace std;

int main() {
	int order_num, person_num;

	char result1[10] = "짬뽕";
	char result2[10] = "짜장";
	char result3[10] = "군만두";
	char result4[30] = "오늘 영업은 끝났습니다.";
	char result5[30] = "다시 주문하세요!!";


	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
		
	while (1) {
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4 >> ";
		cin >> order_num;

		if (order_num == 4) {
			cout << result4;
			break;
		}
		else if (order_num == 1) {
			cout << "몇 인분? ";
			cin >> person_num;
			cout << result1 << person_num << "인분 나왔습니다\n";
		}
		else if (order_num == 2) {
			cout << "몇 인분? ";
			cin >> person_num;
			cout << result2 << person_num << "인분 나왔습니다\n";
		}
		else if (order_num == 3) {
			cout << "몇 인분? ";
			cin >> person_num;
			cout << result3 << person_num << "인분 나왔습니다\n";
		}
		else {
			cout << result5 << endl;
		}
	}
}

/*char* order(int num) {


	if (num == 1)
		return result1;
	else if (num == 2)
		return result2;
	else if (num == 3)
		return result3;
	else if (num == 4)
		return result4;
	else
		return result5;
}*/


	/*switch (num) {
	case 1:
		*result = "짬뽕 ";
		break;
	case 2:
		*result = "짜장 ";
		break;
	case 3:
		*result = "군만두 ";
		break;
	case 4:
		*result = "오늘 영업은 끝났습니다.";
		break;
	default:
		*result = "다시 주문하세요!!";
	}*/