#include<header.h>

void main()
{
	int ev;
	printf("Enter the number of modules\n");
	scanf("%d",&m);
	printf("Enter the number of events\n");
        scanf("%d",&n);
	for(int i=1;i<=m;i++)
	{
		printf("Enter the events interested for module%d\n",i);
		init(i);
	}
	printf("Enter the event to find which are the modules interested in\t");
	scanf("%d",&ev);
	event(ev);
	freeall();
}
