#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sig)
{
	switch (sig)
	{
		case SIGINT: fprintf(stdout, "Emergency! User death imminent\n"); break;
		default:;
	}
}

int main(int argc, char* argv[]) {
	int number_of_megabytes = atoi(argv[1]);

	signal(SIGINT, handler);

	int *p;
	while(1) {
		int inc = number_of_megabytes* 1024 * 1024 * sizeof(char);
		p=(int*) malloc(inc);
        	if (!p) break;
    }
}