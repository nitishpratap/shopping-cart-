#include <iostream>
#include<stdlib.h>

using namespace std;


    class shop
    {
        int price1,price2,price3,price4,price5,price6,price7,price8,price9,price10;
        int temp;
        void bill();
    public:
        int count1,count2,count3,count4,count5,count6,count7,count8,count9,count10;
        void setdata();
        void welcome();
        void ratelist();
        void choose();
        void cart();

        int total(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j);

    };
    void shop::setdata()
    {
        price1=35;
        price2=40;
        price3=10;
        price4=20 ;
        price5=12;
        price6=35 ;
        price7=10 ;
        price8=20 ;
        price9=75 ;
        price10=20;
        count1=count2=count3=count4=count5=count6=count7=count8=count9=count10=0;
       // int temp=1;
    }
    void shop::welcome()
    {
        cout<<"\t\tWelcome to Mahi Mart"<<endl;
        cout<<"\n";
         cout<<"\n";
          cout<<"\n";
           cout<<"\n";
            cout<<"\n";
            cout<<"items\t\t\t\t";cout<<"codes";
        cout<<"\n";
        cout<<"\n";
        cout<<"Rice:\t\t35";cout<<"\t\tcode-: 1 "<<endl;
        cout<<"Flour:\t\t40";cout<<"\t\tcode-: 2 "<<endl;
        cout<<"Biscuit:\t10";cout<<"\t\tcode-: 3"<<endl;
        cout<<"Bisleri:\t20";cout<<"\t\tcode-: 4"<<endl;
        cout<<"Maggi:\t\t12"; cout<<"\t\tcode-: 5 "<<endl;
        cout<<"coke:\t\t35";   cout<<"\t\tcode-: 6"<<endl;
        cout<<"Paties:\t\t10";  cout<<"\t\tcode-: 7"<<endl;
        cout<<"Toothpaste:\t20";cout<<"\t\tcode-: 8"<<endl;
        cout<<"Dove sampoo:\t75";cout<<"\t\tcode-: 9"<<endl;
        cout<<"Rough copy:\t20";cout<<"\t\tcode-: 10"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Cart:\t\t\t";cout<<"        code-: 0"<<endl;
        cout<<"exit:\t\t";cout<<"  \t        code-: 11"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Enter code of items for purchages"<<endl;

        while(1)
        {
            choose();
        }
    }
    void shop::choose()
    {
        int num;
        cin>>num;
        switch(num)
        {
        case 1:
            cout<<"You want rice,we have best rice of this season"<<endl;
            cout<<"Enter quantity in kg for rice"<<endl;
            cin>>count1;
            cout<<count1<<" kg Rice has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 2:
            cout<<"We have best flour"<<endl;
            cout<<"NOTE-: Enter quantity in kg for floor"<<endl;
            cin>>count2;
            cout<<count2<<" kg Flour has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 3 :
            cout<<"Enter Quantity of Biscuit you want to purchage"<<endl;
            cin>>count3;
            cout<<count3<<" Biscuit has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 4:
            cout<<"Enter Quantity of Bisleri you want to purchage"<<endl;
            cin>>count4;
            cout<<count4<<" Bisleri has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 5:
            cout<<"Enter Quantity of Maggi you want to purchage"<<endl;
            cin>>count5;
            cout<<count5<<" Packet Maggi has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 6:
            cout<<"Enter Quantity of Coke you want to purchage"<<endl;
            cin>>count6;
            cout<<count6<<" Bottle coke has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 7:
            cout<<"Enter Quantity of Paties you want to purchage"<<endl;
            cin>>count7;
            cout<<count7<<" Paties has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 8:
            cout<<"Enter Quantity of Sampoo you want to purchage"<<endl;
            cin>>count8;
            cout<<count8<<" Sampoo has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 9:
            cout<<"Enter Quantity of Rough Copy you want to purchage"<<endl;
            cin>>count9;
            cout<<count9<<" Rough Copy has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 10:
            cout<<"Enter Quantity of item you want to purchage"<<endl;
            cin>>count10;
            cout<<count10<<" kg Rice has been added"<<endl;
            cout<<"select more item or enter 0 for cart"<<endl;
            break;
        case 0:
            cart();
        case 11:
            cout<<"thanking for shopping with us "<<endl;
            cout<<"exiting"<<endl;
            default:
                exit(1);

            break;
        }}
        int shop::total(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
        {
            return((a*price1+b*price2+c*price3+d*price4+e*price5+f*price6+g*price7+h*price8+i*price9+j*price10));
        }
        void shop::cart()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"cart"<<endl;
            if(count1!=0)
                cout<<count1<<" "<<"Rice"<<endl;
            else
                cout<<endl;
            if(count2!=0)
                cout<<count2<<" "<<"floor"<<endl;
            else
                cout<<endl;
            if(count3!=0)
                cout<<count3<<" "<<"Biscuit"<<endl;
            else
                cout<<endl;
            if(count4!=0)
                cout<<count4<<" "<<"Bisleri"<<endl;
            else
                cout<<endl;
            if(count5!=0)
                cout<<count5<<" "<<"Maggi"<<endl;
            else
            cout<<endl;
            if(count6!=0)
                cout<<count6<<" "<<"coke"<<endl;
            else
                cout<<endl;
            if(count7!=0)
                cout<<count7<<" "<<"Paties"<<endl;
            else
                cout<<endl;
            if(count8!=0)
                cout<<count8<<" "<<"Toothpaste"<<endl;
            else
                cout<<endl;
            if(count9!=0)
                cout<<count9<<" "<<"Sampoo"<<endl;
            else
                cout<<endl;
            if(count10!=0)
                cout<<count10<<" "<<"Rough copy"<<endl;
            else
                cout<<endl;
            cout<<"Total price in cart="<<" "<<total(count1,count2,count3,count4,count5,count6,count7,count8,count9,count10)<<endl;

            if(count1+count2+count3+count4+count5+count6+count7+count8+count9+count10==0)
            {
                cout<<"Cart is empty"<<endl;
                cout<<"Select any item or inter zero to exit"<<endl;
            }
            return;
        }
        void shop:: bill()
        {
            int money;
            money=total(count1,count2,count3,count4,count5,count6,count7,count8,count9,count10);
            cout<<"Total price in cart is "<<money<<endl;
        }




    int main()
    {
       shop ob1;
        ob1.setdata();
        ob1.welcome();



    return 0;

}
