#include <stdio.h>
#include <stdlib.h>

int factorial (int x){
if (x==1){
return 1;
}
else{
return x*factorial(x-1);
}

}

int countdown (int y){
printf("%d\n",y);
if (y<=0){
    return 0;
}
else {
    countdown(y-1);
}

}
int main (){
int n=5;
printf("the factorial =%d \n",factorial(n));
countdown(n);
}
void greet (char *name){
    printf("hello %s",name);
    greet2(name);
    printf("“getting ready to say bye...");
    }
    void greet2(char *name){
    printf("how are you %s \n",name);
    }
    void bye(){
    printf("ok bye \n");
    }