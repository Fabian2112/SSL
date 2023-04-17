

#include <stdio.h>
#include <stdlib.h>


main(){
	
	FILE *f = fopen("output.txt", "wb+");
	
	char a[]="\nHello World";
	
	fwrite (&a, sizeof(a),1, f);
	
	printf(a);
		
	fclose(f);
	
return 0;
}

