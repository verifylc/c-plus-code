#ifndef sale_h_
#define sale_h_
class sale
{
private:    
    enum {QUARTERS = 4};
    double sales_[QUARTERS];
    double average_;
    double max_;
    double min_;
public:
    sale(const double ar[], int n);
    void setSales();
    void showSales()const;
};
#endif