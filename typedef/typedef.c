#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];



}Book;

int main()
{
	Book book;
	strcpy( book.title, "c language");
	strcpy( book.author, "ybb");
	strcpy( book.subject, "program language");

	printf("title of book : %s\n", book.title);
	printf("author of book : %s\n", book.author);
	printf("subject of book : %s\n", book.subject);

	return 0;
}
