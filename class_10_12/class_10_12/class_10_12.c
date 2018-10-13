////编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果接收的是大写字符，就输出对应的小写字符，
////如果是数字不输出。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void Change(char s){
//	if (s >= 'a'&&s <= 'z'){
//		printf("%c", s - 32);
//	}
//	else if (s >= 'A'&&s <= 'Z'){
//		printf("%c", s);
//	}
//}
//int main(){
//	//接收键盘输入，直到回车
//	printf("请输入字符，0结束！\n");
//	char s;
//	scanf("%c", &s);
//	while (s != '0'){
//		//判断是否为字符并转换
//		Change(s);
//	    scanf("%c", &s);
//	}
//	printf("结束\n");
//	system("pause");
//	return 0;
//}

////模拟三次密码输入
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	//提示输入
//	char a[20]=" ";
//	char traget[] = "123456";
//	int i;
//	for (i = 0; i < 3; i++){
//		printf("请输入六位数密码：\n");
//		scanf("%s", a);
//		if (strcmp(a, traget) == 0){
//			break;
//		}
//	}
//	if (i == 3){
//		printf("输入错误，已退出！！\n");
//	}
//	else{
//		printf("加载中.....\n");
//	}
//	system("pause");
//	return 0;
//}

////.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int FindNum(int a[],int n,int size){
//	//折半查找
//	int left = 0;
//	int right = size - 1;
//	int mid = (right + left) / 2;
//	while (left <= right){
//		if (n > a[mid]){
//			left = mid + 1;
//		}
//		else if (n < a[mid]){
//			right = mid - 1;
//		}
//		else{
//			return mid;
//		}
//		mid = (right + left) / 2;
//	}
//	return -1;
//}
//int main(){
//	//定义一个升序数组
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("输入想要查询的数字:\n");
//	int num;
//	scanf("%d",&num);
//	//int l = sizeof(int) ;
//	//printf("%d", sizeof(int));
//	//查找，返回下标
//	//数组
//	//数组长度
//	int mark = FindNum(a, num,  sizeof(a) / sizeof(a[0]));
//	if (mark == -1){
//		printf("Not found!!\n");
//	}
//	else
//	{
//		printf("The mark is %d.\n", mark);
//		printf("%d\n", a[mark]);
//	}
//	system("pause");
//	return 0;
//}

//猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int Menu(){
//	int i;
//	printf("**************************\n");
//	printf("*          1.开始        *\n");
//	printf("*          0.退出        *\n");
//	printf("**************************\n");
//	scanf("%d", &i);
//	while (i != 1 && i != 0){
//		printf("请输入正确数字\n");
//		scanf("%d", &i);
//	}
//	return i;
//}
//int PrtNum(){
//	int guess;
//	printf("请输入一个数：(0—99)\n");
//	scanf("%d", &guess);
//	while (guess<0 || guess>99){
//		printf("请输入范围内的数：\n");
//		scanf("%d", &guess);
//	}
//	return guess;
//}
//void Guess(int x){
//	//打印数字
//	int num = PrtNum();
//	while (num != x){
//		if (num< x){
//			printf("猜小了\n");
//		}
//		if (num>x){
//			printf("猜大了\n");
//		}
//		num = PrtNum();
//	}
//	printf("猜对了!\n");
//}
//int main(){//猜数字
//	//设置 进入 退出菜单
//	int i = Menu();
//	int target;
//	srand((unsigned)time(NULL));
//	while(i==1){
//		target = rand()%100;
//		//输入数并判断是大了还是小了
//		Guess(target);
//		i = Menu();
//	}
//	printf("游戏结束！！\n");
//	system("pause\n");
//	return 0;
//}