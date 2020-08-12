//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//double solut(double, double, double, double);
//int main() {
//	double a, b, c, d;
//	cout << "input a b c d: ";
//	cin >> a >> b >> c >> d;
//	cout << solut(a, b, c, d) << endl;
//	return 0;
//}
//
//double solut(double a, double b, double c, double d) {
//	double x = 1, x0, f, f1;
//	do {
//		x0 = x;
//		f = a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d;
//		f1 = 3 * a * x0 * x0 + 2 * b * x0 + c;
//		x = x0 - (f / f1);
//	} while (fabs(x - x0) >= 1e-5);
//	return(x);
//}