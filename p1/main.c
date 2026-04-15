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
            printf("%d 보다 낮습니다\n", guess);
        } else if (guess < ans){
            printf("%d 보다 높습니다\n", guess);
        } else{
            printf("%d 정답입니다\n", guess);
        }
    } while (guess != ans);
    printf("시도횟수는 %d회", cnt);

    return 0;
}
