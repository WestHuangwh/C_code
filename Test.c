#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_BOOKS 100 // ���ͼ����
#define MAX_BORROWERS 50 // ��������
#define MAX_BORROWS 500 // �����ļ�¼��

// ͼ��ṹ��
typedef struct {
    int id; // ���
    char title[50]; // ����
    char author[50]; // ����
    char publisher[50]; // ������
    char pub_date[20]; // ��������
    float price; // �۸�
    char category[20]; // ���
    int total; // ���������
    int stock; // ��ǰ�����
    int borrowed; // �ѽ������
} Book;

// ���߽ṹ��
typedef struct {
    int id; // ����֤��
    char name[50]; // ����
    char grade[20]; // �꼶
    char student_id[20]; // ѧ��
    int max_books; // ��������
    int num_borrowed; // �ѽ�������
    int type; // ��������
} Borrower;

// ���Ľṹ��
typedef struct {
    int book_id; // ͼ����
    int borrower_id; // �����߱��
    char borrow_date[20]; // ��������
    char return_date[20]; // Ӧ������
    float fine; // ������
    int status; // ����״̬��0��ʾδ�黹��1��ʾ�ѹ黹
} Borrow;

// ͼ���б�
Book books[MAX_BOOKS];
int num_books = 0;

// �����б�
Borrower borrowers[MAX_BORROWERS];
int num_borrowers = 0;

// �����б�
Borrow borrows[MAX_BORROWS];
int num_borrows = 0;

// ���ͼ��
void add_book() {
    Book book;
    printf("������ͼ����Ϣ��\n");
    printf("ͼ���ţ�");
    scanf("%d", &book.id);
    printf("������");
    scanf("%s", book.title);
    printf("���ߣ�");
    scanf("%s", book.author);
    printf("�����磺");
    scanf("%s", book.publisher);
    printf("�������ڣ�");
    scanf("%s", book.pub_date);
    printf("�۸�");
    scanf("%f", &book.price);
    printf("���");
    scanf("%s", book.category);
    printf("�����������");
    scanf("%d", &book.total);
    printf("��ǰ�������");
    scanf("%d", &book.stock);
    book.borrowed = 0;
    books[num_books++] = book;
    printf("ͼ����ӳɹ���\n");
}

// �༭ͼ��
void edit_book() {
    int id, index = -1;
    printf("������Ҫ�༭��ͼ���ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        Book book = books[index];
        printf("�������µ�ͼ����Ϣ��\n");
        printf("������%s����", book.title);
        scanf("%s", book.title);
        printf("���ߣ�%s����", book.author);
        scanf("%s", book.author);
        printf("�����磨%s����", book.publisher);
        scanf("%s", book.publisher);
        printf("�������ڣ�%s����", book.pub_date);
        scanf("%s", book.pub_date);
        printf("�۸�%.2f����", book.price);
        scanf("%f", &book.price);
        printf("���%s����", book.category);
        scanf("%s", book.category);
        printf("�����������%d����", book.total);
        scanf("%d", &book.total);
        printf("��ǰ�������%d����", book.stock);
        scanf("%d", &book.stock);
        books[index] = book;
        printf("ͼ��༭�ɹ���\n");
    }
    else {
        printf("δ�ҵ����Ϊ%d��ͼ�飡\n", id);
    }
}

