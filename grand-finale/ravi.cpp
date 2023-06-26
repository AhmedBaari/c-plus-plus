#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class student
{
    string name;
    long reg_no;
    int total,m1,m2,m3;
    double avg;
    public:
    void get()
    {
        cout<<"enter the name";
        cin>>name;
        cout<<"enter teh regno";
        cin>>reg_no;
        cout<<"enter the marks";
        cin>>m1>>m2>>m3;
    }
    void cal()
    {
        total = m1+m2+m3;
        avg = total/3.0;
    }
    void display()
    {
        cout<<"name::"<<name<<endl;
        cout<<"reg_no::"<<reg_no<<endl;
        cout<<"total::"<<total<<endl;
        cout<<"average::"<<avg<<endl;
    }
    double check()
    {
        return avg;
    }
};
int main()
{
    student s;
    int i;
    double x;
    ofstream o("sample.txt",ios::binary);
    for(i=0;i<4;i++)
    {
        s.get();
        s.cal();
        o.write((char*)&s,sizeof(s));
    }
  o.close();
  cout<<"enter the input average";
  cin>>x;
  ifstream j("sample.txt",ios::binary);
  while(!j.eof())
  {
   j.read((char*)&s,sizeof(s)) ;
    if(s.check()>x)
    s.display();
  }
  return 0;

}