//*************************************************************************************//
//        Problem : 11172	Relational Operator
//        Language: ANSI C
//        Comment  : Very easy, Ad hoc 
// 		  Status   : AC
//*************************************************************************************//

#include <stdio.h>
int main()
{

	int TC, a, b;
	scanf("%d", &TC);
	while(TC--)
	{
		scanf("%d %d", &a, &b);
		if(a<b)
			printf("<\n");
		if(a>b)
			printf(">\n");
		if(a==b)
			printf("=\n");
	}
	return 0;
}