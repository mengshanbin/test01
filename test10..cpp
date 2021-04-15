# include <iostream>
# include <memory>
using namespace std ;
int main(){
    int * p = new int(10) ;
    unique_ptr<int> p1(new int(11)) ;
    unique_ptr<int> p2;
    p2.reset(p1.release());
    // p2.swap(p1) ;
    
    cout<<*p2<<endl ;
    return 0 ;
}