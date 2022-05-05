#include <stdio.h>
#include <string.h>
///#include <vector>
#include <map>
#include <string>
char line[100];
int main()
{

    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);///讀檔
    printf("你讀到了t: %d\n",t);
    ///std::map< 字串,整數 > 可以把字串,map對應ans
    std::map< std::string,int > table;
    while( fgets(line,100,fin) ){
        line[ strlen(line)-1 ]=0;
        printf("讀到了= %s =\n",line);///做處理
        table [line]++;
    }
}


