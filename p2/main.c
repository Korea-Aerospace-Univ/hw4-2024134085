#include <stdio.h>

int main(void)
{
    int n, i, cCnt=0, cMax=0, iCnt=0, iMax=0;
    char ch;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%c", &ch);
        
        if(ch>='a' && ch<='z'){
            cCnt++;
            iCnt = 0;
            if(cCnt > cMax){
                cMax = cCnt;
            }
        }
        else if(ch>='0' && ch<='9'){
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
    printf("%d\n",cMax);
    printf("%d\n",iMax);
    
    return 0;
}
