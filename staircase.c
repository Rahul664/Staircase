#include <math.h>
#include <stdio.h>

int main(){
    int a=1,b,c,d,i,r,j,n; 
    scanf("%d",&n);
	b=n-1;
	for(r=0;r<n;r++)
	{
		d=b;
		for(i=0;i<d;i++)
		{
			printf(" ");
		}
		for(j=0;j<a;j++)
		{
			printf("#");
		}
		printf("\n");
		b--;
		a++;
		
	}
    return 0;
    
}
