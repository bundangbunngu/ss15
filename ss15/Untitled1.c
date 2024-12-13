#include <stdio.h>
#include <string.h>
int main(){
	char text[]= "Hello my gmail is test123@gmail.com";
	int size = strlen(text);
	int countAlpha = 0;
	int countDigit = 0;
	int countElse = 0;
	for(int i = 0; i< size; i++){
		if(isalpha(text[i])){
			countAlpha++;
		} else if(isdigit(text[i])){
			countDigit++;
		} else{
			countElse++;
		}
	}
	printf("So ky tu la chu cai: %d\n",countAlpha);
	printf("So ky tu la chu so: %d\n",countDigit);
	printf("So ky tu dac biet: %d\n",countElse);
}


