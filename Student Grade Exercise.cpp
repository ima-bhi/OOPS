#include <bits/stdc++.h>

using namespace std;

class StudentMarks {
    private: string rollNo;
    string name;
    int s1,
    s2,
    s3;
    public: 
    StudentMarks(string rNo, string n, int m1, int m2, int m3) {
        rollNo = rNo;
        name = n;
        s1 = m1;
        s2 = m2;
        s3 = m3;
    }

    void setKeyvalue(string key, string v) {
        if (key == "r") {
            rollNo = v;
        } else if (key == "n") {
            name = v;
        } else if (key == "m1") {
            s1 = stoi(v);
        } else if (key == "m2") {
            s2 = stoi(v);
        } else if (key == "m3") {
            s3 = stoi(v);
        };
    }
    
    int totalMarks(){
        return s1+s2+s3;
    }
    
    char grades(int t){
        int p=t/3;
        if(p>60){
            return 'A';
        }else if(p < 60 && p>=40){
            return 'B';
        }else{
            return 'C';
        }
    }
};

int main() {
    StudentMarks S("A123","Abhi",78,70,45);
    int total=S.totalMarks();
    cout<<"Total Marks : "<<total <<endl;
    cout<<"Grade :"<<S.grades(total)<<endl;
    
    S.setKeyvalue("m1","22");
    
    cout<<"Total Marks : "<<S.totalMarks() <<endl;
    cout<<"Grade :"<<S.grades(S.totalMarks());
    return 0;
}
