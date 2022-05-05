#include <stdio.h>
char line[100];
int main()
{

    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("你讀到了t: %d\n",t);
    ///scanf() vs. gets()
    ///fscanf()vs. fgets()
    ///while( gets(line) ){
    while( fgets(line,100,fin)){
        printf("讀到了=%s=\n",line);///做處理
    }
}

