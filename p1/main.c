#include <stdio.h>

int main(void)
{
    int ans, guess;
    int cnt = 0;
    
    scanf("%d", &ans);
    
    do{
        scanf("%d", &guess);
        cnt+=1;
        if(guess > ans){
            printf("%d>?\n", guess);
        } else if (guess < ans){
            printf("%d<?\n", guess);
        } else{
            printf("%d==?\n", guess);
        }
    } while (guess != ans);
    printf("%d", cnt);

    return 0;
}
