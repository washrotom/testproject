#include <stdio.h>

void inp(char * input)
{
	printf("%s 를 넣는다.\n", input);
}

void boil(int time)
{
	int min = time/60;
	int sec = time%60;

	printf("\n (%d 분 %d 초 동안 끓인다.)\n\n", min, sec);
//	sleep(2000);
}

void eat()
{
	printf("\n\n 라면이 완성되었습니다! 맛있게 드세요~~\n");
}

int main(void)
{
	printf("-- 나도 코딩의 라면 끓이기 --\n\n");
	inp("물 550ml");
	boil(60);
}

