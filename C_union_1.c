#include <stdio.h>

union name {
	char a;
	int b;
};

int main(void)
{
	printf("%d\n", sizeof(union name)); //union name 안에 있는 가장 큰 자료형의 크기인 4가 출력된다.(int형이 4바이트!)
	
	return 0;
}