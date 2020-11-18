#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void remove_spaces(std::string& str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {   
        std::string::iterator begin = it;
        while (it != str.end() && ::isspace(*it) )it++;
        if (it - begin > 0)
            it = str.erase(begin, it) - 1;
    }
}

int check_number(std::string& card){
    remove_spaces(card);
    int sum1=0;
    int sum2=0;

    for(int i=0;i<card.length();i++){
        if(i%2==0){
            int num1=(card[i]-'0')*2;
            if(num1>=10)
            {
                sum1+=num1-9;
            }
            else{
                sum1+=num1;
            }
        }
        else{
            sum2+=(card[i]-'0');
        }
    }
    
    if((sum1+sum2)%10==0){
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        std::string card;
        getline(cin, card);
        if (check_number(card)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
