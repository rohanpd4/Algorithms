#include<stdio.h>  

int main()  

{      

int i,j,n,time,rem,temp=0,quantum;  

int wt=0,tat=0,at[10],bt[10],rem_bt[10],p[10];

printf("Enter Total Process:\t ");  

scanf("%d",&n);  

 

rem=n;  

 

printf("\nEnter Burst Time:\n");  

for(i=0;i<n;i++)  

{  

printf("p%d:",i+1);  

scanf("%d",&bt[i]);  

p[i]=i+1;

rem_bt[i]=bt[i];  

}  

 

printf("\nEnter Arrival Time:\n");

for(i=0;i<n;i++)  

{  

printf("p%d:",i+1);  

scanf("%d",&at[i]);  

p[i]=i+1;  

}  

 

 

printf("Enter Time Quantum:\t");  

scanf("%d",&quantum);  

 

printf("\nProcess\t Burst Time \t Arrival Time \tWaiting Time\tTurnaround Time\t Completion Time\n\n");  

 

for(time=0,i=0;rem!=0;)  

{  

if(rem_bt[i]<=quantum && rem_bt[i]>0)  

{  

time = time + rem_bt[i]; rem_bt[i]=0;  

temp=1;  

}  

 

else if(rem_bt[i]>0)  

{  

rem_bt[i] -= quantum;  

time = time + quantum;  

}  

 

if(rem_bt[i]==0 && temp==1)  

 

{  

 

rem--;  

 

printf("P[%d]\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|  %d\n",i+1,bt[i],at[i],time-bt[i],time-at[i],time); wt += time-at[i]-bt[i]; tat += time-at[i];  

temp=0;  

}  

 

if(i==n-1) i=0;  

else if(at[i+1]<=time) i++; else  

i=0;  

 

}  

 

printf("\nAverage Waiting Time= %f\n",wt*1.0/n);  

 

printf("Average Turnaround Time = %f",tat*1.0/n);  

 

return 0;  

}  

