// ɾ��ͼ��
void delete_book() {
    int id, index = -1;
    printf("������Ҫɾ����ͼ���ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_books; i++)
    {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) 
    {
        if (books[index].borrowed > 0) 
        {
            printf("ͼ���ѽ��������ɾ��!\n");
        }
        else
        {
            for (int i = index; i < num_books - 1; i++)
            {
                books[i] = books[i + 1];
            }
            num_books--;
            printf("ͼ��ɾ���ɹ���\n");
        }

    }
    else
    {
        printf("δ�ҵ����Ϊ%d��ͼ�飡\n", id);
    }
}


//��ѯͼ��
void search_book() {
    int id, index = -1;
    printf("������Ҫ��ѯ��ͼ���ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) 
    {
        printf("��ţ�%d\n", books[index].id);
        printf("������ %s\n", books[index].title);
        printf("���ߣ� %s\n", books[index].author);
        printf("�����磺 %s\n", books[index].publisher);
        printf("�������ڣ� %s\n", books[index].pub_date);
        printf("�۸� %.2f\n", books[index].price);
        printf("��� %s\n", books[index].category);
        printf("����������� %d\n", books[index].total);
        printf("��ǰ������� %d\n", books[index].stock);
        printf("�ѽ�������� %d\n", books[index].borrowed);
    }
    else 
    {
        printf("δ�ҵ����Ϊ % d��ͼ�飡\n", id);
    }
}

// ��Ӷ���
void add_borrower() {
    Borrower borrower;
    printf("�����������Ϣ��\n");
    printf("����֤�ţ�");
    scanf("%d", &borrower.id);
    printf("������");
    scanf("%s", borrower.name);
    printf("�꼶��");
    scanf("%s", borrower.grade);
    printf("ѧ�ţ�");
    scanf("%s", borrower.student_id);
    printf("��������");
    scanf("%d", &borrower.max_books);
    borrower.num_borrowed = 0;
    printf("�������ͣ�1 - ��ʦ��2 - ѧ������");
    scanf("%d", &borrower.type);
    borrowers[num_borrowers++] = borrower;
    printf("������ӳɹ���\n");
}


// �༭����
void edit_borrower() {
    int id, index = -1;
    printf("������Ҫ�༭�Ľ���֤�ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        Borrower borrower = borrowers[index];
        printf("�������µĶ�����Ϣ��\n");
        printf("������ % s����", borrower.name);
        scanf("%s", borrower.name);
        printf("�꼶��%s����", borrower.grade);
        scanf("%s", borrower.grade);
        printf("ѧ�ţ� % s����", borrower.student_id);
        scanf("%s", borrower.student_id);
        printf("����������%d����", borrower.max_books);
        scanf("%d", &borrower.max_books);
        printf("�������ͣ�1 - ��ʦ��2 - ѧ��, %d����", borrower.type);
        scanf("%d", &borrower.type);
        borrowers[index] = borrower;
        printf("���߱༭�ɹ���\n");
    }
    else {
        printf("δ�ҵ�����֤��Ϊ%d�Ķ��ߣ�\n", id);
    }
}

// ɾ������
void delete_borrower() {
    int id, index = -1;
    printf("������Ҫɾ���Ľ���֤�ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        if (borrowers[index].num_borrowed > 0) {
            printf("����֤��Ϊ%d�Ķ��߻���δ�黹��ͼ�飬����ɾ����\n", id);
        }
        else 
        {
            for (int i = index; i < num_borrowers - 1; i++) {
                borrowers[i] = borrowers[i + 1];
            }
            num_borrowers--;
            printf("����ɾ���ɹ���\n");
        }
    }
    else {
        printf("δ�ҵ�����֤��Ϊ % d�Ķ��ߣ�\n", id);
    }
}


// ��ѯ����
void search_borrower()
{
    int id, index = -1;
    printf("������Ҫ��ѯ�Ľ���֤�ţ�");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("����֤�ţ�%d\n", borrowers[index].id);
        printf("������%s\n", borrowers[index].name);
        printf("�꼶��%s\n", borrowers[index].grade);
        printf("ѧ�ţ�%s\n", borrowers[index].student_id);
        printf("����������%d\n", borrowers[index].max_books);
        printf("�ѽ���������%d\n", borrowers[index].num_borrowed);
        printf("�������ͣ�%s\n", borrowers[index].type == 1 ? "��ʦ" : "ѧ��");
    }
    else {
        printf("�ҵ�����֤��Ϊ%d�Ķ��ߣ�\n", id);
    }
}



// ����ͼ��
void borrow_book() {
    int book_id, borrower_id, book_index = -1, borrower_index = -1;
    printf("������ͼ���źͽ���֤�ţ�");
    scanf("%d %d", &book_id, &borrower_id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == book_id) {
            book_index = i;
            break;
        }
    }
    if (book_index == -1) {
        printf("δ�ҵ����Ϊ%d��ͼ�飡\n", book_id);
        return;
    }
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == borrower_id) {
            borrower_index = i;
            break;
        }
    }
    if (borrower_index == -1) {
        printf("δ�ҵ�����֤��Ϊ%d�Ķ��ߣ�\n", borrower_id);
        return;
    }
    if (books[book_index].stock <= 0) {
        printf("��治�㣬�޷����ģ�\n");
        return;
    }
    if (borrows[num_borrows].status == 0) {
        printf("���߻���δ�黹��ͼ�飬�޷����ģ�\n");
        return;
    }
    if (borrowers[borrower_index].num_borrowed >= borrowers[borrower_index].max_books) {
        printf("�Ѵﵽ�����������޷����ģ�\n");
        return;
    }
    borrows[num_borrows].book_id = book_id;
    borrows[num_borrows].borrower_id = borrower_id;
    time_t curr_time = time(NULL);
    struct tm* local_time = localtime(&curr_time);
    sprintf(borrows[num_borrows].borrow_date, " % 04d - % 02d - % 02d", local_time->tm_year + 1900, local_time->tm_mon + 1, local_time->tm_mday);
    curr_time += 30 * 24 * 3600;
    local_time = localtime(&curr_time);
    sprintf(borrows[num_borrows].return_date, " % 04d - % 02d - % 02d", local_time->tm_year + 1900, local_time->tm_mon + 1, local_time->tm_mday);
    borrows[num_borrows].fine = 0.0;
    borrows[num_borrows].status = 0;
    books[book_index].stock--;
    books[book_index].borrowed++;
    borrowers[borrower_index].num_borrowed++;
    num_borrows++;
    printf("���ĳɹ���\n");
}


