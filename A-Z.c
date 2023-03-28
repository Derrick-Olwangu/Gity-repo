#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%c",ch);
			if(ch<'Z')
            ch++;
       else
       	    ch='A';
		}
		printf("\n");
	}
	return 0;
}