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
    fscanf(fin,"%d",&t);///Ū��
    printf("�AŪ��Ft: %d\n",t);
    ///std::map< �r��,��� > �i�H��r��,map����ans
    std::map< std::string,int > table;
    while( fgets(line,100,fin) ){
        line[ strlen(line)-1 ]=0;
        printf("Ū��F= %s =\n",line);///���B�z
        table [line]++;
    }
}

