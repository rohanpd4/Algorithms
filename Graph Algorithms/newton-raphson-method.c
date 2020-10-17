#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    3*x - cos(x) -1
#define   g(x)   3 + sin(x)

void main()
{
	 float x0, x1, f0, f1, g0, e;
	 int step = 1, N;
	
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);
	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }

		
		  x1 = x0 - f0/g0;

		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>e);
	
	 printf("\nRoot is: %f", x1);
	 getch();
}

/* output 
Enter initial guess:
5
Enter tolerable error:
2
Enter maximum iteration:
5

Step            x0              f(x0)           x1              f(x1)
1               5.000000        13.716338       -1.720152       0.000000
2               -1.720152       -6.011654       1.269037        -6.011654
3               1.269037        2.509909        0.634390        2.509909

Root is: 0.634390
*/
