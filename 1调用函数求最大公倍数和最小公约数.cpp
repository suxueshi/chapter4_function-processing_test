//#include<iostream>
//using namespace std;
//int main() {
//	int bei(int, int);			//��Ҫ���õ��ĺ�������
//	int yue(int, int);
//	int a, b;
//	cout << "����������������";
//	cin >> a >> b;
//	cout << "��С��������" << bei(a, b) << ' ' << "���Լ����" << yue(a, b) << endl;
//	return 0;
//}
//
//int yue(int x, int y) {
//	int t, r;
//	if (y > x) { t = x; x = y; y = t; } //��x y���Ӵ�С����  xΪ����
//	while ((r = x % y) != 0) {		//շת���������ס�����䱻����  ��������� ����������������0
//		x = y;
//		y = r;
//	}
//	return(y);				//���ֱ�������Ļ�  С��y�������Լ��
//}
//int bei(int x, int y) {
//	int bei;
//	int yue(int, int);			// ����yue������bei�������Ϸ��ȱ���  ���Բ�����Ҫ����  ���ǻ��ǽ�������
//	bei = x * y / yue(x, y);  //���Լ�����������Ļ�������С������ 
//	return(bei);				
//}
