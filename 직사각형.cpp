#include<stdio.h>
int main(void)
{
	int a, b, c, d, e, f, g, h;
	
	for(int i=0; i<4; i++)
	{
		scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
		
		if((c==e && d!=f) || (b==h && a!=g) || (g==d && h!=a) && (e==d && a!=f)) printf("b\n");
		else if((c==h && b==e) || (a==g && b==h) || (d==g && a==f) || (c==e && d==f)) printf("c\n");
		else if((a<e && c<g && d<h && b<f) || (e<a && g<c && d>h && b>f)) printf("d\n");
		else printf("a\n");
	}
	
	return 0;
}
