#include <stdio.h>

  int main()
{
	float A;
	char e;
	scanf("%f",&A);
  while(getchar()!= '\n') e = getchar();
 if ((e!='C') && (e!='F') && (e!='K'))
 {
   printf("%.2f%c%c\n",A,' ','C');
   printf("%.2f%c%c\n",5*(A-32)/9,' ','F');
   printf("%.2f%c%c\n",A+273.15,' ','K');
 }
 if (e=='F')
 { 
   printf("%.2f%c%c\n",(A-32)*5/9,' ','C'); 
   printf("%.2f%c%c\n",((A-32)*5/9)+273.15,' ','K');
 }
 if (e=='K')
 {
 	printf("%.2f%c%c\n",A-273.15,' ','C');
    printf("%.2f%c%c\n",((A-273.15)*9/5)+32,' ','F');
 }
 return 0;
}
