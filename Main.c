// 문제 : 변수를 만들고 3.14를 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

#include "stdio.h"


int main(void) {
	int i = 3.14;

	printf("1st 시도 => i : %d\n", i); // 실패 => i 에는 오직 정수만 들어간다.

	float f = 3.14;

	printf("2nd 시도 => f : %d\n", f); // 실패 => `%d`는 데이터를 `int 로 해석하겠다.`라는 뜻 입니다.

	// 여기서 구현

	return 0;
}