////����������������Ҫ����һ����̬���飬Ȼ��return
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

//// ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
////��Ϊ�����ָ�λ(unit)9��19������99��99��������
////ʮλ(decade)90����99�����ζ���99��
//#include <stdio.h>
//#include <stdlib.h>
//int Isnine(int a){
//	if (a % 10 == 9 && a / 10 == 9){
//		return 2;//99
//	}
//	if (a % 10 == 9){//��λ
//		return 1;
//	}
//	if (a / 10 == 9){//ʮλ
//		return 1;
//	}
//	return 0;	
//}
//int main(){
//	int num, count=0;
//	for (num = 1; num <= 100; num++){//forѭ������1-100
//		if (Isnine(num)){
//			count++;
//			if (Isnine(num) == 2){
//				count++;
//			}
//		}
//	}
//	printf("1��100��9�ĸ���Ϊ��%d\n ", count);
//	system("pause");
//	return 0;
//}

////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
////������ż����
//#include <stdio.h>
//#include <stdlib.h>
//double Isfz(int fm){
//	if (fm % 2 == 0){
//		return -1.0;
//	}
//	return 1.0;
//}
//int main(){
//	double sum = 0, fm,fz;//��ĸ��fm�� ���ӣ�fz��
//	for (fm = 1; fm <=100; fm++){//forѭ������fz��1-100
//		fz = Isfz(fm);
//		sum = fz / fm + sum;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100=%f", sum);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a[3] = {1,2,3};//�������ݵĽ���
//	int b[3] = {3,2,1};
//	int i;
//	for (i = 0; i < 3; i++){//forѭ��������������ֵ
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