#ifndef  CD_H_ 
#define  CD_H_
class Cd {
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic:public Cd{
private:
    char band[50];
public:
    Classic(char *s0, char * s1, char * s2, int n, double x);
    Classic();
    virtual void Report() const;
};
#endif