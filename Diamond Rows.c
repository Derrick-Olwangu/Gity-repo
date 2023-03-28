#include <stdio.h>
#include <time.h>
int main(int argc, char** argv)
{
	int i,j,rows;
	printf("Enter Diamond Rows = ");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++){
      	for(j=1;j<=rows-1;j++);
		  {		
			printf(" ");
	}
	for(j=1;j<=i*2-1;j++){
		printf("*");
	}
	printf("\n");
	}
      for(i=rows-1;i>0;i--){
	     for(j=1;j<=rows-i;j++){
		printf(" ");
	}
	for(j=1;j<=i*2-1;j++){
		printf("*");
	}
	printf("\n");
}
	return 0;
}
