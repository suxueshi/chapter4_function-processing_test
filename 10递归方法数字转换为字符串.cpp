//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//void convert(int);
//int main() {
//	int num;
//	cout << "input an integer: ";
//	cin >> num;
//	cout << "output: ";
//	if (num < 0) {		//����Ǹ����Ļ��� �����һ�����ţ���ת��Ϊ�������еݹ�
//		cout << "-";
//		num = -num;
//	}
//	convert(num);
//	return 0;
//}
//
//void convert(int n) {
//	int i;
//	char c;
//	if ((i = n / 10) != 0) 
//		convert(i);
//	c = n % 10 + '0';		//�����������345  �����ε����n����3 ���c�������ڶ��ε��õ����εĵط� ���n����34 ���4  Ȼ����������һ�ε��õڶ�������ط�n����345 c����5	
//	cout << ' ' << c;		//c��345��--c(34)--c(3){���3}��c(34){���4}--c(345){���5}  ע��������ǰһ�����õĽڵ�
//}
