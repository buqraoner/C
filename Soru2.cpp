#include <stdio.h>
#include <string.h>

int main(){
	char metin[]="";
	fprintf(stdout,"Kelime girin: ");
	gets(metin);
	
	fprintf(stdout,"%s\n", strrev(metin));
	
	
	return 0;

	
	
}



