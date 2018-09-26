//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 2;
//	int b = 3;
//	printf("交换前的值a=%d,b=%d\n", a, b);
//	int temp;//利用第三个变量进行交换
//	temp = a;
//	a = b;
//	b = temp;
//	printf("交换后的值a=%d,b=%d\n", a, b);
//  system("pause");
//  return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 2;
//	int b = 3;//不加第三变量
//	printf("交换前的值a=%d,b=%d\n", a, b);
//	a = a + b;//利用加减法的特性                            
//	b = a - b;
//	a = a - b;
//	printf("交换后的值a=%d,b=%d\n", a, b);
//	system("pause");
//  return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int count = 1,b;
//	printf("请输入十个数:\n");
//	for (count = 1; count <= 10; count++){
//		int a = 0;
//		scanf("%d", &a);
//		if (count==1||b <= a){  //利用或将第一次a的值赋给b
//			b = a;
//		}
//	}
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define Size  3
//int main(){
//	printf("Enter three numbers:\n");
//	int a[Size];
//	for (int i = 0; i <= Size-1; i++)
//		scanf("%d", &a[i]);
//	for (int j = 0; j < Size - 1;j++)
//	for (int i = 0; i <Size-1-j ; i++){//a[Size-1-j]已经被确定所以不需要在确认
//		if (a[i] < a[i + 1]){
//			a[i] = a[i] + a[i+1];//利用加减法的特性进行交换                            
//			a[i + 1] = a[i] - a[i + 1];
//			a[i] = a[i] - a[i + 1];
//		}
//	}
//	for (int i = 0; i <= Size - 1; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	printf("Enter two numbers:");
//		int a, b;
//		scanf("%d %d", &a, &b);
//		if (a < b){
//			a = a + b;                          
//			b = a - b;//运用交换排大小
//			a = a - b;
//		}
//		int c = a;
//		while (a%b != 0){
//			c = a%b;
//			a = b;           //运用交换两个数以及辗转相除法
//			b = c;
//		}
//		printf("%d \n", b);
//		system("pause");
//		return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//double Add(double, double);
//#define dd(x,y) x+y//define 进行一种文本替换，看到相同dd（x，y）就替换成x+y
//typedef struct Student{
//   
//
//	char name[1024];  //'' %c
//	int num[2014];
//
//}std;
//int main(){
//    std lisi = { "lisi", 111156,2,3};
//	std lala = { "lala", 1211 };
//	//double x = 2.2;
//	//int y = 2.2;
//	char a[] = {"skjdksjdkjd\n"};
//	printf("%c\n",a );
//	printf("%c,%d\n",lisi.name[1],lisi.num[1]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	printf("判断1000到2000年之间的闰年：\n");
//	int i = 1, leap = 1000;//leap year 闰年
//	for (; leap <= 2000; leap++){
//		if (leap%4==0&&leap%100!=0||leap%400==0){
//				printf("%d ", leap);
//			if (i++ % 10 == 0){
//				printf("\n"); //每十个换一行
//			}
//		}
//	}
//	printf("\n");//最后一个换行
//	system("pause");
//	return 0;
//}
//
//

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	printf("输出一张乘法口诀表：\n");
//	int i = 1, j = 1;
//	for (i = 1; i <= 9; i++){                     //第一个因子
//		for (j = 1; j <= i; j++){                 //第二个因子
//			printf("%d * %d = %2d ",i, j, i*j);//\t制表符进行列对齐
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main(){
//	int count = 1,i = 2;
//	printf("输出100到200之间的素数：\n");
//	for (int num = 100; num <= 200; num++){
//		for ( i = 2; i <= sqrt(num); i++){
//			if (num%i == 0)break;
//		}
//		if (i > sqrt(num)){
//			printf("%d ", num);
//			if (count++ == 10){
//				printf("\n");  //记录每输出十个数换一行
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}