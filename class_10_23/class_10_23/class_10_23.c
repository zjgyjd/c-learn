////1.
////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
////Aѡ��˵��B�ڶ����ҵ�����Bѡ��˵���ҵڶ���E���ģ�Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	//��ÿ��仰����д��
//	int asays[2] = { 2, 3 };
//	int bsays[2] = { 2, 4 };
//	int csays[2] = { 1, 2 };
//	int dsays[2] = { 5, 3 };
//	int esays[2] = { 4, 1 };
//	//�����������
//	for (int a = 1; a <= 5; a++){
//		for (int b = 1; b <= 5; b++){
//			for (int c = 1; c <= 5; c++){
//				for (int d = 1; d <= 5; d++){
//					for (int e = 1; e <= 5; e++){
//						if (((b == asays[0]) + (a == asays[1]))==1 &&
//							((b == bsays[0]) + (e == bsays[1]))==1 &&
//							((c == csays[0]) + (d == csays[1]))==1 &&
//							((c == dsays[0]) + (d == dsays[1]))==1 &&
//							((e == esays[0]) + (a == esays[1]))==1){
//						//������һ��ʱ����ѭ��
//							if (a*b*c*d*e == 120){
//								printf("A:%d B:%d C;%d D:%d E:%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
////���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include <stdio.h>
//#include <stdlib.h>
//int Iskiller(int n){
//	int a =(n==4);
//	int b =(n==3);
//	int c =(n==2);
//	int d =(n==1);
//	if (((a != 1) + (c == 1) + (d == 1) + (d != 1)) == 3){
//		//ֻ������˵�滰
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	//��������
//	int killer = 1;
//	//��A,B,C,D���γ�Ϊ������֤���
//	for (int name = 4; name > 0; name--){
//		//�ж�����
//		if (Iskiller(name)){
//			printf("%c������!!\n", 'E' - name);
//		}
//	}
//	system("pause");
//	return 0;
//}

////����Ļ�ϴ�ӡ������ǡ�
//#include <stdio.h>
//#include <stdlib.h>
//#define N 10
//void Trangle(int n){
//	int row;
//	int a[N][N+1] = { 0 };
//	for (row = 0; row < n; row++){
//		for (int col = 0; col < row + 1; col++){
//			if (col == row||col==0){
//				a[row][col] = 1;
//			}
//			else
//			{
//				a[row][col] = a[row - 1][col - 1] + a[row-1][col];
//			}
//			
//		}
//		for (int col = 0; col < row + 1; col++){
//			printf("%d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	//�������һ�е�����
//	Trangle(N);
//	system("pause");
//	return 0;
//}

//�汾����һ��
//�Ի����з���,
//b!=2 && a=3 || b=2 && a!=3//˵��A˵��һ��
////ͬ��
//�ڶ���
//ͬ��������Ի�
//#include <stdio.h>
//#include <stdlib.h>
//void predict_killer(){
//	char killer = '0';
//	for (killer = 'A'; killer < 'D'; killer++){
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
//			== 3){
//			printf("������%c\n", killer);
//			break;
//		}
//
//	}
//}
//int main(){
//	predict_killer();
//	system("pause");
//	return 0;
//}

//���������������
