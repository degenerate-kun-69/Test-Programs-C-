#include<iostream>
#include<cmath>
using namespace std;
int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int divide(int a, int b){
    if(b==0){
        cout<<"Divide by Zero not allowed!"<<endl;
        return 0;
    }
    else{
    return a/b;
    }
}
int multiply(int a, int b){
    return a*b;
}
int main(){
    int num1,num2,choice;
    bool loop;
    string redo;
    do{
    cout<<"Welcome to calculator!"<<endl;
    cout<<"To start, Please enter one of the corresponding operation numbers from the available list:"<<endl;
    cout<<"1. Divide   : /"<<endl;
    cout<<"2. Multiply : *"<<endl;
    cout<<"3. Add      : +"<<endl;
    cout<<"4. Subtract : -"<<endl;
    cout<<"5. Power    : ^"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the divisor:"<<endl;
        cin>>num1;
        cout<<"Enter the dividend:"<<endl;
        cin>>num2;
        cout<<"The Answer is: "<<divide(num2,num1)<<endl;
        break;
    case 2:
        cout<<"Enter First number:"<<endl;
        cin>>num1;
        cout<<"Enter Second number:"<<endl;
        cin>>num2;
        cout<<"The Answer is: "<<multiply(num1,num2)<<endl;
        break;
    case 3:
        cout<<"Enter First number:"<<endl;
        cin>>num1;
        cout<<"Enter Second number:"<<endl;
        cin>>num2;
        cout<<"The Answer is: "<<add(num1,num2)<<endl;
        break;
    case 4:
        cout<<"Enter First number:"<<endl;
        cin>>num1;
        cout<<"Enter Second number:"<<endl;
        cin>>num2;
        cout<<"The Answer is: "<<subtract(num1,num2)<<endl;
        break;
    case 5:
        cout<<"Enter the First number:"<<endl;
        cin>>num1;
        cout<<"Enter the Second number:"<<endl;
        cin>>num2;
        cout<<"The Answer is: "<<pow(num1,num2)<<endl;
        break;    
    default:
    cout<<"Wrong choice entered! please use one of the available choices!"<<endl;
        break;
    }
    cout<<"Would you like to do another calculation? (Y/N)"<<endl;
    cin>>redo;
    if(redo=="Y"||redo=="y"){loop=true;}
    else{loop=false;}
    }while(loop);
    return 0;
}