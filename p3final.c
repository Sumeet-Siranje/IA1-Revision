#include<stdio.h>
int input(){
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int sum(int n){
  int ans=0;
  for(int i=1;i<=n;i++){
    ans=ans+i;
  }
  return ans;
}
void output(int n ,int sum){
  for(int i=0;i<=n;i++){
    printf("%d",i);
  }
  printf("%d is %d",n,sum);
}
int main(){
  int n1,n2;
  n1=input();
 n2=sum(n1);
 output(n1,n2);
 return 0;
}