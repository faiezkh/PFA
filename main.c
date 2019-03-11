#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int abscisse;
    int ordonnee;
}point;
typedef struct{
    long id_switch;
    point location;
    int traffic_envoyee;
}switcher;
typedef struct{
    long id_controller;
    float prix;
    int nombre_port;
    int request_supportee;
    char type[20];
    //point location;
}controller;
typedef struct{
    char type[20];
    float bande_passante;
    double longueur;
}lien;
static int nombre_switcher=10;
static int nombre_controller=5;
static int packet_size=10;
static float max_delay_network=60000;
static float time_proccessing_packet;
static int nombre_possible_locations;
//le variable Xcp
int Xcp[nombre_possible_locations];//cardinalite of P
int Vcp_l[nombre_switcher,nombre_possible_locations]//cardinalite of S and P

int main()
{
    switcher tab_switcher[nombre_switcher];
    controller tab_controller[nombre_controller];
    point tab_locations[nombre_possible_locations];
    controller c1={125,1000,100,100,"xxx",{1,1}};
    controller c2={126,1001,10,150,"xxx",{3,1}};
    controller c3={125,1880,10,100,"xxx",{1,1}};
    controller c4={127,1000,107,190,"xxx",{5,7}};
    point p1={1,1};
    point p2={1,2};
    point p3={4,2};
    point p4={1,0};
    point p5={1,2};
    tab_controller[0]=c1;
    tab_controller[2]=c2;
    tab_controller[3]=c3;
    tab_controller[4]=c4;
    printf("%d",unicite_controller(tab_controller,p1));
    return 0;
}
