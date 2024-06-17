#include <iostream>
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
using namespace std;
void show_member(const box tmp_b[], int size); //按值传递
void cal_volume(box *tmp_b);//按地址传递
// void cal_volume_1(box (*tmp_b)[], int size);
int main()
{
    int size;
    box text[3] = {
         {"curry", 70, 80, 170, 80},
         {"fpga", 80, 90, 180, 80},
         {"ic", 90, 70, 160, 80},
    };
    size = sizeof(text)/sizeof(text[0]);
    cal_volume(&text[0]);
    cal_volume(&text[1]);
    cal_volume(&text[2]);
    show_member(text, size);
}
void show_member(const box tmp_b[], int size)
{
  for(int i = 0;i<size;i++)
  {
      cout << "# "<<i << " maker: ";
      cout << tmp_b[i].maker << " height: ";
      cout << tmp_b[i].height << " width: ";
      cout << tmp_b[i].width << " length: ";
      cout << tmp_b[i].length << " volume: ";
      cout << tmp_b[i].volume << endl;
  }
}
//arr[i] == *(arr+i)
//&arr[i] == arr+i
void cal_volume(box *tmp_b)
{ 
    tmp_b->volume = (tmp_b->height) + (tmp_b->width) + (tmp_b->length);
}
// void cal_volume_1( box (*tmp_b) [], int size)
// { 
//     for(int i = 0;i < size;i++)
//     {
//         tmp_b[i].volume = (tmp_b[i].height) + (tmp_b[i].width) + (tmp_b[i].length);
//     }

// }