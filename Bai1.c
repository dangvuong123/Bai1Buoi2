#include <stdio.h>
int main(void){
    // Your code here!
    int n;
    scanf("%d", &n);
    
    for(int i = 10; i < n; i++)
    {
        if (i % 7 == 0)
        printf("%d\t", i);
    }
    return 0;
}
