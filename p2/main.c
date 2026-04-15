#include <stdio.h>

int main(void)
{
    int n, i, cCnt=0, cMax=0, iCnt=0, iMax=0;
    
    scanf("%d", &n);
    char str[i];
    
    scanf("%s", &str);
    for(i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            cCnt++;
            iCnt = 0;
            if(cCnt > cMax){
                cMax = cCnt;
            }
        }
        if(str[i]>='0' && str[i]<='9'){
            iCnt++;
            cCnt = 0;
            if(iCnt > iMax){
                iMax = iCnt;
            }
        }
        else{
            cCnt = 0;
            iCnt = 0;
        }
    }
    printf("%d",cMax);
    printf("%d",iMax);
    
    return 0;
}
