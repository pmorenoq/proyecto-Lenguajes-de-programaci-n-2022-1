#ifndef Methods_h
#define Methods_h


class Methods{
    protected:
        int num_1;
        int num_2;
    
    public:
        int getNum_1();
        int getNum_2();
        void setNum_1(int num_1);
        void setNum_2(int num_2);
        int binary_add(int num_1, int num_2);
        int binary_subtract(int num_1, int num2);
        int binary_multiply(int num_1, int num_2);
        int binary_true_divide(int num_1, int num_2);
        
        
};
#endif