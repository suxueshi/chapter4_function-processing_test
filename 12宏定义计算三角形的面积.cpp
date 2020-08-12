//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//#define S(a,b,c) (a+b+c)/2				//直接在宏定义的时候给出公式
//#define AREA(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))
//int main() {
//	float a, b, c;
//	int flag=1;
//	cout << "input a b c: ";
//
//	while (flag) {			//三种实现方式
//		cin >> a >> b >> c;
//		if (a + b > c && a + c > b && b + c > a) {
//			cout << "area=" << AREA(a, b, c) << endl;
//			flag = 0;
//			break;
//		}
//		cout << "it is not a triangle ! please input again: ";	
//	}
//
//	//do {
//	//	cin >> a >> b >> c;
//	//	if (a + b <= c || a + c <= b || b + c <= a)
//	//		cout << "it is not a triangle ! please input again: ";
//	//	else;
//	//} while (a + b <= c || a + c <= b || b + c <= a);
//	//cout <<"area="<< AREA(a, b, c) << endl;
//
//
//	//if (a + b > c && a + c > b && b + c > a)
//	//	cout << AREA(a, b, c) << endl;
//
//
//	return 0;
//}