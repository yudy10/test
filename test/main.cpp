#include<iostream>
#include<iostream>
using namespace std;

//��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	string s;//��蕶
	int a;//����
};
int main()
{
	Question queastions[] = {
		{"13*()15",13 * -5},
		{"(-21)/(-3)",-21 / -3},
		{"7-(4+2)/2",7 - (4 + 2) / 2 }
	};
	cout << "[���N���[�g�����΍�N�C�Y]\n";

	for (const auto& e : queastions) {
		cout << e.s << "�̓�����?\n";
		int answer;
		cin >> answer;
		if (answer == e.a)
		{
			cout << "����\n";
		}
		else
		{
			cout << "�ԈႢ�I������" << e.a << "\n";
		}
	}//for questions


}