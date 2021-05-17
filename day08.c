#include <stdio.h>

int main() {

	/*
		for문
		 - 반복문, 반복의 횟수가 정해져 있을 때 주로 사용

		 for ( 초기값; 조건식; 증감식; ) {
			반복시킬 코드
		 }

		 초기식 : for문의 실행 횟수를 확인하는 변수의 선언 및 시작값 설정
				  for문 시작과 동시에 한번만 실행
		 조건식 : for문의 반복이 종료될 조건
				  초기식에서 선언한 변수가 어떤 조건이 되면 반복을 종료할 것인지 작성
		 증감식 : 초기식에서 선언한 변수가 조건식까지 도달하기 위해 필요한 연산
	*/

	//for (int i = 0; i < 6; i++) {
	//	printf("%d\n", i);
	//}


	//int j = 0;
	//for (j; j < 6; j++) {
	//	printf("%d\n", j);
	//}

	//int n, sum = 0;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	sum += i;
	//}
	//printf("%d\n", sum);

	//int n;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &n);

	//for (int a = 1; a <= 50; a++) {

	//	if (a % n == 0) {
	//		printf("%d : %d의 배수이다\n", n,a);
	//	}
	//}

	//int n;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &n);

	//for (int i = 1; i <= 9; i++) {
	//	printf("%d x %d = %d\n", n, i, n * i);
	//	printf("\n");
	//}

	//int n;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &n);

	//for (int i = 0; i < n; i++) {
	//	printf("*");
	//}
	//int sum1 = 0, sum2 = 0;
	//for (int a = 1; a <= 50; a++) {
	//	if (a % 3 == 0 && a % 7 == 0) {
	//		printf("%d : 3의 배수이면서 7의 배수이다\n", a);
	//		sum1 += a;
	//		sum2 += a;
	//	}else if (a % 3 == 0) {
	//		printf("%d : 3의 배수이다\n", a);
	//		sum1 += a;
	//	}else if (a % 7 == 0) {
	//		printf("%d : 7의 배수이다\n", a);
	//		sum2 += a;
	//	}
	//}
	//printf("\n3의 배수들의 합은 %d이다\n", sum1);
	//printf("\n7의 배수들의 합은 %d이다\n", sum2);


	//int sum1 = 0, sum2 = 0;
	//for (int a = 1; a <= 50; a++) {
	//	if (a % 3 == 0 && a % 7 == 0) {
	//		printf("%d : 3의 배수이면서 7의 배수이다\n", a);
	//		sum1 += a;
	//		sum2 += a;
	//	}
	//}
	//for (int a = 1; a <= 50; a++) {
	//	if (a % 7 == 0 && a % 3!= 0) {
	//		printf("%d : 3과7의 공배수가 7의 배수이다\n", a);
	//		sum2 += a;
	//	}
	//}
	//for (int a = 1; a <= 50; a++) {
	//	if (a % 3 == 0 && a % 7 != 0) {
	//		printf("%d : 3과7의 공배수가 아닌 3의 배수이다\n", a);
	//		sum1 += a;
	//	}
	//}
;
	for (int i = 65; i <= 90; i++) {
		printf("%c ", i);
	}

}