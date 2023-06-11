#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_BOOKS 100 // 最大图书数
#define MAX_BORROWERS 50 // 最大读者数
#define MAX_BORROWS 500 // 最大借阅记录数

// 图书结构体
typedef struct {
    int id; // 编号
    char title[50]; // 书名
    char author[50]; // 作者
    char publisher[50]; // 出版社
    char pub_date[20]; // 出版日期
    float price; // 价格
    char category[20]; // 类别
    int total; // 总入库数量
    int stock; // 当前库存量
    int borrowed; // 已借出本数
} Book;

// 读者结构体
typedef struct {
    int id; // 借书证号
    char name[50]; // 姓名
    char grade[20]; // 年级
    char student_id[20]; // 学号
    int max_books; // 最大借书量
    int num_borrowed; // 已借书数量
    int type; // 读者类型
} Borrower;

// 借阅结构体
typedef struct {
    int book_id; // 图书编号
    int borrower_id; // 借书者编号
    char borrow_date[20]; // 借书日期
    char return_date[20]; // 应还日期
    float fine; // 罚款金额
    int status; // 借阅状态，0表示未归还，1表示已归还
} Borrow;

// 图书列表
Book books[MAX_BOOKS];
int num_books = 0;

// 读者列表
Borrower borrowers[MAX_BORROWERS];
int num_borrowers = 0;

// 借阅列表
Borrow borrows[MAX_BORROWS];
int num_borrows = 0;

// 添加图书
void add_book() {
    Book book;
    printf("请输入图书信息：\n");
    printf("图书编号：");
    scanf("%d", &book.id);
    printf("书名：");
    scanf("%s", book.title);
    printf("作者：");
    scanf("%s", book.author);
    printf("出版社：");
    scanf("%s", book.publisher);
    printf("出版日期：");
    scanf("%s", book.pub_date);
    printf("价格：");
    scanf("%f", &book.price);
    printf("类别：");
    scanf("%s", book.category);
    printf("总入库数量：");
    scanf("%d", &book.total);
    printf("当前库存量：");
    scanf("%d", &book.stock);
    book.borrowed = 0;
    books[num_books++] = book;
    printf("图书添加成功！\n");
}

// 编辑图书
void edit_book() {
    int id, index = -1;
    printf("请输入要编辑的图书编号：");
    scanf("%d", &id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        Book book = books[index];
        printf("请输入新的图书信息：\n");
        printf("书名（%s）：", book.title);
        scanf("%s", book.title);
        printf("作者（%s）：", book.author);
        scanf("%s", book.author);
        printf("出版社（%s）：", book.publisher);
        scanf("%s", book.publisher);
        printf("出版日期（%s）：", book.pub_date);
        scanf("%s", book.pub_date);
        printf("价格（%.2f）：", book.price);
        scanf("%f", &book.price);
        printf("类别（%s）：", book.category);
        scanf("%s", book.category);
        printf("总入库数量（%d）：", book.total);
        scanf("%d", &book.total);
        printf("当前库存量（%d）：", book.stock);
        scanf("%d", &book.stock);
        books[index] = book;
        printf("图书编辑成功！\n");
    }
    else {
        printf("未找到编号为%d的图书！\n", id);
    }
}

// 删除图书
void delete_book() {
    int id, index = -1;
    printf("请输入要删除的图书编号：");
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
            printf("图书已借出，不能删除!\n");
        }
        else
        {
            for (int i = index; i < num_books - 1; i++)
            {
                books[i] = books[i + 1];
            }
            num_books--;
            printf("图书删除成功！\n");
        }

    }
    else
    {
        printf("未找到编号为%d的图书！\n", id);
    }
}


