#include <stdio.h>
char tree[1000000][40];
int main()
{
        int a;
        scanf("%d\n\n",&a);
        for (int i=1;i<=a;i++){
            int ans=0;
            while( gets (tree[ans]) ){
                if (tree[ans][0]==0)break;
                ans++
            }
            if(i>1)printf("\n");
            printf("Test Case %d: %d liens\n",i,ans);

        }
    return 0;
}
