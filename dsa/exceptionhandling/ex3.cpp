#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    try{
        if(n == 0)
            throw "Division by zero";
        if(n == 1)
            throw n;
        if(n == 2)
            throw false;
        if(n == 3)
            throw 3.142;
        else 
            throw 3.12f;
        
    }
    catch(const char* x){
        cout<<x<<endl;
    }
    catch(float x){
        cout<<x<<endl;
    }
    catch(double x){
        cout<<x<<endl;
    }
    catch(int x){
        cout<<x<<endl;
    }
    catch(bool x){
        cout<<x<<endl;
    }
        catch(...){
        cout<<"Default\n";
    }

}