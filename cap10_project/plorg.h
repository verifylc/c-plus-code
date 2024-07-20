#ifndef plorg_h_
#define plorg_h_
class plorg
{ 
    static const int MAX =19;
    char name_[MAX];
    int CI_;
public:
    plorg(const char * ch = "Plorga");
    void change_CI(int CI);
    void show()const;

};
#endif