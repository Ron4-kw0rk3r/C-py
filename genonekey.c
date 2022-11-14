#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

#define N 17


void funckey()  {


	//const  char pool[] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	const  char pool[] = "ABCDEF0123456789";
	int poolsize = sizeof(pool)-1;


	// build key in file 

	char  name[N][5];
	srand(time(0));
	int i , j ; 
	for (i = 0 ; i < N ; i++ ) {
		for ( j = 0 ; j < 5 ; j++) {
			if (j <= 3 ) {

				name[i][j]=pool[(rand()%poolsize+0)]; //assing ramdom number

			
			} 
			else {

				name[i][j]='\0';
			}
			
		}
	}
	
	// print ramdom string 


	for ( i = 0 ; i < N ; i++) {
		printf("%s ",name[i]);	
		if  ( i == 5  || i == 10 || i == 18 || i == 28 ) {
			printf("\xA");
		} 

		
	}
	printf("\xA");
}


int main(void) {
	funckey();
	return 0 ;
}
