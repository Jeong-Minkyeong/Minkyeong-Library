#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"


//�� �Լ� ���� �ʿ��� �� ���Ƽ���! for�� ��ſ� while������ �ٲ���ϴ�!
char* strcpy(char* dest, char* src) {
	int i = 0;
	while (src[i] != '\0') {

		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main() {

	int cho;
	char input_name[10];
	int id;

	while (1)
	{

		//����ȭ��
		printf("===========================================================\n");
		printf("*Minkyeong ������*\n");
		printf("\n");
		printf("1.�뿩 �ý��� ����\n");
		printf("2. �л� �߰�\n");
		printf("3. ���� �߰�\n");
		printf("4. ����\n");
		printf("===========================================================\n");
		printf("���ϴ� �ý����� ��ȣ�� �Է��Ͻÿ� : ");
		scanf("%d", &cho);

		switch (cho) {
		case 1:
			break;
		case 2:
			printf("=========================================================\n");
			printf("�߰��� �л��� �й��� �̸��� �Է��ϼ���(�̸� ���� �ѹ� ���� �� �й��Է�) :\n ");
			scanf("%s %d", &input_name, &id);
			insert_student(input_name, id);
			printf("�л� ������ ����Ǿ����ϴ�.\n");
			
			break;

		case 3:
			break;

		case 4:

			return 0;

		     
		default:
			
			break;
		}
	}
	/* 1. �뿩 �ý��� ���� => �̸��� �й��� �Է��ϼ���(�̸� ���� �ѹ� ���� �� �й��Է�) 
	=> �л��� �뿩�� å ��� ���� 
	   2. �л� �߰� => �߰��� �л��� �̸��� �й��� �Է��ϼ���(�̸� ���� �ѹ� ���� �� �й��Է�)  */


	



	

}