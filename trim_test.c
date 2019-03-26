#include <stdio.h>

/*
 * trim 함수와 trim_r 함수를 완성 하시오.
 * trim 은 앞/뒤의 공백 문자를 제거 합니다.
 *
 * trim 함수 작성에 따라 main 함수에서 call 하는 부분도
 * 코드 변경이 발생할 수 있는 점 참고 하세요.
 * (main 함수도 완성된 것이 아니라는 의미입니다.)
 *
 * memory 할당/해제에도 주의 하십시오.
 */

char * trim () {
}


void trim_r () {
}

int main (void) {
	char * strs = "  \t 가나다\t   \t";
	char * ret1;
	char * ret2;

	ret1 = trim(strs);
	printf ("==%s==\n", ret1);

	ret2 = strdup (strs);
	trim_r (ret2);
	printf ("==%s==\n", ret2);
	free (ret2);

	return 0
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: ai et sw=4 ts=4 fdm=marker
 * vim<600: ai et sw=4 ts=4
 */
