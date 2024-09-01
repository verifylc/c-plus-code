#ifndef ABC_H_
#define ABC_H_
#include <iostream>
class abc
{
private:
    char *label;
    int rating;
public:
    abc(const char * l = "null", int r =1);
    abc(const abc & a);
    virtual ~abc() = 0;
    virtual void view()const;
    abc & operator=(const abc & a);
    friend std::ostream & operator<<(std::ostream & os, const abc & a);
};

class basedma:public abc
{
public:
    basedma(const char * l= "null", int r= 0);
    friend std::ostream & operator<<(std::ostream & os, const basedma & b);
};

class lacksdma: public abc
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksdma(const char * c = "blank", const char * l = "null", int r = 0);
    lacksdma(const char *c, const abc & a);
    // lacksdma(const lacksdma & rs);
    virtual void view()const;
    friend std::ostream & operator<<(std::ostream & os, const lacksdma & rs);
};

class hasdma : public abc
{
private:
    char * style;
public:
    hasdma(const char * s = "none", const char * l = "null", int r = 0);
    hasdma(const char * s, const abc & a);
    hasdma(const hasdma & h);
    ~hasdma();
    virtual void view()const;
    hasdma & operator=(const hasdma & h);
    friend std::ostream & operator<<(std::ostream & os, const hasdma & h);
};
#endif