// �黹ͼ��
void return_book()
{
    int book_id, borrower_id, borrow_index = -1;
    printf("������ͼ���źͽ���֤�ţ�");
    scanf("%d %d", &book_id, &borrower_id);
    for (int i = 0; i < num_borrows; i++) {
        if (borrows[i].book_id == book_id && borrows[i].borrower_id == borrower_id) {
            borrow_index = i;
            break;
        }
    }
    if (borrow_index == -1) {
        printf("δ�ҵ��ý��ļ�¼��\n");
        return;
    }
    if (borrows[borrow_index].status == 1) {
        printf("��ͼ���ѹ黹��\n");
        return;
    }
    time_t curr_time = time(NULL);
    struct tm* local_time = localtime(&curr_time);
    char return_date[20];
    sprintf(return_date, " % 04d - % 02d - % 02d", local_time->tm_year + 1900, local_time->tm_mon + 1, local_time->tm_mday);
    float fine = 0.0;
    if (strcmp(return_date, borrows[borrow_index].return_date) > 0) {
        int days_late = (local_time->tm_year + 1900) * 365 + (local_time->tm_mon + 1) * 30 + local_time->tm_mday;
        days_late -= atoi(borrows[borrow_index].return_date) * 365 + atoi(borrows[borrow_index].return_date + 5) * 30 + atoi(borrows[borrow_index].return_date + 8);
        fine = days_late * 0.1;
        printf("��ͼ�������� % d�죬���� % .2fԪ��\n", days_late, fine);
    }
    borrows[borrow_index].status = 1;
    borrows[borrow_index].fine = fine;
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == book_id) {
            books[i].stock++;
            books[i].borrowed--;
            break;
        }
    }
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == borrower_id) {
            borrowers[i].num_borrowed--;
            break;
        }
    }
    printf("�黹�ɹ���\n");
}



// ��ӡͼ���б�
void print_books() {
    printf("���\t����\t����\t������\t��������\t�۸�\t���\t���������\t��ǰ�����\t�ѽ������\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d\t%s\t%s\t%s\t%s\t%.2f\t%s\t%d\t%d\t%d\n", books[i].id, books[i].title, books[i].author, books[i].publisher, books[i].pub_date, books[i].price, books[i].category, books[i].total, books[i].stock, books[i].borrowed);
    }
}


// ��ӡ�����б�
void print_borrowers() {
    printf("����֤��\t����\t�꼶\tѧ��\t��������\t�ѽ�������\t��������\n");
    for (int i = 0; i < num_borrowers; i++) {
        printf("%d\t%s\t%s\t%s\t%d\t%d\t%s\n", borrowers[i].id, borrowers[i].name, borrowers[i].grade, borrowers[i].student_id, borrowers[i].max_books, borrowers[i].num_borrowed, borrowers[i].type == 1 ? "��ʦ" : "ѧ��");
    }
}


// ��ӡ�����б�
void print_borrows() {
    printf("ͼ����\t����֤��\t��������\tӦ������\t������\t����״̬\n");
    for (int i = 0; i < num_borrows; i++) {
        printf("%d\t%d\t%s\t%s\t%.2f\t%s\n", borrows[i].book_id, borrows[i].borrower_id, borrows[i].borrow_date, borrows[i].return_date, borrows[i].fine, borrows[i].status == 0 ? "δ�黹" : "�ѹ黹");
    }
}


// ��ӡ�˵�
void print_menu() {
    printf("��ӭʹ��ͼ�����ϵͳ����ѡ�����²�����\n");
    printf("1.����ͼ��\n");
    printf("2.�༭ͼ��\n");
    printf("3.ɾ��ͼ��\n");
    printf("4.��ѯͼ��\n");
    printf("5.��Ӷ���\n");
    printf("6.�༭����\n");
    printf("7.ɾ������\n");
    printf("8.��ѯ����\n");
    printf("9.����ͼ��\n");
    printf("10.�黹ͼ��\n");
    printf("11.��ӡͼ���б�\n");
    printf("12.��ӡ�����б�\n");
    printf("13.��ӡ�����б�\n");
    printf("14.�˳�ϵͳ\n");
    printf("��ѡ�������");

}



// ������
int main() {
    //init_system();
    int choice;
    while (1) {
        print_menu();

        scanf("%d", &choice);
        system("cls");  //��������

        switch (choice) {
        case 1:
            add_book();
            break;
        case 2:
            edit_book();
            break;
        case 3:
            delete_book();
            break;
        case 4:
            search_book();
            break;
        case 5:
            add_borrower();
            break;
        case 6:
            edit_borrower();
            break;
        case 7:
            delete_borrower();
            break;
        case 8:
            search_borrower();
            break;
        case 9:
            borrow_book();
            break;
        case 10:
            return_book();
            break;
        case 11:
            print_books();
            break;
        case 12:
            print_borrowers();
            break;
        case 13:
            print_borrows();
            break;
        case 14:
            printf("ллʹ�ã�\n");
            return 0;
        default:
            printf("��Ч������������ѡ��\n");
            break;
        }
    }
    return 0;
}