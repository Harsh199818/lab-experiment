#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100][100] ; char temp[100] ; char item[100] ;
    int n ,i,j,beg,end,name,loc=0,mid;
    printf("Enter the no of names you want: ");
    scanf("%d",&n) ;
    for(i=0;i<n+1;i++)
        gets(s[i]) ;

    printf("Enter the name you want to search: ");
    gets(item) ;
    for(i=0; i<=n-1 ;i++)
    {
        for(j=i+1; j<=n ; j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(i=0;i<=n;i++)
       puts(s[i]);
       // printf("%s\n",s[i]) ;

    beg = 0 ; end = n-1 ;
    mid = (beg + end)/2 ;
    while(beg<=end && (strcmp(item,s[mid])!=0))
    {
        if(strcmp(item,s[mid])>0)
            beg = mid+1;
        else
            end = mid - 1;
        mid = (beg + end)/2 ;
    }
    if(strcmp(item,s[mid])==0)
        loc = mid ;
    if(loc == 0)
        {
            printf("\nElement not found\n");
        }
    else
        printf("\nLocation = %d",loc) ;
}
