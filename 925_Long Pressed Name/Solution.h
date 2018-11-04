
using namespace std;

class Solution{
public:
    bool isLongPressedName(string name, string typed) {
        if(typed.size()<name.size()) return false;
        int  i = 0, j = 0;
        char temp = 0;
        while(i!=name.size()&&j!=typed.size()){
            if(name[i]!=typed[j]) return false;
            else if(name[i]!=name[i+1]){
                temp = name[i];
                while(typed[j]==temp&&j<typed.size()) j++;
                i++;
            }
            else if(name[i]==name[i+1]){
                i++;
                j++;
            }
        }
        if(i==name.size()&&j==typed.size()) return true;
        return false;
    }

};
