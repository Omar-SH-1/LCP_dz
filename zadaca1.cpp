#include <iostream>
#include <vector>
#include <string>
std::string LCP(std::vector<std::string> vec){
	std:: string pref=vec[0];
    int a=vec.size();
	for(int i=1;i<a;++i)
    {
        while(vec[i].find(pref)!=0)
        {
            pref=pref.substr(0,pref.length()-1);
        }
        if(pref.empty()) return"";
    }
    return pref;
	}
int main(){
    std:: vector <std::string> stroki{"hello","hell","help"};
    std:: string res=LCP(stroki);
    std:: cout<<res<<"\n";
	}
