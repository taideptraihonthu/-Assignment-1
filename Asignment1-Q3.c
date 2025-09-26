#include <stdio.h>

int main(){
	int p,q,r;
	int dem;
	for (p=0;p<=1;p++)
	{
		for (q=0;q<=1;q++)
		{
			for (r=0;r<=1;r++)
			{
				int A = ((p||q)^r;);
				int p_kt_r = ((!p)||r);
				int B = ((p_kt_r)^q);
				
				if (A!=B) 
				{
					printf("%d %d %d \n",p,q,r);
				}
			}
		}
	}
}