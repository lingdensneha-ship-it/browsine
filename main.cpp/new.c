#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int division(int a,int b){
    return a/b;
}
int product(int a,int b){
    return a*b;
}
int main(){
    int a;
    int b;
    int option;
printf("enter any number");
scanf("%d%d",&a,&b);
printf("enter any option(1-add,2-subtract,3-division,4-product,5-exit)");
scanf("%d",&option);




switch(option){
case 1:printf("add %d\n",add(a,b));
break;
case 2:printf("subtract %d\n ",subtract(a,b));
break;
case 3:
if(b!=0){
printf("division %d\n ",division(a,b));}
else{
printf("cannot divisible by zero\n");}
break;
case 4:printf("product %d\n",product(a,b));
break;
case 5:printf("exit \n");
break;
default:printf("error\n");
break;

}
}
