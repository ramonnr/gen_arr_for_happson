

#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv){
	FILE* f = fopen("generated.txt","w+");
	
	fprintf(f,"{");

	for(int j=0; j<16; j++){		
		for(int i = j; i < 144; i+=48){
			fprintf(f,"{%d,%d,%d},\n",i,i+16,i+32);
		}
	}
	fprintf(f,"};");
	
}
