#include<stdlib.h>
#include<stdio.h>
int main()
{
    int left,right,temp;
    scanf("%d",&left);
    scanf("%d",&right);
    for(int i=left;left<=right;left++)
    {
        temp=left;
        if(temp %2 !=0)
        {
            printf("%d\n",temp);
        }
    }
}

