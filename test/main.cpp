#include<iostream>
#include<iostream>
using namespace std;

//問題文と答えをまとめる構造体
struct Question
{
	string s;//問題文
	int a;//答え
};
int main()
{
	Question queastions[] = {
		{"13*()15",13 * -5},
		{"(-21)/(-3)",-21 / -3},
		{"7-(4+2)/2",7 - (4 + 2) / 2 }
	};
	cout << "[リクルート試験対策クイズ]\n";

	for (const auto& e : queastions) {
		cout << e.s << "の答えは?\n";
		int answer;
		cin >> answer;
		if (answer == e.a)
		{
			cout << "正解\n";
		}
		else
		{
			cout << "間違い！正解は" << e.a << "\n";
		}
	}//for questions


}