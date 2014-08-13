#include<stdlib.h>

int main()
{
int return_value,return_wlan=0;


return_value=system("lspci | egrep -i --color 'wifi|wlan|wireless'");
if(system("iwconfig wlan0 ap off"))
printf("%d",return_wlan);
else
exit(0);


}
