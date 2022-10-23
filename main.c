#include <stdio.h>
int set(int , int );
int clear(int ,int );
int main()
{
    int x,s,c,n;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("Enter the bit you want to set : ");
    scanf("%d",&s);
    printf("Enter the bit you want to clear : ");
    scanf("%d",&c);
    n=set(x,s);
    printf("The result = %d",clear(n,c));
    return 0;
}
int set(int x,int s)
{
   return x|(1<<s);
}
int clear(int n,int c)
{
    return n&(~(1<<c));
}
