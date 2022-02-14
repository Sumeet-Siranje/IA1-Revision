#include<stdio.h>
int input(){
  int a;
printf("enter the three number\n");
scanf("%d",&a);
return a;
}
int cmp(int a,int b,int c){
  int large=0;
  if(a>b){
    if(a>c)
    large=a;
    else
    large=0;
  }
  else{
    if(b>c)
    large=b;
    else
    large=c;
  }
  return large;
}
void output(int p){
  printf("the largest is %d\n",p);

}
int main(){
  int n1,n2,n3,n4;
  n1=input();
  n2=input();
  n3=input();
n4=cmp(n1,n2,n3);
output(n4);
return 0;
}