//查询图书
void search_book() {
    int id, index = -1;
    printf("请输入要查询的图书编号：");
    scanf("%d", &id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) 
    {
        printf("编号：%d\n", books[index].id);
        printf("书名： %s\n", books[index].title);
        printf("作者： %s\n", books[index].author);
        printf("出版社： %s\n", books[index].publisher);
        printf("出版日期： %s\n", books[index].pub_date);
        printf("价格： %.2f\n", books[index].price);
        printf("类别： %s\n", books[index].category);
        printf("总入库数量： %d\n", books[index].total);
        printf("当前库存量： %d\n", books[index].stock);
        printf("已借出本数： %d\n", books[index].borrowed);
    }
    else 
    {
        printf("未找到编号为 % d的图书！\n", id);
    }
}

// 添加读者
void add_borrower() {
    Borrower borrower;
    printf("请输入读者信息：\n");
    printf("借书证号：");
    scanf("%d", &borrower.id);
    printf("姓名：");
    scanf("%s", borrower.name);
    printf("年级：");
    scanf("%s", borrower.grade);
    printf("学号：");
    scanf("%s", borrower.student_id);
    printf("最大借书量");
    scanf("%d", &borrower.max_books);
    borrower.num_borrowed = 0;
    printf("读者类型（1 - 教师，2 - 学生）：");
    scanf("%d", &borrower.type);
    borrowers[num_borrowers++] = borrower;
    printf("读者添加成功！\n");
}


// 编辑读者
void edit_borrower() {
    int id, index = -1;
    printf("请输入要编辑的借书证号：");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        Borrower borrower = borrowers[index];
        printf("请输入新的读者信息：\n");
        printf("姓名（ % s）：", borrower.name);
        scanf("%s", borrower.name);
        printf("年级（%s）：", borrower.grade);
        scanf("%s", borrower.grade);
        printf("学号（ % s）：", borrower.student_id);
        scanf("%s", borrower.student_id);
        printf("最大借书量（%d）：", borrower.max_books);
        scanf("%d", &borrower.max_books);
        printf("读者类型（1 - 教师，2 - 学生, %d）：", borrower.type);
        scanf("%d", &borrower.type);
        borrowers[index] = borrower;
        printf("读者编辑成功！\n");
    }
    else {
        printf("未找到借书证号为%d的读者！\n", id);
    }
}

// 删除读者
void delete_borrower() {
    int id, index = -1;
    printf("请输入要删除的借书证号：");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        if (borrowers[index].num_borrowed > 0) {
            printf("借书证号为%d的读者还有未归还的图书，不能删除！\n", id);
        }
        else 
        {
            for (int i = index; i < num_borrowers - 1; i++) {
                borrowers[i] = borrowers[i + 1];
            }
            num_borrowers--;
            printf("读者删除成功！\n");
        }
    }
    else {
        printf("未找到借书证号为 % d的读者！\n", id);
    }
}


// 查询读者
void search_borrower()
{
    int id, index = -1;
    printf("请输入要查询的借书证号：");
    scanf("%d", &id);
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == id) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("借书证号：%d\n", borrowers[index].id);
        printf("姓名：%s\n", borrowers[index].name);
        printf("年级：%s\n", borrowers[index].grade);
        printf("学号：%s\n", borrowers[index].student_id);
        printf("最大借书量：%d\n", borrowers[index].max_books);
        printf("已借书数量：%d\n", borrowers[index].num_borrowed);
        printf("读者类型：%s\n", borrowers[index].type == 1 ? "教师" : "学生");
    }
    else {
        printf("找到借书证号为%d的读者！\n", id);
    }
}



