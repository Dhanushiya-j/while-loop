#include<stdio.h>
int main()
{
int classes,subjects,fail;
printf("which class your belong to:");
scanf("%d",&classes);
printf("no.of subjects failed");
scanf("%d",&fail);
switch(classes)
{
case 1:
if(fail>3)
printf("he do not get any grace mark");
else
printf("the grace mark for each subject is 5\n");
printf(" the total grace mark is:%d\n",5*fail);
break;
case 2:
if(fail>2)
printf("he do not get any grace mark");
else
printf("the grace mark for each subject is 4\n");
printf(" the total grace mark is:%d\n",4*fail);
break;
case 3:
if(fail>1)
printf("he do not get any grace mark");
else
printf("the grace mark for each subject is 5\n");
printf(" the total grace mark is:%d\n",5*fail);
break;
default:
printf("invalid");
}
return 0;
}
