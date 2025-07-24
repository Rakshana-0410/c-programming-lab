#include<stdio.h>
//Function for call by value_type
void swapValue(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
printf("Inside swapValue -a: %d, b:%d\n",a,b);
}


//Function for call reference
void swapRef(int *a,int *b){
int temp;
temp =*a;
*a =*?b;
*b =temp;
//Swaps actual varibles using pointers
}

int main(){
int x,y;
printf("enter two numbers:");
scanf("%d %d",&x, &y);
//call-by-value:values won't actually swap in main
swapValue(x,y);
printf("After swapValue (call-by-value): x:%d,y:%d\n",x,y);
//call-by-referece: values will swap in main
swapRef(&x, &y);
printf("After swapRef (call-by-reference):x:%d,y:%d\n",x,y);
return 0;
}
