#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j, rows;
	printf("Enter the number of rows\n");
	scanf("%d", &rows);
	 for(i=rows/2; i<=rows;i+=2){
		 for(j=1;j<rows-1; j+=2){
			 printf(" ");
		 }
		 for(j=1;j<=i;j++){
			 printf("*");
		 }
		 for(j=1;j<=rows-1;j++){
			 printf(" ");
		 }
		 for(j=1;j<=i;j++){
			 printf("*");
		 }
		 printf("\n");
	 }
	 for(i=rows;i>=1;i--){
		 for(j=i;j<rows;j++){
			 printf(" ");
		 }
		 for(j=1;j<=(i*2)-1;j++){
			 printf("*");
		 }
		 printf("\n");
	 }
	return 0;
}