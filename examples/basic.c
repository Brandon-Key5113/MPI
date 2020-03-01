#include <mpi.h>

#include <stdio.h>

int main( int argc, char **argv )
{
  int numtasks, rank, rc;
  rc = MPI_Init( &argc, &argv );
  if (rc != MPI_SUCCESS) {
    printf( "Error starting MPI.\n" );
    MPI_Abort( MPI_COMM_WORLD, rc );
  }

  MPI_Comm_size( MPI_COMM_WORLD, &numtasks );
  MPI_Comm_rank( MPI_COMM_WORLD, &rank );

  printf( "Number of tasks = %d\nMy rank = %d\n", numtasks, rank );

  MPI_Finalize();
}
