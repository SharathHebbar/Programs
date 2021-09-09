#include<bits/stdc++.h>

using namespace std;

class UserException: public exception{
    public:
    const char* what() const throw() {
        return "throwing from class";
    }
};

int main(){
   UserException u;
   try{
       throw u;
   }
   catch(UserException& e){
       cout<<e.what()<<endl;
   }

}