#include <stdio.h>

int main()
{
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
    return 0;
}

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
}

