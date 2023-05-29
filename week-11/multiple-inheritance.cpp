#include <iostream>
#include <string>
using namespace std;



class Date {
    protected:
        int day;
        int month;
        int year;
    
    public:
        Date():day(0), month(0), year(0) {}
        Date(int day, int month, int year):day(day), month(month), year(year) {}

        string getDate () {
            return to_string(day) + "-" + to_string(month) + "-" + to_string(year); // IMPORTANT: CONVERT INT TO STRING
        }
};


class Document {
    protected:
        string authors[5];
        Date date;

    public:
        Document() {
            for (int i = 0; i < 5; i++) {
                authors[i] = "";
                }
        }
        Document(string authors[], int day, int month, int year):date(day, month, year) {
            for (int i = 0; i < 5; i++) {
                this->authors[i] = authors[i];
            }
        }

};

class Book:public Document {
    protected:
        string title;

    public:
        Book():title("") {}
        Book(string title, string authors[], int day, int month, int year):Document(authors, day, month, year),title(title) {}

        string getTitle () {
            return title;
        }
};

class Email:public Document {
    protected:
        string subject, to;
    
    public:
        Email():subject(""), to("") {}
        Email(string subject, string to, string authors[], int day, int month, int year):subject(subject), to(to), Document(authors, day, month, year) {};

        string getSubject() {
            return subject;
        }

        string getTo() {
            return to;
        }
};

int main () {
    Book empty_book;
    Email empty_email;

    Book myBook("My Book", ["Ahmed", "Baari"], 23, 06, 2023)
    Email myEmail("My Email", "Baari", ["Bala", "Ravi"], 11, 12, 2011)

    cout << "Book named " << myBook.getTitle() << " and Email subject " << myEmail.getSubject() << " for " << myEmail.getTo() << endl;

}