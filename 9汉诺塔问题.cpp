//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;					//������������ĺ��������ƶ����ӵ�������� hanoi��С���е�  move�Ǵ���е�
//void hanoi(int n, char one, char two, char three);
//void move(char x, char y);
//int main() {
//	int m;
//	cout << "input the number of disks:��";
//	cin >> m;
//	cout << "the steps of moving" << m << " disks: " << endl;
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//
//void hanoi(int n, char one, char two, char three) {		//�ƶ����ӵľ�������:(1) ��A�ϵ�n-1�����ӽ���C���ƶ���B�� (2)��A��ʣ�µ�һ�����Ƶ���C���� (3)��n-1�����Ӵ�B�̽���A���ƶ���C����
//	if (n == 1) move(one, three);	//���ǵݹ�Ľ������������һ����ֻ��Ҫ�ƶ�һ������					
//	else {											//ÿһ�ηԸ�С���У�Ƕ�ף������������������	�������ABC��ÿһ�ε���hanio��ʱ�򶼻�仯������one���������Ƕ�׼A�� ����move�� one, three��ÿ�ζ���һ��
//		hanoi(n - 1, one, three, two);				//(1) ��one�ϵ�n-1�����ӽ���two���ƶ���three��			
//		move(one, three);							//(2)��one ��ʣ�µ�һ�����Ƶ��� three���ϣ������ÿһ��Ƕ���д���еĲ��������������Ӵ�one�ƶ���three��
//		hanoi(n - 1, two, one, three);				//(3)��n-1�����Ӵ�two�̽���one���ƶ���three����
//	}
//}
//
//void move(char x, char y) {							//����һ���ƶ����ӵĺ���		
//	cout << x << "--" << y << endl;						
//}