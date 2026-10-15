#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
 
const int STU_SUM = 3;
const int MAXN_LEN = 100;

struct Student{
    char name[MAXN_LEN];
    int id;
    int score;

    Student(){}

    Student(const char _name[MAXN_LEN],int _id,int _score){
        strcpy(name,_name);
        id = _id;
        score = _score;
    }
};

int main(){
    system("chcp 65001>nul");
    char name[MAXN_LEN];
    int id;
    int score;
    double sum=0;
    double avg;
    Student stu[STU_SUM];
    for(int i = 0; i < STU_SUM; i++){
        printf("请输入第%d个学生的信息。\n",i+1);
        cin.getline(name,MAXN_LEN);
        cin >> id >> score;
        cin.ignore();
        stu[i] = Student(name,id,score);
    }
    printf("姓名 学号 成绩\n");
    for(int i = 0; i < STU_SUM; i++){
        cout << stu[i].name << " " << stu[i].id << " " << stu[i].score << endl;
        sum += stu[i].score;
        }
    avg = sum/(STU_SUM);
    printf("平均分：%.2f",avg);
    return 0;

}