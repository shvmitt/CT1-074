#include<stdio.h>
int main()    
{    
int num,t,sum=0,arms;    
printf("Enter the number - ");    
scanf("%d",&num);    
arms=num;    
while(num>0){    
t=num%10;    
sum=sum+(t*t*t);    
num=num/10;    
}    
if(arms==sum){    
printf("Yes it is an armstrong  number.");    
}else{    
printf("No its not an armstrong number.");
}    
return 0;  
}   