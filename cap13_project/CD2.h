#ifndef  CD_H2_ 
#define  CD_H2_
class Cd {
private:
    char * performers;
    char * label;
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
    char * band;
public:
    Classic(char *s0, char * s1, char * s2, int n, double x);
    Classic();
    ~Classic();
    virtual void Report() const;
};
#endif