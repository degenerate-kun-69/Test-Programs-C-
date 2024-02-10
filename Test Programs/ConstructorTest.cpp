#include<iostream>
using namespace std;
class constructorTest{
    int a,b;
    public://make everything available to parts outside class
    constructorTest(void);//declaration
    constructorTest(int, int);//parameterized & overloaded
    void print(){
        cout<<a<<b<<endl;
    }
};
constructorTest :: constructorTest(void){
    a = 10;
    b = 11;
}
constructorTest :: constructorTest(int x, int y){
    a= x;
    b=y;
}

int main(){
    constructorTest num;
    constructorTest num2 = constructorTest(9,15);//explicit call
    num.print();
    num2.print();
    return 0;
}