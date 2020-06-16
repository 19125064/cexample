#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;


}Book;

int main()
{
	Book book;
	strcpy( book.title, "c language");
	strcpy( book.author, "ybb");
	strcpy( book.subject, "program language");
	book.book_id = 12345;
	printf("title of book : %s\n", book.title);
	printf("author of book : %s\n", book.author);
	printf("subject of book : %s\n", book.subject);
	printf("id of book : %d\n", book.book_id);

	return 0;
}
