#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
        int temp,out1,out2,a,b,c;
            //cin >> temp;
              temp=atoi (argv[1]); 
               a= temp/100;
                    if(a == 1 || a == 4 || a == 7)
                    {
                                out1= (a-1)*100+99;//최소
                                        out2= 100*(a+1);//최대
                                                cout<<out1<<" "<<out2;
                                                        return 0;
                                                            
                    }
                     
                     b=(temp/10)%10;
                        if(b == 1 || b == 4 || b == 7){
                                    out1= a*100+(b-1)*10+9;//최소
                                            out2= a*100+(b+1)*10;//최대
                                                    cout<<out1<<" "<<out2;
                                                            return 0;
                                                                
                        }
                         
                            c= temp%10;
                            if(c == 1 || c == 4 || c == 7){
                                        out1= a*100+b*10+c-1;
                                                out2= a*100+b*10;
                                                        cout<<out1<<" "<<out2;
                                                                return 0;
                                                                    
                            }
                             
                                cout << temp;
                                    return 0;
                                    
}
