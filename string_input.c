#include <stdio.h>
int main() {
    char str[]={'A','N','U','B','H','A','V','\0'};
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
    return 0;
}