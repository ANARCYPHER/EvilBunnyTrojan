#include<stdio.h>
int main()
	{
		FILE *fp; // declaration of file pointer
		int x; // declaration of variable
        fp =fopen("file.txt", "w"); // opening of file
        if (!fp) // checking of error
			return 1;
        for (x=1; x<=10; x++)
        fprintf(fp,"%d\n", x); // giving conten
        fclose(fp); // closing of file
        return  0;
    }
