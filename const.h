

////////////////COMMON PART//////////////////////
#define NB_QUEUES 2


/////////////////FOR MASTER/////////////////////
//Number of servers connected ot the master
#define NB_MACHINES 1


//The parameters of the simulation loop
#define SEQUENCE_SIZE 300000
#define NB_SIMULS 1
#define INTERVAL_SIZE_MIN 55000
#define INTERVAL_SIZE_MAX 55000

#define STEP 5000

#define MOD 1 // 0 For round count, 1 for optimized version


//The maximum number of clients in a queue
#define BUFF_MAX 100


////////////////////For servers///////////////////////

#define EXEC_TYPE 0 // 0 = 127.0.0.1 / 1=192.168.90.178

#define SizeDistrib 3*NB_QUEUES
#define LOAD 1.0
