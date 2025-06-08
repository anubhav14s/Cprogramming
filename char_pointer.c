#include <stdio.h>
int main(){
    char alpha ='a';
    char *ptr=&alpha;
    printf("The address of the give char is %u\n",ptr);
    printf("The address of the give char is %u\n",&alpha);
    printf("%c\n",alpha);
    printf("%c\n",*ptr);
    printf("%c\n",*(&alpha));
    return 0;
}