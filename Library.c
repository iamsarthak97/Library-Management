#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Library{
	char book_name[50];
    int bookid;
    float book_price;
    char author[50];
	
	
};
int main(){
	
	struct Library L[20];
	int i=20,found=0,bi,choice;
	char s1[50],s2[50];
	
	 for(i=0; i<5; i++)
    {
        printf("Enter details of book #%d\n", i+1);
        printf("Enter book id: ");
        scanf("%d", &L[i].bookid);
        fflush(stdin);
        printf("\nEnter book name: ");
        //scanf("%s", &L[i].book_name);
        gets(L[i].book_name);
        printf("\nEnter book author: ");
        //scanf("%s", &L[i].author);
        gets(L[i].author);
        printf("Enter book price: ");
        scanf("%f", &L[i].book_price);
    }

for(i=0; i<5; i++)
    {
        printf("\nBook %d.............\n\n", i+1);
        printf("Book Id: %d\n", L[i].bookid);
        printf("Book Name: %s\n", L[i].book_name);
        printf("Book Author: %s\n", L[i].author);
        printf("Book price: %f", L[i].book_price);
    }
    
    do{
     //printf("\n\n Enter your choice=Enter 1 to search by Book Name\nEnter 2 to search by Author Name\nEnter 3 to search by Book Id\nEnter 4 to display books available in Library\nEnter 5 to Exit\n\nEnter your option:  ");
   
   printf("\n Enter Your Choice");
   
   printf("\n Press 1 for Search by Book Name ");
   
   printf("\n Press 2  for Search Book  by Author Name ");
   
   printf("\n Press 3 for Search Book  by Book Id ");
   
   printf("\n Press 4 for List  of  Available Books ");
   
   printf("\n Press 5 for Add Book ");
   
   printf("\n Press 0 for Exit ");
   
   
    scanf("%d",&choice);
    
    if(choice==1){
    	
    	printf("\nEnter Book Name to search: \n");
    	scanf("\n");
                scanf ("%[^\n]%*c", s1);   
                printf("\n");
                for(i=0;i<5;i++)
                    {
                        if(strcmp(s1,L[i].book_name)==0)
                        {
                          found=1;
                          printf("\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n\t\t\t\t*Hurray!BOOK FOUND*\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n");
                          printf("Book Code : %d\n", L[i].bookid);
                          printf("Book Name : %s\n", L[i].book_name);
                          printf("Author    : %s\n", L[i].author);
                           printf("price    : %f\n", L[i].book_price);
                          printf("---------------------------------------------------------");
                        }
                    }
                if(found==0)
                printf("\nBook Not Found\nEnter a valid Book Name");
                break;
            
	}
	if(choice==2){
		
		 printf("\nEnter Author Name to search: \n");
		 
		 scanf("\n");
                scanf ("%[^\n]%*c", s2);   
                printf("\n");
                for(i=0;i<5;i++)
                    {
                        if(strcmp(s2,L[i].author)==0)
                        {
                          found=1;
                          printf("\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n\t\t\t\t*Hurray!BOOK FOUND*\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n");
                          printf("Book Code : %d\n", L[i].bookid);
                          printf("Book Name : %s\n", L[i].book_name);
                          printf("Author    : %s\n", L[i].author);
                          printf("price    : %f\n", L[i].book_price);
                          printf("---------------------------------------------------------");
                        }
                    }
                if(found==0) 
                printf("\nBook Not Found\nEnter a valid Author Name");
                break;
	}
	if(choice==3){
		
		printf("\nEnter Book Id to search: \n");
                scanf("%d",&bi);
                 for(i=0;i<5;i++)
                    {
                        
                        if(bi == L[i].bookid)
                        {
                          found=1;
                          printf("\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n\t\t\t\t*Hurray!BOOK FOUND*\n\t\t\t\t*-*-*-*-*-*-*-*-*-*\n");
                          printf("Book Code : %d\n", L[i].bookid);
                          printf("Book Name : %s\n", L[i].book_name);
                          printf("Author    : %s\n", L[i].author);
                          printf("price    : %f\n", L[i].book_price);
                          printf("---------------------------------------------------------");
                        }
                    }
                if(found==0) 
                printf("\nBook Not Found\nEnter a valid Book Id");
                break;
	}
	if(choice==4){
		int k;
		printf("\n-> Available books in library are listed below:\n\n");
            for( k=0; k<i; k++)
            { 
              printf ("Book name   : %s\n",L[k].book_name);
              printf ("Author name : %s\n",L[k].author);
              printf ("Book code   : %d\n",L[k].bookid);
              printf("price    : %f\n", L[k].book_price);
              printf("----------------------------------------\n");
            }
            break;
	}if(choice==5){
		
		printf("Enter details of book #%d\n", i+1);
        printf("Enter book id: ");
        scanf("%d", &L[i].bookid);
        printf("\nEnter book name: ");
        scanf("%s", &L[i].book_name);
        printf("\nEnter book author: ");
        scanf("%s", &L[i].author);
        printf("Enter book price: ");
        scanf("%f", &L[i].book_price);
		
	}
	
	if(choice==0){
		 printf("\n\t\t\t\t*-*-*-*-*-*\n\t\t\t\t*Thank you*\n\t\t\t\t*-*-*-*-*-*");
            printf("\n--------------------------------------------------------------------------------------------------");
            exit(0);
	}else{
		printf("Oh! Not found,Enter a valid option from 1 to 6");
                break;
	}
	}
	 while(choice!=0);
    return 0;
    
}
