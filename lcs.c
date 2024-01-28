#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b){


    return (a > b) ?a:b;
}


int lcs(char *x, char *y, int i, int j)
{
    if (x[i] == 0 || y[j] == 0) {//equal 0 if out of index
        
        return 0;
    }
    else if (x[i] == y[j]) {
        
        return 1 + lcs(x, y, i + 1, j + 1 );
    } else {

        return max(lcs(x ,y ,i + 1, j),lcs(x, y, i, j + 1));
    }
    
    }


int main()
{

    char s1[] = "fjjgpsjdglfffsvnrei9403kfsd";
    char s2[] = "sdfpgj33lhyyfiififytiyriyfhjvfoooo";
    int i = 0, j = 0;
    int lc_seq = lcs(s1, s2, i, j );
    
    printf("%d\n", lc_seq);


        
    return 0;
    
}