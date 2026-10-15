#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

struct Student{
    char name[20];
    int id;
    int score;

    Student(){}

    Student(const char _name[20],int _id,int _score){
        strcpy(name,_name);
        id = _id;
        score = _score;
    }
};

int main(){
    system("chcp 65001>nul");
    Student s1 = Student("张三",1001,85);
    Student s2 = Student("李四",1002,92);
    Student s3 = Student("王五",1003,78);
    printf("姓名  学号  成绩\n");
    printf("%s  %d  %d\n",s1.name,s1.id,s1.score);
    printf("%s  %d  %d\n",s2.name,s2.id,s2.score);
    printf("%s  %d  %d\n",s3.name,s3.id,s3.score);
    return 0;
}