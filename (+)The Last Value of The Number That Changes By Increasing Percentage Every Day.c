#include<stdio.h>

main(){
  int again;
  float n1,n2,plus;

   printf("Please Enter The Money : ");    // Here "The money" is what you are using cash for the beginning.
   scanf("%f",&n1);
   printf("Please Enter The Count Of Day For Uptrend : ");   // Here you enter how many days you want to use in the calculation.
   scanf("%d",&again);
   printf("How Many Plus Do You Want It To Rise Every Day : ");  // Here you enter the percentage you want to earn daily.
   scanf("%f",&plus);
  for(int i=0;i<again;i++)
  {
      n2=n1*(100+plus)/100;
      n1=n2;
  }
printf("You Will Have %.2f Money After %d Days",n2,again);
    return 0;
}
