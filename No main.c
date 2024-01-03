#include<stdio.h>
#define hello(s,t,m,p) s##t##m##p
#define anim hello(m,a,i,n)
int anim(){
printf("Hello World");
}
