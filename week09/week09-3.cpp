#include <stdio.h>
int grade[10]={9,8,1,2,3,4,5,6,7,0};
int main()
{
    int N=10;
    while(1){///for(int k=0;k<10;k++){
        int change=0;
        for(int i=0;i<9;i++){
                if(grade[i]>grade[i+1]){
                    int t=grade[i];
                    grade[i]=grade[i+1];
                    grade[i+1]=t;
                    change++;
                }
        }
        if(change==0) break;
        for(int i=0;i<N;i++){
            printf("%d ",grade[i]);
        }
        printf("\n");

    }

}


