#include <iostream>
using namespace std;

int main() {
	int order_num, person_num;

	char result1[10] = "«��";
	char result2[10] = "¥��";
	char result3[10] = "������";
	char result4[30] = "���� ������ �������ϴ�.";
	char result5[30] = "�ٽ� �ֹ��ϼ���!!";


	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
		
	while (1) {
		cout << "«�� : 1, ¥�� : 2, ������ : 3, ���� : 4 >> ";
		cin >> order_num;

		if (order_num == 4) {
			cout << result4;
			break;
		}
		else if (order_num == 1) {
			cout << "�� �κ�? ";
			cin >> person_num;
			cout << result1 << person_num << "�κ� ���Խ��ϴ�\n";
		}
		else if (order_num == 2) {
			cout << "�� �κ�? ";
			cin >> person_num;
			cout << result2 << person_num << "�κ� ���Խ��ϴ�\n";
		}
		else if (order_num == 3) {
			cout << "�� �κ�? ";
			cin >> person_num;
			cout << result3 << person_num << "�κ� ���Խ��ϴ�\n";
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
		*result = "«�� ";
		break;
	case 2:
		*result = "¥�� ";
		break;
	case 3:
		*result = "������ ";
		break;
	case 4:
		*result = "���� ������ �������ϴ�.";
		break;
	default:
		*result = "�ٽ� �ֹ��ϼ���!!";
	}*/