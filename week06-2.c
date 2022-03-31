#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];
int compare (const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);

}
int main()
{
        int a;
        scanf("%d\n\n",&a);
        for (int i=1;i<=a;i++){
            int ans=0;
            while( gets (tree[ans]) ){
                if (tree[ans][0]==0)break;
                ans++;
            }
            if(i>1)printf("\n");
            qsort(tree, ans,	40,compare );

           for(int i=0;i<ans;i++){
           		printf("%s\n",tree[i]);
             }
          }
    return 0;
}

