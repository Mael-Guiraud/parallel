
int coupling(int* s1, int* s2);
void cpy_state(int* s1, int* s2);
void initStateMIN(int* s);
void initStateMAX(int* s);
void initState(int* s);
int sniffer_machine();
void write_result_file(FILE * f,int inter_size,double rounds,double time);
void free_res();
void alloc_res();
int sniffer_interval();
int better(int *s1,int*s2,int*s3,int*s4);
