#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    
    int chk, maximal,i,j;
    maximal =0;
    for (i = l; i <= r; i++){
        for(j = l; j <= r; j++){
            chk = i ^ j;
            if (chk > maximal){
                maximal = chk;
            }
        }
    }
    return maximal;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
