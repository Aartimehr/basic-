
#include<bits/stdc++.h>
Using namespace std;
int main()
{

    std::set<char> a;

    a.insert('G');

    a.insert('F');

    a.insert('G');

    for (auto& str : a) {

        std::cout << str << ' ';

    }

    std::cout << '\n';

    return 0;
}
