#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>


struct instr_t {
    union {
        uint32_t imm22 : 22;

        struct {
            union {
                uint32_t imm17: 17;
                struct {
                    uint8_t shamt: 5;
                    uint8_t mode : 2;
                    uint16_t imm10 : 10;
                };
            };
            uint8_t rb : 5;
        };
    };

    uint8_t ra : 5;
    uint8_t op : 5;
};


struct Student {
   int  :0 ;
   int  roll_no: 3; 
   char name[20];
};
int main () {
   FILE *of;
   of= fopen ("c1.txt", "w");
   if (of == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   
    struct Student inp1 = {};
    inp1.roll_no = 7;
    strcpy(inp1.name, "Ram");

    //struct Student inp1 = { .roll_no = 7, .name = "Ram"};
   fwrite (&inp1, sizeof(struct Student), 1, of);
   if(fwrite != 0)
      printf("Contents to file written successfully !\n");
   else
      printf("Error writing file !\n");
   fclose (of);
   FILE *inf;
   struct Student inp;
   inf = fopen ("c1.txt", "r");
   if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&inp, sizeof(struct Student), 1, inf))
      printf ("roll_no = %d name = %s\n", inp.roll_no, inp.name);
   fclose (inf);
}
