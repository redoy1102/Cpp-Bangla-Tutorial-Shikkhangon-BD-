//!If more than one class is inherited from the base class, it's known as hierarchical inheritance.
//In hierarchical inheritance, all features that are common in child classes are included in the base class.

//For example, Physics, Chemistry, Biology are derived from Science class. Similarly, Dog, Cat, Horse are derived from Animal class.

#include<iostream>
using namespace std;
class science{
    public:
    int PhyChapter[10] = {1,2,3,4,5,6,7,8,9,10};
    int ChemChapter[5] = {1,2,3,4,5};
    int BioChapter[5] = {1,2,3,4,5};
};
class physics:public science{
    public:
    int getChap(){
        cout<<"Chapters of physics = ";
        for (int i = 0; i < 10; i++)
        {
            cout<<PhyChapter[i]<<" ";
        }
        cout<<endl;
    }
};
class chemistry: public science{
    public:
    int getChap(){
        cout<<"Chapters of chemistry = ";
        for (int i = 0; i < 5; i++)
        {
            cout<<ChemChapter[i]<<" ";
        }
        cout<<endl;
    }
};
class biology: public science{
    public:
    int getChap(){
        cout<<"Chapters of biology = ";
        for (int i = 0; i < 5; i++)
        {
            cout<<BioChapter[i] <<" ";
        }
        cout<<endl;
    }
};
int main(){
    physics phyObj;
    chemistry chemObj;
    biology bioObj;
    phyObj.getChap();
    chemObj.getChap();
    bioObj.getChap();
    return 0;
}