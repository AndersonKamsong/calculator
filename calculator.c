#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<anderconio.h>

struct cal {    //declaration of struction for variable and operator
   float i;
   char c;
};
float operation(float a,char b,float c){ //function to carry out the operation.
    float d;
    int i,x,y;
 switch(b){
  case '+':
      d=a+c;
      break;
  case '-':
    d=a-c;
    break;
  case '*':
    d=a*c;
    break;
  case '/':
    d= a/c;
    break;
  case '^':
    d=1;
    for(i=0;i<c;i++){
    d=d*a;
    }
    break;
  case '%':
    x=a;
    y=c;
    d= x % y;
    break;    
  default :
    break;
}
return d;
}
char test(char b){  //function to find operator is correct
int d=0;
    do{
    if((b == '+')||(b == '-')||(b == '*')||(b == '/')||(b == '=')||(b == '^')||(b == '%'))
                   d=1;
    else{
        d=0;
        printf("invalid operation Enter a new once:");
        scanf("%s",&b);
    }
    }while(d == 0);

return b;
}
void cover(){
  system("clear");
  printf("\033[33;44mWelcome to calulator                      #\n");
  sleep(1);
  printf("This program was created by:              #\n");
  sleep(1);
  printf("***********                               #\n");
  sleep(1);
  printf("***********                               #\n");
  sleep(1);
  printf("Kamsong Gaston Anderson                   #\n");
  sleep(1);
  printf("***********                               #\n");
  sleep(1);
  printf("***********                               #\n");
  sleep(1);
  printf("press a key to continue!                  #\n");
  printf("###########################################\n\033[0m");
  getch();
  system("clear");
}
int main(void){//main function
    int i=0,n;    //variable declaration
    float y,x=0,a;
    char b;
    struct cal A[100];
    cover();
    printf("Available Operator are: '+':addition ; '-':subtraction ; \n");
    printf("'*':muplication ; '/':division ; '%':module ; '^':power ; '=':result\n");
    do{
        printf("Enter a num:");
        scanf("%f",&A[i].i);
        printf("Enter an operator:");          //enter of variable
        scanf("%s",&A[i].c);         //enter of operator
    b=A[i].c;
    A[i].c=test(b);                   // test the operator
    i++;
    }while(b != '=');
     n=i;
     i=0;
    x=A[0].i;
    system("clear");
    printf("\n");
    system("clear");
    for(i=0;i<n;i++)
    printf(" %.2f %c",A[i].c,A[i].i);
    for(i=0;i<n;i++){
            a=A[i+1].i;
            b=A[i].c;
           y = operation(x,b,a);          //perform the operation
             x=y;
    }
    printf(" %.2f\n",x);   //Display the result

return 0;
}
