#include<header.h>
#include<samhead2.h>

void module1()
{       
	        printf("Inside module 1\n");
}       

void module2()
{       
	        printf("Inside module 2\n");
}

void module3()
{       
	        printf("Inside module 3\n");
}

void module4()
{
	        printf("Inside module 4\n");
}

void module5()
{
	        printf("Inside module 5\n");
}

void module6()
{
                printf("Inside module 6\n");
}

void module7()
{
                printf("Inside module 7\n");
}

void module8()
{
                printf("Inside module 8\n");
}

void module9()
{
                printf("Inside module 9\n");
}

void module10()
{
                printf("Inside module 10\n");
}

void init(int num)
{
        int eve, event = 0;
        fptr fp;
        for(;;)
        {
                printf("Events must between 1 and %d press any other to exit from module\t",n);
                scanf("%d",&eve);
                if(eve >= 1 && eve <= n)
                        event = bitmapping(event,eve);
                else
                        break;
        }
        fp = fpa[num-1];
        reg_event(num, event, fp);
        return;
}

