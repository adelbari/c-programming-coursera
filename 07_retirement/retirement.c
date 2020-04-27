#include <stdio.h>
#include <stdlib.h>
   struct _retire_info {
   int months;
     double contribution,rate_of_return;};
    typedef struct _retire_info  retire_info;
void retirement (int startAge,   //in months
		 double initial, //initial savings in dollars
		 retire_info working, //info about working
		 retire_info retired) //info about being retired
{double mandeh=initial;
  for(int i=0;i<working.months+retired.months;i++){  
    printf("Age %3d month %2d you have $%.2lf\n",(startAge+i)/12,(startAge+i)%12,mandeh);
    if(i<working.months)
      mandeh=mandeh+(mandeh*working.rate_of_return)+working.contribution;
    else
      mandeh=mandeh+(mandeh*retired.rate_of_return)+retired.contribution;
  }
}
int main(void)
{
  retire_info working,retired;
  working.months=489;
  working.contribution=1000;
  working.rate_of_return=0.045/12;
  retired.months=384;
  retired.contribution=-4000;
  retired.rate_of_return=0.01/12;
  retirement(327,21345,working,retired);
  return EXIT_SUCCESS;
}
