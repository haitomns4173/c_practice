/* strftime example */
#include <stdio.h>      /* puts */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];
  char buffer2 [25];

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  strftime (buffer,80,"Now it's %I:%M %p.",timeinfo);
  puts (buffer);

  strftime (buffer2,25,"Now it's %d",timeinfo);
  puts (buffer2);

  return 0;
}