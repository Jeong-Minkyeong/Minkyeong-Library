#include "student.h"

 void insert_student(char* input_name,int ID ){

	 struct Student s[3]; //일단을 3명만 ㅎㅎ

	 strcpy(s[0].name, input_name); // input_name은 문자열이라서 strcpy 사용
	 s[0].student_ID = ID;

	// printf("%s %d\n", s[0].name, s[0].student_ID); 잘 저장됬는지 확인용

	

}
 