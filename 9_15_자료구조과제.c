#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//1
typedef struct {
    char name[20];
    char phone[20];
} Person;

int main() {
    int n;
    scanf("%d", &n);
    Person arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s", arr[i].name, arr[i].phone);
    }
    int q;
    scanf("%d", &q);
    char query[20];
    for (int i = 0; i < q; i++) {
        scanf("%s", query);
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(arr[j].name, query) == 0) {
                printf("%s\n", arr[j].phone);
                found = 1;
                break;
            }
        }
        if (!found) printf("Not found\n");
    }
    return 0;
}

//2
typedef struct {
    char name[20];
    int birth;
} Author;

typedef struct {
    char title[20];
    int price;
    Author author;
} Book;

int main() {
    Book b1, b2;
    scanf("%s %d %s %d", b1.title, &b1.price, b1.author.name, &b1.author.birth);
    scanf("%s %d %s %d", b2.title, &b2.price, b2.author.name, &b2.author.birth);
    Book cheaper = (b1.price < b2.price) ? b1 : b2;
    printf("%s %d %s %d\n", cheaper.title, cheaper.price, cheaper.author.name, cheaper.author.birth);
    return 0;
}

//3
typedef struct {
    int year, month, day;
} Date;

typedef struct {
    char name[20];
    int dept;
    Date hire;
} Employee;

int isEarlier(Date a, Date b) {
    if (a.year != b.year) return a.year < b.year;
    if (a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}

int main() {
    Employee e[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d %d %d", e[i].name, &e[i].dept, &e[i].hire.year,
              &e[i].hire.month, &e[i].hire.day);
    }
    Employee oldest = e[0];
    for (int i = 1; i < 3; i++) {
        if (isEarlier(e[i].hire, oldest.hire)) oldest = e[i];
    }
    printf("%s %d %04d-%02d-%02d\n", oldest.name, oldest.dept,
           oldest.hire.year, oldest.hire.month, oldest.hire.day);
    return 0;
}

//4
typedef struct {
    double x, y;
} Point;

int main() {
    Point p1, p2;
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    double dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    printf("%.2f\n", dist);
    return 0;
}

//5
typedef struct {
    char name[20];
    double score;
} Student;

int main() {
    int n;
    scanf("%d", &n);
    Student *arr = malloc(sizeof(Student) * n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %lf", arr[i].name, &arr[i].score);
        sum += arr[i].score;
    }
    printf("Average: %.2f\n", sum / n);
    free(arr);
    return 0;
}

//6
typedef struct {
    char name[20];
    int kor, math, eng;
    int sum;
} Student;

int main() {
    int n;
    scanf("%d", &n);
    Student arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", arr[i].name, &arr[i].kor, &arr[i].math, &arr[i].eng);
        arr[i].sum = arr[i].kor + arr[i].math + arr[i].eng;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].sum < arr[j + 1].sum || (arr[j].sum == arr[j + 1].sum && strcmp(arr[j].name, arr[j + 1].name) > 0)) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", arr[i].name, arr[i].kor, arr[i].math, arr[i].eng);
    }
    return 0;
}
