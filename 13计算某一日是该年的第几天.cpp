//#include<iostream>
//using namespace std;
//int main() {
//	int sum_day(int, int);
//	int leap(int year);
//	int year, month, day, days;
//	cout << "please enter date(year month day): ";
//	cin >> year >> month >> day;
//	days = sum_day(month, day);
//	if (leap(year) && month >= 3)			//	若输入的是闰年且月份在3月份以后 days就多加一天
//		days = days + 1;
//	cout << year << "/" << month << "/" << day << " is the " << days << "th day in this year.";
//	return 0;
//}
//
//int sum_day(int month, int day) {				//计算日期
//	int i;
//	int day_tab[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };		//十二个月份的天数
//	for (i = 0; i < month - 1; i++)
//		day += day_tab[i];		//把第三位的天数加上之前月份的满天数
//	return day;
//}
//
//int leap(int year) {
//	int leap;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;	//判断year是否为闰年  逻辑式子 如果是闰年leap就等于1
//	return leap;
//}
