#include <stdio.h>
int add(int x,int y){
return x + y;
}
int main(){
float result = add(3,4); //returning int but storing in float
printf("%f",result);
return 0;
}