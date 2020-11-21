#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"


//요 함수 뭔가 필요할 것 같아서요! for문 대신에 while문으로 바꿨습니다!
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

		//시작화면
		printf("===========================================================\n");
		printf("*Minkyeong 도서관*\n");
		printf("\n");
		printf("1.대여 시스템 시작\n");
		printf("2. 학생 추가\n");
		printf("3. 도서 추가\n");
		printf("4. 종료\n");
		printf("===========================================================\n");
		printf("원하는 시스템의 번호를 입력하시오 : ");
		scanf("%d", &cho);

		switch (cho) {
		case 1:
			break;
		case 2:
			printf("=========================================================\n");
			printf("추가할 학생의 학번과 이름을 입력하세요(이름 쓰고 한번 띄어쓰기 후 학번입력) :\n ");
			scanf("%s %d", &input_name, &id);
			insert_student(input_name, id);
			printf("학생 정보가 저장되었습니다.\n");
			
			break;

		case 3:
			break;

		case 4:

			return 0;

		     
		default:
			
			break;
		}
	}
	/* 1. 대여 시스템 시작 => 이름과 학번을 입력하세요(이름 쓰고 한번 띄어쓰기 후 학번입력) 
	=> 학생이 대여한 책 목록 띄우기 
	   2. 학생 추가 => 추가할 학생의 이름과 학번을 입력하세요(이름 쓰고 한번 띄어쓰기 후 학번입력)  */


	



	

}