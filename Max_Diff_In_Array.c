#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>

int maxDifference(int a_size,int* a)
{
int diff=a[1]-a[0],i,j;
	for(i=0,j=0;i<a_size,j<a_size;i++,j++)
	{
		if(a[j]-a[i]>diff)
		{
		diff=a[j]-a[i];
		}	
	}
return diff;
}
int main()
{
FILE *f=stdout;
char* output_path=getenv("OUTPUT_PATH");
	if(output_path)
	{
	f=fopen(output_path,"w");
	}
int res;
int a_size=0;
scanf("%d",%a_size);
int a[a_size];
	for(int i=0;i<a_size;i++)
	{
	int a_item;
	scanf("%d",&a_item);
	a[i]=a_item;
	}
res=maxDifference(a_size,a);
fprintf(f,"%d",res);
fclose(f);
return 0;
}	