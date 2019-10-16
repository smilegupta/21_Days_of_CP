#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int a) 
{ 
    // Corner cases 
    if (a <= 1) 
        return 0; 
    if (a <= 3) 
        return 1; 
  
    // This is checked so that we can skip 
    // middle five nbers in below loop 
    if (a % 2 == 0 || a % 3 == 0) 
        return 0; 
  
    for (int i = 5; i * i <= a; i = i + 6) 
        if (a % i == 0 || a % (i + 2) == 0) 
            return 0; 
  
    return 1; 
} 
int main() {
 
    int t,temp=0;
    int a;
    scanf("%d",&t);
    for(a=0;t>=1;t--){
        scanf("%d",&a);
        if(isPrime(a) == 1){
            for(temp=0;a>=1;){
                temp=temp*10;
                temp =temp + a%10;
                a=a/10;
            }
            a=temp;
            if(isPrime(a)==1){
                printf("Yes");
            }
            else{printf("No");}
        }
        else{printf("No");}
        printf("\n");
    }
    return 0;
}
