//#include<iostream>
//#include<cmath>
//using namespace std;
//float a, b, c, p, x1, x2, m, n;			//��������Ķ���Ҫ����main����֮�⣬��Ϊ���溯����Ҫ�õ�	
//void low(float, float);				//Ϊʲôdouble���ȵ�ʱ�� low����������n����0��
//void high(float, float);
//void equal(float, float);
//int main() {
//	cout << "�������Ԫһ�η���ϵ��a b c:";
//	cin >> a >> b >> c;
//	p = b * b - 4 * a * c;
//	if (p>0) {
//		high(a, b);
//		cout << "x1=" << x1 << ' ' << "x2=" << x2;
//	}
//	else if (p == 0) {
//		equal(a, b);
//		cout << "x1=" << x1 << ' ' << "x2=" << x2;
//	}
//	else {		//else ����ֱ�Ӽӻ�����  ����Ҫ������
//		low(a, b);
//		cout << "x1=" << m << "+" << n << "i" << endl;
//		cout << "x2=" << m << "-" << n << "i" << endl;
//	}
//}
//void high(float a, float b) {			//����һ������ ��p>0��ʱ�򷽳̵ĸ�
//	x1 = (-b + sqrt(p)) / (2 * a);
//	x2 = (-b - sqrt(p)) / (2 * a);
//}
//void equal(float a, float b) {
//	x1 = x2 = (-b) / (2 * a);
//}
//void low(float a, float b) {
//	m = -b / (2 * a);
//	n = sqrt(-p) / (2 * a);		//��pȡ�෴�� ���ɾ͵�i��ϵ��
//}
