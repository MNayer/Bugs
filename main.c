#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void overflow(void)
{
	uint8_t buf[10] = { 0 };
	char str[] = "Das ist ein sehr langer String.";
	int i = 0;
	memcpy(buf, str, sizeof(str));
}

int main(int argc, char* argv[])
{
	overflow();
	return 0;
}

