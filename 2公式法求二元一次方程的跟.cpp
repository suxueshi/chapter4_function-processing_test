//#include<iostream>
//#include<cmath>
//using namespace std;
//float a, b, c, p, x1, x2, m, n;			//这里参数的定义要放在main函数之外，因为下面函数还要用到	
//void low(float, float);				//为什么double精度的时候 low函数出来的n都是0呢
//void high(float, float);
//void equal(float, float);
//int main() {
//	cout << "请输入二元一次方程系数a b c:";
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
//	else {		//else 后面直接加花括号  不需要条件了
//		low(a, b);
//		cout << "x1=" << m << "+" << n << "i" << endl;
//		cout << "x2=" << m << "-" << n << "i" << endl;
//	}
//}
//void high(float a, float b) {			//定义一个函数 求p>0的时候方程的根
//	x1 = (-b + sqrt(p)) / (2 * a);
//	x2 = (-b - sqrt(p)) / (2 * a);
//}
//void equal(float a, float b) {
//	x1 = x2 = (-b) / (2 * a);
//}
//void low(float a, float b) {
//	m = -b / (2 * a);
//	n = sqrt(-p) / (2 * a);		//将p取相反数 即可就得i的系数
//}
