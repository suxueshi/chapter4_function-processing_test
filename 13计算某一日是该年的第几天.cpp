//#include<iostream>
//using namespace std;
//int main() {
//	int sum_day(int, int);
//	int leap(int year);
//	int year, month, day, days;
//	cout << "please enter date(year month day): ";
//	cin >> year >> month >> day;
//	days = sum_day(month, day);
//	if (leap(year) && month >= 3)			//	����������������·���3�·��Ժ� days�Ͷ��һ��
//		days = days + 1;
//	cout << year << "/" << month << "/" << day << " is the " << days << "th day in this year.";
//	return 0;
//}
//
//int sum_day(int month, int day) {				//��������
//	int i;
//	int day_tab[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };		//ʮ�����·ݵ�����
//	for (i = 0; i < month - 1; i++)
//		day += day_tab[i];		//�ѵ���λ����������֮ǰ�·ݵ�������
//	return day;
//}
//
//int leap(int year) {
//	int leap;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;	//�ж�year�Ƿ�Ϊ����  �߼�ʽ�� ���������leap�͵���1
//	return leap;
//}
