#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];

} Book;

int main()
{
	Book book;

	strcpy(book.title, "C �̳�");
	strcpy(book.author, "Runoob");
	strcpy(book.subject, "�������");


	printf("����� : %s\n", book.title);
	printf("������ : %s\n", book.author);
	printf("����Ŀ : %s\n", book.subject);


	return 0;
}