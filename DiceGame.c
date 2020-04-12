/*
 C言語によるサイコロの出目予想と判定
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int r,answer,ha;
    srand((unsigned)time(NULL));
    r=rand()%6+1;
    do{
        printf("サイコロの出目を予想します。\n1から6までの数字を入力してください:");
        scanf("%d",&answer);
        if(r==answer)
            puts("予想は当たりました。GAME CLEAR");
        else
            puts("予想は外れました。GAME OVER");
        printf("もう一度サイコロの出目を予想しますか？・・・(0)はい　(1)いいえ:");
        scanf("%d",&ha);
    }while(ha==0);
    return (0);
}