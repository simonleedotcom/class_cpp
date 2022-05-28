#include <iostream>
#include <cstring>
using namespace std;

int main() {

	/*char s[30];
	int num1, num2;
	char* op;

	cout << "? ";
	cin.getline(s, 30, '\n');

	num1 = atoi(strtok(s, " "));
	op = strtok(NULL, " ");
	num2 = atoi(strtok(NULL, " "));

	if (*op == '+')
		cout << num1 << " " << op << " " << num2 << " = " << num1 + num2;
	else if (*op == '-')
		cout << num1 << " " << op << " " << num2 << " = " << num1 - num2;
	else if (*op == '*')
		cout << num1 << " " << op << " " << num2 << " = " << num1 * num2;
	else if (*op == '/')
		cout << num1 << " " << op << " " << num2 << " = " << num1 / num2;
	else if (*op == '%')
		cout << num1 << " " << op << " " << num2 << " = " << num1 % num2;*/


	char cal[50];
	int num1;
	int num2;
	char* char1;

	cout << "? ";
	cin.getline(cal, 50, '\n');

	num1 = atoi(strtok(cal, " "));
	char1 = strtok(NULL, " ");
	num2 = atoi(strtok(NULL, " "));


	/*for (int i = 0; i <= 2; i++)
	{
		cin.getline(cal, 50, ' ');
		//cout << cal << ' ';
		if (i % 2 == 0) {
			cout << atoi(cal) << ' ';
			num1 = atoi(cal);
		}
		else {
			cout << cal << ' ';
			char1 = strtok(cal, " ");
		}
	}*/

	if (*char1 == '+')
		cout << num1 << ' ' << char1 << ' ' << num2 << " = " << num1 + num2;
	else if (*char1 == '-')
		cout << num1 << ' ' << char1 << ' ' << num2 << " = " << num1 - num2;
	else if (*char1 == '*')
		cout << num1 << ' ' << char1 << ' ' << num2 << " = " << num1 * num2;
	else if (*char1 == '/')
		cout << num1 << ' ' << char1 << ' ' << num2 << " = " << num1 / num2;
	else if (*char1 == '%')
		cout << num1 << ' ' << char1 << ' ' << num2 << " = " << num1 % num2;
}
		/*switch (*char1) {
		case '+':
			cout << num[0] << " + " << num[1] << " = " << num[0] + num[1];
			break;
		case '-':
			cout << num[0] << " - " << num[1] << " = " << num[0] - num[1];
			break;
		case '*':
			cout << num[0] << " * " << num[1] << " = " << num[0] * num[1];
			break;
		case '/':
			cout << num[0] << " / " << num[1] << " = " << num[0] / num[1];
			break;
		default:
			cout << num[0] << " % " << num[1] << " = " << num[0] % num[1];
			break;
		}*/