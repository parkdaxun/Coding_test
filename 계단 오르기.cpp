#include <stdio.h>
  
int memo[333];
int s[333];
  
int max(int a, int b) 
{ 
	return a > b ? a : b;
	 }
  
int f(int k){
    if(k < 1) return 0;
    if(memo[k]) return memo[k];
    if(k == 1) return memo[1] = s[1];
    if(k == 2) return memo[2] = s[1] + s[2];
    return memo[k] = max( f(k-3) + s[k-1], f(k-2) ) + s[k];
}
  
int main(){
    int n;
    int i;
      
    scanf("%d", &n);
    for(i=1; i<=n; i++) scanf("%d", &s[i]);
      
    printf("%d", f(n));
      
    return 0;
}

