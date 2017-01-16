#include <stdio.h>
#include <string.h>
unsigned long hashcode = 0x21DD09EC;
unsigned long check_password(const char* p){
        int* ip = (int*)p;
        int i;
        int res=0;
        for(i=0; i<5; i++){
                printf("res is %d\n", res);
                res += ip[i];
                printf("%d\n", ip[i]);
                printf("%c\n", p[i]);
                printf("res is now %d\n", res);
        }
        return res;
}
unsigned long printchar(const char* p){
 printf("the char is %c", p[0]);
 printf("the char's int val is %d\n", p[0]);
 printf("the char's next int val is %d\n", p[1]);
 }
unsigned long printcharasint(const char* p){
 int* ip = (int*) p; 
 int i;

 printf("the char is %c", ip[0]);
 printf("the char's int val is %d\n", ip[0]);
 printf("the char's next int val is %d\n", ip[1]);
 }

int main(int argc, char* argv[]){
        /*
        unsigned long pass;
        if(argc<2){
                printf("usage : %s [passcode]\n", argv[0]);
                return 0;
        }
        /*if(strlen(argv[1]) != 20){
                printf("passcode length should be 20 bytes\n");
                return 0;
        } */
/*
        pass = check_password( argv[1] );
        if(hashcode == pass ){
                system("/bin/cat flag");
                return 0;
        }
        else {
                printf("wrong passcode.\n");
								printf("it was %ld \n", hashcode);
								printf("you entered %ld \n", pass);
				}
        return 0;
*/			
  printcharasint(argv[1]);
}

