#include <stdio.h>
#include <string.h>



int max(int a, int b);


int lcs(char *x, char *y, int m, int n, int dp[m][n])
{
 
    if ( m == 0 || n == 0 ) {
        
        return 0;

    } else if ( dp[m][n] != -1 ) {

        return dp[m][n];
        
    } else if ( x[m] == y[n] ) {
        
        dp[m][n] = 1 + lcs(x, y, m - 1, n - 1, dp);
        return dp[m][n];

    } else {
        dp[m][n] = max(lcs(x, y, m - 1, n, dp), lcs(x, y, m, n - 1, dp));
        
        return  dp[m][n];

    }
}

int max(int a, int b) 
{
    
    return (a > b)? a:b;
}

int main()
{
    char s1[] = "AGGTAB";
    char s2[] = "GXTXAYB";
    
    int m = strlen(s1); //6
    int n = strlen(s2); //7
    int a[m][n];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            
            a[i][j] = -1;
        
        }
    }

    printf("%d\n",lcs(s1, s2, m, n, a));
    // lcs(s1, s2, m, n, a);    


    // for (int i = 1; i <= m; i++) {
    //     for (int j = 1; j <= n; j++) {
            
    //        printf("%d   ",a[i][j]);

        
    //     }
    //     printf("\n");
    // }

}  