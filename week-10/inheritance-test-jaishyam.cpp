/*
3. Define a base class called Insurance with members of policy_no, policy holder name, age, address
and sum assured. Then define two derived classes as Life and General The life class has a member
for Premium mode- annual/semi-annual/quarterly/monthly, Nominee and policy term(no. of
years). The General class should include Vehicle no, vehicle type( car/two wheeler/bus) and cubic
capacity(cc). Implement appropriate member functions to input and display values.*/
#include<iostream>
using namespace std;
class Insurance
{
    protected:
    int policy_no,age;
    string name,address;
    float sum_ass;
    Insurance(int p, int a, string n, string ad, float s)
    {
        policy_no=p;
        age=a;
        name=n;
        address=ad;
        sum_ass=s;
    }
    void getData()
    {
    cout<<"Enter policy no:"<<endl;
    cin>>policy_no;
    cout<<"Enter Policyholder name:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
    cout<<"Enter address:"<<endl;
    cin>>address;
    cout<<"Enter ass sum:"<<endl;
    cin>>sum_ass;
    }
    void putData()
    {
    cout<<"----INSURANCE DETAILS----"<<endl;
    cout<<"POLICY NO:"<<policy_no<<endl;
    cout<<"POLICY HOLDER NAME:"<<name<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"ADDRESS:"<<address<<endl;
    cout<<"ASSURED SUM:"<<sum_ass<<endl;
    }
};
class Life:public Insurance
{
    string pre_mode,nominee;
    int policy_term;
    Life(string pre, string n, int y)
    {
        pre_mode=pre;
        nominee=n;
        policy_term=y;
    }
    void getData()
    {
        Insurance::getData();
        cout<<"Enter premium mode(Annual/Semi-annual/quarterly/monthly):"<<endl;
        cin>>pre_mode;
        cout<<"Enter nomineee:"<<endl;
        cin>>nominee;
        cout<<"Enter policy term:"<<endl;
        cin>>policy_term;
    }
    void putData()
    {
        Insurance::putData();
        cout<<"----LIFE----"<<endl;
        cout<<"PREMIUM MODE:"<<pre_mode<<endl;
        cout<<"NOMINEE:"<<nominee<<endl;
        cout<<"POLICY TERM:"<<policy_term<<endl;
    }
};
class General:public Insurance
{
    int veh_no;
    string veh_type;
    double capacity;
    void getData()
    {
        Insurance::getData();
        cout<<"Enter vehicle no:"<<endl;
        cin>>veh_no;
        cout<<"Enter vehicle type(car/two-wheeler/bus):"<<endl;
        cin>>veh_type;
        cout<<"Enter capacity:"<<endl;
        cin>>capacity;
    }
    void putData()
    {
        Insurance::putData();
        cout<<"----VEHICLE DETAILS----"<<endl;
        cout<<"VEHICLE NO:"<<veh_no<<endl;
        cout<<"VEHICLE TYPE:"<<veh_type<<endl;
        cout<<"CAPACITY:"<<capacity<<endl;
    }
};
main()
{
    Life l1(string a, string b, int c);
    l1.getData();
    l1.putData();
    General g1;
    g1.getData();
    g1.putData();
}