#include <stdio.h>
#include <string.h>


union example {
   int i;
   float f;
   char str[20];
};

int main()
{
   union example st;

   st.i = 10;
   printf( "st.i : %d\n", st.i);

   st.f = 220.5;
   printf( "st.f : %f\n", st.f);

   strcpy( st.str, "RAYHAN HUSSAIN");
   printf( "st.str : %s\n", st.str);

   return 0;
}
