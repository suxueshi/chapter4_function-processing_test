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
//	if (num < 0) {		//如果是负数的话， 先输出一个负号，再转换为正数进行递归
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
//	c = n % 10 + '0';		//假如输入的是345  第三次的这个n就是3 输出c后跳到第二次调用第三次的地方 这个n就是34 输出4  然后再跳到第一次调用第二次这个地方n就是345 c就是5	
//	cout << ' ' << c;		//c（345）--c(34)--c(3){输出3}—c(34){输出4}--c(345){输出5}  注意是跳回前一个调用的节点
//}
