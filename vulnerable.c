#include<stdio.h>

int main(int argc, char **argv)
{
	char buf[10];

	FILE *fin = fopen (argv[1], "r");
	if (fin)
	{
		fscanf (fin, "%s", &buf);
		printf ("%s\n", buf);
	}

	return 0;
}