// 借阅图书
void borrow_book() {
    int book_id, borrower_id, book_index = -1, borrower_index = -1;
    printf("请输入图书编号和借书证号：");
    scanf("%d %d", &book_id, &borrower_id);
    for (int i = 0; i < num_books; i++) {
        if (books[i].id == book_id) {
            book_index = i;
            break;
        }
    }
    if (book_index == -1) {
        printf("未找到编号为%d的图书！\n", book_id);
        return;
    }
    for (int i = 0; i < num_borrowers; i++) {
        if (borrowers[i].id == borrower_id) {
            borrower_index = i;
            break;
        }
    }
    if (borrower_index == -1) {
        printf("未找到借书证号为%d的读者！\n", borrower_id);
        return;
    }
    if (books[book_index].stock <= 0) {
        printf("库存不足，无法借阅！\n");
        return;
    }
    if (borrows[num_borrows].status == 0) {
        printf("读者还有未归还的图书，无法借阅！\n");
        return;
    }
    if (borrowers[borrower_index].num_borrowed >= borrowers[borrower_index].max_books) {
        printf("已达到最大借书量，无法借阅！\n");
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
    printf("借阅成功！\n");
}


// 归还图书
void return_book()
{
    int book_id, borrower_id, borrow_index = -1;
    printf("请输入图书编号和借书证号：");
    scanf("%d %d", &book_id, &borrower_id);
    for (int i = 0; i < num_borrows; i++) {
        if (borrows[i].book_id == book_id && borrows[i].borrower_id == borrower_id) {
            borrow_index = i;
            break;
        }
    }
    if (borrow_index == -1) {
        printf("未找到该借阅记录！\n");
        return;
    }
    if (borrows[borrow_index].status == 1) {
        printf("该图书已归还！\n");
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
        printf("该图书已逾期 % d天，罚款 % .2f元。\n", days_late, fine);
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
    printf("归还成功！\n");
}



// 打印图书列表
void print_books() {
    printf("编号\t书名\t作者\t出版社\t出版日期\t价格\t类别\t总入库数量\t当前库存量\t已借出本数\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d\t%s\t%s\t%s\t%s\t%.2f\t%s\t%d\t%d\t%d\n", books[i].id, books[i].title, books[i].author, books[i].publisher, books[i].pub_date, books[i].price, books[i].category, books[i].total, books[i].stock, books[i].borrowed);
    }
}


// 打印读者列表
void print_borrowers() {
    printf("借书证号\t姓名\t年级\t学号\t最大借书量\t已借书数量\t读者类型\n");
    for (int i = 0; i < num_borrowers; i++) {
        printf("%d\t%s\t%s\t%s\t%d\t%d\t%s\n", borrowers[i].id, borrowers[i].name, borrowers[i].grade, borrowers[i].student_id, borrowers[i].max_books, borrowers[i].num_borrowed, borrowers[i].type == 1 ? "教师" : "学生");
    }
}


// 打印借阅列表
void print_borrows() {
    printf("图书编号\t借书证号\t借书日期\t应还日期\t罚款金额\t借阅状态\n");
    for (int i = 0; i < num_borrows; i++) {
        printf("%d\t%d\t%s\t%s\t%.2f\t%s\n", borrows[i].book_id, borrows[i].borrower_id, borrows[i].borrow_date, borrows[i].return_date, borrows[i].fine, borrows[i].status == 0 ? "未归还" : "已归还");
    }
}


// 打印菜单
void print_menu() {
    printf("欢迎使用图书管理系统，请选择以下操作：\n");
    printf("1.增加图书\n");
    printf("2.编辑图书\n");
    printf("3.删除图书\n");
    printf("4.查询图书\n");
    printf("5.添加读者\n");
    printf("6.编辑读者\n");
    printf("7.删除读者\n");
    printf("8.查询读者\n");
    printf("9.借阅图书\n");
    printf("10.归还图书\n");
    printf("11.打印图书列表\n");
    printf("12.打印读者列表\n");
    printf("13.打印借阅列表\n");
    printf("14.退出系统\n");
    printf("请选择操作：");

}



// 主函数
int main() {
    //init_system();
    int choice;
    while (1) {
        print_menu();

        scanf("%d", &choice);
        system("cls");  //清屏操作

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
            printf("谢谢使用！\n");
            return 0;
        default:
            printf("无效操作，请重新选择！\n");
            break;
        }
    }
    return 0;
}