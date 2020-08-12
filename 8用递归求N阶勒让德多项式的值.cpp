//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//float p(int, float);// 后面那个参数答案里面是int  其实可以改成float
//int main() {
//	int n;
//	float x;
//	cout << "input n and x";
//	cin >> n >> x;
//	cout << "n=" << n << ", x=" << x << endl;
//	cout << "P" << n << "(" << x << ")" << " = " << p(n, x) << endl;
//	return 0;
//}
//float p(int n, float x) {
//	if (n == 0) return (1);
//	else if (n == 1)  return(x);
//	else return (((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n); //答案里面是*  题干了里面是-
//}