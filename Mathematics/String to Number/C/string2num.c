#include <stdio.h>

/*
Converts a string in any base between 1 and 36 to an int
*/
int string2num(char *s, unsigned char base) {
	int a = 0;
	for ( ; *s; s++){

	if(*s>='a' && *s<='z') //for bases above 10 we use letters
		a = a*base + (*s-'a'+10);
	else if (*s>='A' && *s<='Z') //higher case work as well
		a = a*base + (*s-'A'+10);
	else
		a = a*base + (*s-'0');
	}
	
	return a;
}

int main () {
  
	printf("%d\n", string2num("777", 8));
	printf("%d\n", string2num("777", 10));

	printf("%d\n", string2num("1a", 16));
	printf("%d\n", string2num("a09b", 16));
	printf("%d\n", string2num("k09b", 36));

  return 0;
}
