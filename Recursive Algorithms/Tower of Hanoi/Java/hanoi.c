#include <stdio.h>

/*
tower of n levels
'o' is the beginning
'd' is the destination
'a' is the auxiliary
*/
void hanoi (int n, char o, char d, char a);

int main (){
	unsigned char n;
	
	printf("Enter the tower level:\n");
	scanf ("%d",&n);
	
	hanoi (n,'O','D','A');
	
	return 0;
}

void hanoi (char n, char o, char d, char a){
	if (n==0) return;
	
	hanoi (n-1, o, a, d);
	
	printf ("(%c,%c)\n",o,d);
	
	hanoi (n-1,a,d,o);
	
	return;
}
