//部分參考gpt並自行修改
#include <iostream>
#include <vector>
#include <algorithm>

void gps(const std::vector<int>& elements, std::vector<int>& cp, std::vector<bool>& used) 
{
    if (cp.size() == elements.size()) 
	{
        for (size_t i = 0; i < cp.size(); ++i) 
		{
            std::cout << cp[i] << " ";
        }
        std::cout << std::endl;
    } 
	else 
	{
        for (size_t i = 0; i < elements.size(); ++i) 
		{
            if (!used[i]) 
			{
                used[i] = true;
                cp.push_back(elements[i]);
                gps(elements, cp, used);
                used[i] = false;
                cp.pop_back();
            }
        }
    }
}

int main() 
{
    std::vector<int> elements_to_permute;
    elements_to_permute.push_back(1);
    elements_to_permute.push_back(2);
    elements_to_permute.push_back(3);

    std::vector<int> cp;
    std::vector<bool> used(elements_to_permute.size(), false);

    gps(elements_to_permute, cp, used);

    return 0;
}
//以下是輸出
//1 2 3
//1 3 2
//2 1 3
//2 3 1
//3 1 2
//3 2 1
