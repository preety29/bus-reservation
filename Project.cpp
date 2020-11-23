#include<iostream>
#include<cstdlib>
using namespace std ;
 class Buss {
 protected :
       string name;
       int age;
       int mob_num;
 public:
    virtual int getseat(){}
   // virtual int add(){}
    Buss():name(),age(0),mob_num(0){}
    Buss(string a,int b,int c):name(a),age(b),mob_num(c){}
    void read (){
    cout << "Enter your Name :";
      cin >> name;
      getline(cin,name);
      cout << "Enter your Age :";
      cin >> age;
      cout << "Enter your Mobile Number :";
      cin >> mob_num;
    }
    void display () {
        cout << "Name :" << name << endl << "Age :" << age << endl << "Mobile Number :" << mob_num << endl ;
    }
 };
class Soudia : public Buss {
  // private :
       //string seat = 64;
   public :
      void read () {
              Buss :: read ();
      }
      void display (){
            Buss :: display ();
      }
};
class SAC : public Soudia {
   private :
       int seat = 36 ;
   public:
         int getseat(){return seat;}
        void read (){
              Soudia :: read ();
        }
         void display (){
            Soudia :: display ();
        }
};
class SNON : public Soudia {
  private :
       int seat = 64;
  public :
      int getseat(){return seat;}
     void read (){
            SAC :: Soudia read ();
        }
         void display (){
            SAC :: Soudia display ();
        }
};
class Syamoli : public Buss {
  // private :
       //string seat = 64;
   public :
      void read () {
         Syamoli :: Buss read ();
      }
      void display (){
            Syamoli :: Buss display ();
      }
};
class SSAC : public Syamoli {
   private :
       int seat = 42 ;
   public:
         int getseat(){return seat;}
        void read (){
            SSAC :: Syamoli read ();
        }
         void display (){
            SSAC :: Syamoli display ();
        }
};
class SSNON : public Syamoli {
  private :
       int seat = 70;
  public :
      int getseat(){return seat;}
     void read (){
            SSAC :: Syamoli read ();
        }
         void display (){
            SSAC :: Syamoli display ();
        }
};
int main () {
   cout << "welcome to our online ticket reserve system" << endl;
     Buss* b[100];
     int ch,y,t=0,x,choice,w=0;
     for(int i=0;i<100;i++){
     cout << "Which Bus Would you like to travel"<<endl<<"press 1 for soudia" <<endl<<"press 2 for shyamoli"<< endl<<"press 3 for exit"<<endl;
     cin >> ch;
    if(ch==1){
        b[i]=new Soudia;
        cout << "press 1 for ac"<<endl<< "press 2 for non ac " << endl;
          cin >> ch;
            if(ch==1){
         b[i]=new SAC;
         b[i]->read();
        cout  << "available seats :"<<b[i]->getseat()-w<<endl;
        cout<<"each seats value is 1250 taka :" << endl;
        cout<<"how many seats you want to buy" << endl;
        cin >>t;
        w=t+w;
        y=b[i]->getseat()-w;
        x=t*1250;
        b[i]->display();
        cout << "your Total Amount is :" << x << endl;
        cout <<"your seats : "<<t<<endl;
        cout << "seats remains :" << y << endl;

      }
      else if(ch==2){
          b[i]=new SNON;
           b[i]->read();
           cout  << "available seats :"<<b[i]->getseat()-w<<endl;
           cout<<"each seats value is 490 taka :" << endl;
          cout<<"how many seats you want to buy" << endl;
           cin >>t;
           w=w+t;
            y=b[i]->getseat()-w;
            x=t*490;
           b[i]->display();
          cout << "Your Totall amount is :" << x << endl ;
          cout <<"your seats : "<<t<<endl;
           cout << "seats remains :" << y << endl;
      }
    }
    else if(ch==2){
        b[i]=new Syamoli;
        cout << "press 1 for ac"<<endl<< "press 2 for non ac " << endl;
          cin >> choice;
        if(choice==1){
        b[i]=new SSAC;
         b[i]->read();
        cout  << "available seats :"<<b[i]->getseat()-w<<endl;
        cout<<"each seats value is 1000 taka :" << endl;
        cout<<"how many seats you want to buy" << endl;
        cin >>t;
        w=t+w;
        y=b[i]->getseat()-w;
        x=t*1000;
        b[i]->display();
        cout <<"your seats : "<<t<<endl;
        cout << "your Total Amount is :" << x << endl;
        cout << "seats remains :" << y << endl;
      }
      else if(choice==2){
          b[i]=new SSNON;
           b[i]->read();
           cout  << "available seats :"<<b[i]->getseat()-w<<endl;
           cout<<"each seats value is 300 taka :" << endl;
          cout<<"how many seats you want to buy" << endl;
           cin >>t;
           w=w+t;
            y=b[i]->getseat()-w;
            x=t*300;
           b[i]->display();
          cout << "Your Totall amount is :" << x << endl ;
          cout <<"your seats : "<<t<<endl;
           cout << "seats remains :" << y << endl;
      }
    }
    else if (ch==3){
            cout<<"THANK YOU FOR CHOOSING US"<<endl;
        exit(1);
    }
     }
   return 0;
}

