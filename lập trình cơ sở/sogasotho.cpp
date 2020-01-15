#include <stdio.h>
int main()
{
 	int tho,ga;
	for(tho=1;tho<=25;tho++)
		for(ga=1;ga<=43;ga++)
			if(ga+tho==43&&ga*2+tho*4==100)
				printf("so ga %d so tho %d ",ga,tho);        
}
