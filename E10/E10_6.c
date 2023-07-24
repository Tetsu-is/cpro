#include <stdio.h>

int max2(int a, int b)
{
	int max = 0;
	if(a>=b)
	{
		max = a;
	}
	if(b>a)
	{
		max = b;
	}
	return max;	
}

int max4( int a, int b, int c, int d ){
    return max2(max2(a,b), max2(c,d));
}

int min2(int a, int b)
{
    int min = 0;
    if(a<=b)
    {
        min = a;
    }
    if(b<a)
    {
        min = b;
    }
    return min;	
}

int min4( int a, int b, int c, int d ){
    return min2(min2(a,b), min2(c,d));
}

int main(void)
{	
	int a,b,c,d;
    int p,q;
    int pattern = 0;
	scanf("%d %d", &p, &q);
    for(a=p; a<=q; a++)
    {
        for(b=p; b<=q; b++)
        {
            for(c=p; c<=q; c++)
            {
                for(d=p; d<=q; d++)
                {
                    if(p == min4(a,b,c,d) && q == max4(a,b,c,d))
                    {
                        printf("(%d, %d, %d, %d)\n",a,b,c,d);
                        pattern++;
                    }
                    
                }
            }
        }
    } 
    printf("%d通り\n",pattern);
    return 0;
}