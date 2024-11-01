#include<stdio.h>
void main()
{
    int Q[50],front=-1,rear=-1,i,limit,ch,del,sea,item,flag=0;
    printf("Enter the limit of the queue :");
    scanf("%d",&limit);

do{
    printf("\nMenu\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Search\n");
    printf("5.Exit\n");

    printf("Enter your choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        if(rear==limit-1)
        {
            printf("\nQueue is full\n");
        }
        else
        {
          printf("Enter the item to be inserted :");
          scanf("%d",&item);
          if(front==-1)
          {
            front=0;
          }
          rear++;
          Q[rear]=item;
        }
        break;
        case 2:
        if(front==-1 && rear==-1)
        {
            printf("No elements in the queue");
        }
        else if(front==rear)
        {
            del=Q[front];
            printf("Element Deleted, Deleted element is %d",del);
            front=-1;
            rear=-1;
        }
        else
        {
         del=Q[front];
         printf("Element Deleted, Deleted element is %d",del);
         front++;
        }
        break;

        case 3:
        if(front==-1 && rear==-1)
        {
            printf("No elements in the queue ");

        }
        else
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d",Q[i]);
            }
        }
        break;
        case 4:
        if(front==-1 && rear==-1)
        {
            printf("No elements in the queue");
        }
        else
        {
            printf("Enter the element to be searched :");
            scanf("%d",&sea);
            for(i=front;i<=rear;i++)
            {
                if(Q[i]==sea)
                {
                    flag=1;
                    printf("Element found at position %d",i+1);
                }
                
            }
            if(flag==0)
            {
                printf("Element not found");
            }
            
        }
        break;
        case 5:
        break;
        default:
        printf("Enter a valid choice :");
    }
}while(ch!=5);
}