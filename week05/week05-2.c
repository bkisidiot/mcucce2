#include <stdio.h>
int a[10]={0,2,4,6,8,1,3,5,7};

int main(){

        for(int i=0;i<9;i++){
            if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d",a[i]);
    printf("\n");
    }
    return 0;
}
