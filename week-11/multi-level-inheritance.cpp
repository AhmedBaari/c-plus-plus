// In this program, we will try miltilevel inheritance

#include <iostream>
using namespace std;

// Let us make the base class
class base {
    private: int a;
    protected: int b;
    public: int c;

    // Let us make a constructor
    base() {
        a = 10;
        b = 20;
        c = 30;
    }

    // A constructor to display data
    void display() {
        cout << "BASE CLASS" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

class public1:public base {
    private: int d;
    protected: int e;
    public: int f;

    public1() {
        d = 40;
        e = 50;
        f = 60;
    }

    void display() {
        base::display();
        cout << "PUBLIC INHERITANCE CLASS" << endl;
    //  cout << "a = " << a << endl; INACCESSIBLE
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
        cout << "e = " << e << endl;
        cout << "f = " << f << endl;
    }
};

class protected2:protected public1 {
    private: int g;
    protected: int h;
    public: int i;

    protected2() {
        g = 40;
        h = 50;
        i = 60;
    }

        void display() {
        cout << "PROTECTED INHERITANCE CLASS" << endl;
    //  cout << "a = " << a << endl; INACCESSIBLE
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    //  cout << "d = " << d << endl; INACCESSIBLE
        cout << "e = " << e << endl;
        cout << "f = " << f << endl;
        cout << "g = " << g << endl;
        cout << "h = " << h << endl;
        cout << "i = " << i << endl;
    }
    
};

class private3:private protected2{
    private: int j;
    protected: int k;
    public: int l;

    private3():protected2() {
        j = 40;
        k = 50;
        l = 60;
    }

    void display() {
        // Lets try to call the parent class display function
        protected2::display();
        public1::display();
        base::display();
        // Only for constructors we can use this call in headerfile.


        cout << "PRIVATE INHERITANCE CLASS" << endl;
    //  cout << "a = " << a << endl; INACCESSIBLE
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    //  cout << "d = " << d << endl; INACCESSIBLE
        cout << "e = " << e << endl;
        cout << "f = " << f << endl;
    //  cout << "g = " << g << endl; INACCESSIBLE
        cout << "h = " << h << endl;
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
        cout << "k = " << k << endl;
        cout << "l= " << l << endl;
    }
};

class private4:protected private3 {
    private: int m;
    protected: int n;
    public: int o;

    private4() {
        m = 40;
        n = 50;
        o = 60;
    }

    void display() {
    // Lets try to call the parent class display function
        private3::display();
    //  protected2::display(); INACCESSIBLE
    //  public1::display(); INACCESSIBLE
    //  base::display(); INACCESSIBLE


        cout << "PRIVATE INHERITANCE CLASS" << endl;
    //  cout << "a = " << a << endl; INACCESSIBLE
    //  cout << "b = " << b << endl; INACCESSIBLE
    //  cout << "c = " << c << endl; INACCESSIBLE
    //  cout << "d = " << d << endl; INACCESSIBLE
    //  cout << "e = " << e << endl; INACCESSIBLE
    //  cout << "f = " << f << endl; INACCESSIBLE
    //  cout << "g = " << g << endl; INACCESSIBLE
    //  cout << "h = " << h << endl; INACCESSIBLE
    //  cout << "i = " << i << endl; INACCESSIBLE
    //  cout << "j = " << j << endl; INACCESSIBLE
        cout << "k = " << k << endl;
        cout << "l= " << l << endl;
    }
};

main () {
    // Let us make an object of the class
    base base_object;
    public1 public_object;
    protected2 protected_object;
    private3 private_object;
    private4 private_copy;

    // Let us display the data
    private_object.display();

    // Let us try to access the data members of each class
    cout << "BASE CLASS" << endl;
    //cout << "a = " << base_object.a << endl; // INACCESSIBLE
    //cout << "b = " << base_object.b << endl;
    cout << "c = " << base_object.c << endl;
    cout << endl;

    cout << "PUBLIC INHERITANCE CLASS" << endl;
    //cout << "d = " << public_object.d << endl;
    //cout << "e = " << public_object.e << endl;
    cout << "f = " << public_object.f << endl;
    cout << endl;

    cout << "PROTECTED INHERITANCE CLASS" << endl;
    // cout << "g = " << protected_object.g << endl; // INACCESSIBLE
    //cout << "h = " << protected_object.h << endl;
    cout << "i = " << protected_object.i << endl;
    cout << endl;

    cout << "PRIVATE INHERITANCE CLASS" << endl;
    // cout << "j = " << private_object.j << endl; // INACCESSIBLE
    //cout << "k = " << private_object.k << endl;
    cout << "l = " << private_object.l << endl;
    cout << endl;

    cout << "PRIVATE INHERITANCE CLASS" << endl;
    // cout << "m = " << private_copy.m << endl; // INACCESSIBLE
    //cout << "n = " << private_copy.n << endl;
    cout << "o = " << private_copy.o << endl;

    return 0;

}

