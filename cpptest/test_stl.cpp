#include <iostream>
#include <set>


struct Compare
{
        bool operator()(std::pair<int, int> a, std::pair<int, int> b)
        {   
            return a.first < b.first || (a.first ==b.first && a.second < b.second);
        }   
};

        typedef std::set<std::pair<int, int>, Compare> SetType;
int main()
{
        std::set<std::pair<int, int>, Compare> aset;
        aset.insert(std::pair<int, int>(1, 2));
        aset.insert(std::pair<int, int>(1, 2));
        aset.insert(std::pair<int, int>(1, 2));
        aset.insert(std::pair<int, int>(1, 3));
        aset.insert(std::pair<int, int>(2, 3));

        for(SetType::iterator it=aset.begin(); it!=aset.end(); ++it)
        {   
            std::cout<<it->first<<"\t"<<it->second<<std::endl;
        }   

        return 0;
}

