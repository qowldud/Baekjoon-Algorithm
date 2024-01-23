#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int korea;
    int english;
    int math;
};

bool compare(Student& st1, Student& st2){
    if(st1.korea == st2.korea){
        if(st1.english == st2.english){
            if(st1.math == st2.math) return st1.name < st2.name;
            else return st1.math > st2.math;
        } else return st1.english < st2.english;
    } else return st1.korea > st2.korea;
}

int main(void){
    int num;
    cin>>num;

    Student st[num];

    for(int i = 0; i < num; i++){
        string name;
        int a,b,c;
        cin>>name>>a>>b>>c;
        st[i] = {name,a,b,c};
    }

    sort(st, st+num, compare);

    for(int i = 0; i < num; i++){
        cout<<st[i].name<<'\n';
    }
}