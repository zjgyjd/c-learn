//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 2;
//	int b = 3;
//	printf("����ǰ��ֵa=%d,b=%d\n", a, b);
//	int temp;//���õ������������н���
//	temp = a;
//	a = b;
//	b = temp;
//	printf("�������ֵa=%d,b=%d\n", a, b);
//  system("pause");
//  return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 2;
//	int b = 3;//���ӵ�������
//	printf("����ǰ��ֵa=%d,b=%d\n", a, b);
//	a = a + b;//���üӼ���������                            
//	b = a - b;
//	a = a - b;
//	printf("�������ֵa=%d,b=%d\n", a, b);
//	system("pause");
//  return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int count = 1,b;
//	printf("������ʮ����:\n");
//	for (count = 1; count <= 10; count++){
//		int a = 0;
//		scanf("%d", &a);
//		if (count==1||b <= a){  //���û򽫵�һ��a��ֵ����b
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
//	for (int i = 0; i <Size-1-j ; i++){//a[Size-1-j]�Ѿ���ȷ�����Բ���Ҫ��ȷ��
//		if (a[i] < a[i + 1]){
//			a[i] = a[i] + a[i+1];//���üӼ��������Խ��н���                            
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
//			b = a - b;//���ý����Ŵ�С
//			a = a - b;
//		}
//		int c = a;
//		while (a%b != 0){
//			c = a%b;
//			a = b;           //���ý����������Լ�շת�����
//			b = c;
//		}
//		printf("%d \n", b);
//		system("pause");
//		return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//double Add(double, double);
//#define dd(x,y) x+y//define ����һ���ı��滻��������ͬdd��x��y�����滻��x+y
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
//	printf("�ж�1000��2000��֮������꣺\n");
//	int i = 1, leap = 1000;//leap year ����
//	for (; leap <= 2000; leap++){
//		if (leap%4==0&&leap%100!=0||leap%400==0){
//				printf("%d ", leap);
//			if (i++ % 10 == 0){
//				printf("\n"); //ÿʮ����һ��
//			}
//		}
//	}
//	printf("\n");//���һ������
//	system("pause");
//	return 0;
//}
//
//

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	printf("���һ�ų˷��ھ���\n");
//	int i = 1, j = 1;
//	for (i = 1; i <= 9; i++){                     //��һ������
//		for (j = 1; j <= i; j++){                 //�ڶ�������
//			printf("%d * %d = %2d ",i, j, i*j);//\t�Ʊ�������ж���
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
//	printf("���100��200֮���������\n");
//	for (int num = 100; num <= 200; num++){
//		for ( i = 2; i <= sqrt(num); i++){
//			if (num%i == 0)break;
//		}
//		if (i > sqrt(num)){
//			printf("%d ", num);
//			if (count++ == 10){
//				printf("\n");  //��¼ÿ���ʮ������һ��
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}