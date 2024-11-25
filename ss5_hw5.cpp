#include <stdio.h>



    int main (){
 	//vong lap tu 1 den 9
	for (int n = 1;n <= 9; n++){
	printf ("bang cuu chuong cua %d : \n",n);
	
	//vong lap in bang cuu chuong cua so hien tai 
	for ( int i = 1; i<= 10 ;i++) {
	printf ("%d x %d =%d\n",n,i,n*i); 
	printf ("\n"); 
	} 
	}  
	return 0; 
 } 
