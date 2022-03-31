#include <stdio.h>
#include <stdlib.h>//is qsort
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

            printf ("%s ",tree[0]);
            int combo=1;
           for(int i=1;i<ans;i++){
           		if (strcmp(tree[i-1],tree[i])==0){
           			combo++;
           			}
           			else{
           				printf("%.4f\n",combo*100.0/ans);
           				printf("%s ",tree[i]);
           				combo=1;
           			}

             }
             printf("%.4f\n",combo*100.0/ans);
          }
    return 0;
}



