//#include<iostream>
//#include<cmath>
//using namespace std;
//void prime(int);
//int main() {
//	int a;
//	cout << "please enter an integer:";   //可以在这里加上输入1 的时候 输出不是素数也不是合数 然后重新输入
//	cin >> a;
//	prime(a);
//	return 0;
//}
//void prime(int a) {
//	int i;
//	int flag=1;
//	for (i = 2; i <= a/2; i++) {  //加上flag==1的条件的话 也可以减少循环次数  //a/2这个条件也可以换成根号a,循环次数更少
//		if (a % i == 0) {
//			flag = 0;
//			break;
//		}
//	}
//	if (flag) cout << a << " is a prime";
//	else cout << a << " is not a prime";
//}