#include <stdio.h>

union name {
	char a;
	int b;
};

int main(void)
{
	printf("%d\n", sizeof(union name)); //union name �ȿ� �ִ� ���� ū �ڷ����� ũ���� 4�� ��µȴ�.(int���� 4����Ʈ!)
	
	return 0;
}