#include<stdio.h>
void Enqueue();
void Dequeue();
void Display();
void main()
{
    int Q[10],front,rear,i,limit,ch,item;
    printf("Enter the array limit :");
    scanf("%d",&limit);

    printf("\nMenu\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Exit\n");

    printf("Enter your choice :");
    scanf("%d",&ch); 

    switch(ch)
    {
        case 1:printf("Enter the element to be inserted :");
        scanf("%d",&item);
        Enqueue();
        break;
        case 2:Dequeue();
        break;
        case 3:Display();
        break;
        case 4:printf("Exiting...");
        break;
    }
}