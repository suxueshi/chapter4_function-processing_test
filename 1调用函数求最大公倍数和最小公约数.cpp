//#include<iostream>
//using namespace std;
//int main() {
//	int bei(int, int);			//需要对用到的函数声明
//	int yue(int, int);
//	int a, b;
//	cout << "请输入两个整数：";
//	cin >> a >> b;
//	cout << "最小公倍数是" << bei(a, b) << ' ' << "最大公约数是" << yue(a, b) << endl;
//	return 0;
//}
//
//int yue(int x, int y) {
//	int t, r;
//	if (y > x) { t = x; x = y; y = t; } //将x y按从大到小排列  x为大数
//	while ((r = x % y) != 0) {		//辗转相除法：记住除数变被除数  余数变除数 条件是余数不等于0
//		x = y;
//		y = r;
//	}
//	return(y);				//如果直接整除的话  小数y就是最大公约数
//}
//int bei(int x, int y) {
//	int bei;
//	int yue(int, int);			// 这里yue函数在bei函数的上方先编译  所以并不需要声明  但是还是建议声明
//	bei = x * y / yue(x, y);  //最大公约数等于两数的积除以最小公倍数 
//	return(bei);				
//}
