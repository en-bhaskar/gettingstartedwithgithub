#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) 
{
        char *check[50];
        wlan_on(check);

        return 0;
}

void wlan_off(char *command[50]) // function to deactivate wireless interface
{
        strcpy(command, "ifconfig wlan0 down");
        system(command);
}

void wlan_on(char *command[50]) // function to activate wireless interface
{
        strcpy(command, "ifconfig wlan0 up");
        system(command);
}

