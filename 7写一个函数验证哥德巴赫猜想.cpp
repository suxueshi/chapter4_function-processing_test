//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//void gotbaha(int);
//int prime(int);
//int main() {
//	int n;
//	cout << "������һ����С��6��ż���� ";
//	cin >> n;
//	gotbaha(n);
//	return 0;
//}
//
//int prime(int x) {
//	int i;
//	int k = sqrt(x);	//�������Ҳ���Ի��� 2��֮x ���� ����x��ѭ����������
//	int flag=1;
//	for (i = 2; i <= k; i++) {  //����flag==1�������Ļ� Ҳ���Լ���ѭ������
//		if (x % i == 0) {
//			flag = 0;
//			break;
//		}
//	}
//	return(flag);
//}
//
//void gotbaha(int n) {
//	int a, b;
//	for (a = 3; a <= n / 2; a = a + 2) {
//		b = n - a;
//		if (prime(a) && prime(b)) {
//			cout << n << " = " << a << "+" << b << endl;
//			//break;				//  ��break���Ͼ����ҵ�һ���ֹͣѭ��  �����breakȥ��Ҳ�� ֻ�ǻ��в�ͬʽ��  a,b����������
//		}
//	}
//}