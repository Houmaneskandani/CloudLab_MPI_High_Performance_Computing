#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <mpi.h>
int main(int argc, char *argv[]){
    int rank, size;
    MPI_Status status;
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&size);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    struct utsname uts;
    uname(&uts);
    printf("%d at %s\n",rank,uts.nodename);
    MPI_Finalize();
    
    return 0;
}
