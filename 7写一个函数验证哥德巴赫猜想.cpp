//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//void gotbaha(int);
//int prime(int);
//int main() {
//	int n;
//	cout << "请输入一个不小于6的偶数： ";
//	cin >> n;
//	gotbaha(n);
//	return 0;
//}
//
//int prime(int x) {
//	int i;
//	int k = sqrt(x);	//这个条件也可以换成 2分之x 不过 根号x的循环次数更少
//	int flag=1;
//	for (i = 2; i <= k; i++) {  //加上flag==1的条件的话 也可以减少循环次数
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
//			//break;				//  把break加上就是找到一组就停止循环  如果把break去掉也行 只是会有不同式子  a,b倒过来而已
//		}
//	}
//}