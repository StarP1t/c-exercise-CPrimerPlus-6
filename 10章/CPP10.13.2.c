#define COL 5

void copy_arr(double targ[], const double init[], int len);
void copy_ptr(double targ[], const double init[], int len);
void copy_ptrs(double targ[], const double init_start[], const double init_end[]);

int main(void)
{
    double source[COL] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[COL];
    double target2[COL];
    double target3[COL];

    copy_arr(target1, source, COL);
    copy_ptr(target2, source, COL);
    copy_ptrs(target3, source, source + COL); // 此参数会报warning（空指针）

    return 0;
}

void copy_arr(double targ[], const double init[], int len)
{
    for (int i = 0; i < len; i++)
        targ[i] = init[i];
}

void copy_ptr(double targ[], const double init[], int len)
{
    for (int i = 0; i < len; i++)
        *(targ + i) = *(init + i);
}

void copy_ptrs(double targ[], const double init_start[], const double init_end[])
{
    for (int i = 0; init_start + i < init_end; i++)
        targ[i] = init_start[i];
}