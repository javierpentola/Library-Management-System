#ifndef BOOK_MANAGER_H
#define BOOK_MANAGER_H

void add_new_book(char* title, char* author, char* genre, int quantity);
void search_books_by_title(char* title);
void search_books_by_author(char* author);
void search_books_by_genre(char* genre);
void update_book_info(int book_id, char* title, char* author, char* genre, int quantity);
void manage_books();

#endif