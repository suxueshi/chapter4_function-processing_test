//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;					//下面两个定义的函数就是移动盘子的两类操作 hanoi是小和尚的  move是大和尚的
//void hanoi(int n, char one, char two, char three);
//void move(char x, char y);
//int main() {
//	int m;
//	cout << "input the number of disks:　";
//	cin >> m;
//	cout << "the steps of moving" << m << " disks: " << endl;
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//
//void hanoi(int n, char one, char two, char three) {		//移动盘子的就是三步:(1) 将A上的n-1个盘子借助C盘移动到B盘 (2)将A盘剩下的一个盘移到到C盘上 (3)将n-1个盘子从B盘借助A盘移动到C盘上
//	if (n == 1) move(one, three);	//这是递归的结束条件，最后一个人只需要移动一个盘子					
//	else {											//每一次吩咐小和尚（嵌套）都是下面的三个操作	这上面的ABC在每一次调用hanio的时候都会变化，所以one并不是总是对准A座 所以move（ one, three）每次都不一样
//		hanoi(n - 1, one, three, two);				//(1) 将one上的n-1个盘子借助two盘移动到three盘			
//		move(one, three);							//(2)将one 盘剩下的一个盘移到到 three盘上（这个是每一次嵌套中大和尚的操作，将最大的盘子从one移动到three）
//		hanoi(n - 1, two, one, three);				//(3)将n-1个盘子从two盘借助one盘移动到three盘上
//	}
//}
//
//void move(char x, char y) {							//定义一个移动盘子的函数		
//	cout << x << "--" << y << endl;						
//}