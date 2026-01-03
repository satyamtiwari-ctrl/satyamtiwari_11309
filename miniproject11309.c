#include<stdio.h>
int main (){
    int storedpassword =1234;
    int enteredpassword ;
    int maxattempts = 3;
    while(maxattempts > 0){
        printf("enter your password :");
        scanf("%d",&enteredpassword);
        if(enteredpassword == storedpassword){
            printf("access gramted\n");
            break;
        }else{
            maxattempts--;
            printf("wrong password\n");
            if(maxattempts > 0){
                printf("attempts left : %d\n",maxattempts);
            }
        }
    }if(maxattempts==0){
        printf("account locked\n");
    }
    return 0;
}