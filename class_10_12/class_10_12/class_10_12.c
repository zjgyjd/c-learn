////��дһ�����򣬿���һֱ���ռ����ַ���
////�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
////������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
////��������ֲ������
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
//	//���ռ������룬ֱ���س�
//	printf("�������ַ���0������\n");
//	char s;
//	scanf("%c", &s);
//	while (s != '0'){
//		//�ж��Ƿ�Ϊ�ַ���ת��
//		Change(s);
//	    scanf("%c", &s);
//	}
//	printf("����\n");
//	system("pause");
//	return 0;
//}

////ģ��������������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	//��ʾ����
//	char a[20]=" ";
//	char traget[] = "123456";
//	int i;
//	for (i = 0; i < 3; i++){
//		printf("��������λ�����룺\n");
//		scanf("%s", a);
//		if (strcmp(a, traget) == 0){
//			break;
//		}
//	}
//	if (i == 3){
//		printf("����������˳�����\n");
//	}
//	else{
//		printf("������.....\n");
//	}
//	system("pause");
//	return 0;
//}

////.д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int FindNum(int a[],int n,int size){
//	//�۰����
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
//	//����һ����������
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("������Ҫ��ѯ������:\n");
//	int num;
//	scanf("%d",&num);
//	//int l = sizeof(int) ;
//	//printf("%d", sizeof(int));
//	//���ң������±�
//	//����
//	//���鳤��
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

//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int Menu(){
//	int i;
//	printf("**************************\n");
//	printf("*          1.��ʼ        *\n");
//	printf("*          0.�˳�        *\n");
//	printf("**************************\n");
//	scanf("%d", &i);
//	while (i != 1 && i != 0){
//		printf("��������ȷ����\n");
//		scanf("%d", &i);
//	}
//	return i;
//}
//int PrtNum(){
//	int guess;
//	printf("������һ������(0��99)\n");
//	scanf("%d", &guess);
//	while (guess<0 || guess>99){
//		printf("�����뷶Χ�ڵ�����\n");
//		scanf("%d", &guess);
//	}
//	return guess;
//}
//void Guess(int x){
//	//��ӡ����
//	int num = PrtNum();
//	while (num != x){
//		if (num< x){
//			printf("��С��\n");
//		}
//		if (num>x){
//			printf("�´���\n");
//		}
//		num = PrtNum();
//	}
//	printf("�¶���!\n");
//}
//int main(){//������
//	//���� ���� �˳��˵�
//	int i = Menu();
//	int target;
//	srand((unsigned)time(NULL));
//	while(i==1){
//		target = rand()%100;
//		//���������ж��Ǵ��˻���С��
//		Guess(target);
//		i = Menu();
//	}
//	printf("��Ϸ��������\n");
//	system("pause\n");
//	return 0;
//}