#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main()
  {
    int filedes;

    filedes = creat( "file",
                 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP );
    if( filedes != -1 ) {

      /* process file */

    }else{}

}

