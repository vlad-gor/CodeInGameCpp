#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main()
{
    int n;
    std::vector<int> values(n);
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        cin.ignore();
        values.push_back(t);
    }

    int min_t = 5527;
    for (int i = 0; i < n; i++)
    {
        if (abs(values[i]) < abs(min_t))
        {
            min_t = values[i];
        }
        else if (abs(values[i]) == abs(min_t))
        {
            if (values[i] > min_t)
            {
                min_t = values[i];
            }
        }
    }

    if(n){
        std::cout << min_t << std::endl;
    }
    else{
        std::cout << 0 << std::endl;
    }
    return 0;
}
