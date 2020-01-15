#include<stdio.h>
int main()
{
	float a,b,c;
	printf("nhap a=");scanf("%f",&a);
	printf("nhap b=");scanf("%f",&b);
	printf("nhap c=");scanf("%f",&c);
	 if ((a+b>c)&&(a+c>b)&&(b+c>a)) 
        { 
            printf("day la 3 canh cua mot tam giac "); 
            if ((a==b)&&(b==c)) 
				printf("deu "); 
            else  
            { 
                if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a)) 
					printf("vuong "); 
                if ((a==b)||(b==c)||(c==a)) 
				{
					printf("can ");
				} 
            } 

        } 
        else 
			printf("day ko phai la 3 canh cua tam giac"); 
}  

