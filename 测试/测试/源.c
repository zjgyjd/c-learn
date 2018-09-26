////函数返回两个数需要分配一个动态数组，然后return
//int* twoSum(int* nums, int numsSize, int target) {
//	int a, b;
//	for (int cou1 = 0; cou1 < numsSize; cou1++){
//		for (int cou2 = cou1 + 1; cou2 < numsSize; cou2++){
//			if ((nums[cou1] + nums[cou2]) == target){
//				a = cou1;
//				b = cou2;
//				break;
//			}
//		}
//	}
//	int *array = (int *)malloc(sizeof(int)* 2);
//	array[0] = a;
//	array[1] = b;
//	return array;
//}

//// 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
////分为三部分个位(unit)9，19，……99（99有两个）
////十位(decade)90……99（两次都到99）
//#include <stdio.h>
//#include <stdlib.h>
//int Isnine(int a){
//	if (a % 10 == 9 && a / 10 == 9){
//		return 2;//99
//	}
//	if (a % 10 == 9){//个位
//		return 1;
//	}
//	if (a / 10 == 9){//十位
//		return 1;
//	}
//	return 0;	
//}
//int main(){
//	int num, count=0;
//	for (num = 1; num <= 100; num++){//for循环访问1-100
//		if (Isnine(num)){
//			count++;
//			if (Isnine(num) == 2){
//				count++;
//			}
//		}
//	}
//	printf("1到100中9的个数为：%d\n ", count);
//	system("pause");
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
////奇数加偶数减
//#include <stdio.h>
//#include <stdlib.h>
//double Isfz(int fm){
//	if (fm % 2 == 0){
//		return -1.0;
//	}
//	return 1.0;
//}
//int main(){
//	double sum = 0, fm,fz;//分母（fm） 分子（fz）
//	for (fm = 1; fm <=100; fm++){//for循环访问fz的1-100
//		fz = Isfz(fm);
//		sum = fz / fm + sum;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100=%f", sum);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a[3] = {1,2,3};//数组内容的交换
//	int b[3] = {3,2,1};
//	int i;
//	for (i = 0; i < 3; i++){//for循环访问所有数组值
//		int temp;
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("a= ");
//	for (i = 0; i < 3; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\nb= ");
//	for (i = 0; i < 3; i++){
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0; 
//}

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