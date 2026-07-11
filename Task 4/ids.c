#include <stdio.h>
#include <string.h>
#include "ids.h"

void generate_alert(const char *msg){
    printf("[ALERT] %s\n", msg);
}

void detect_intrusion(const char *packet){
    if(strstr(packet,"MALWARE") || strstr(packet,"ATTACK"))
        generate_alert("Suspicious network activity detected.");
    else
        printf("Packet OK: %s\n", packet);
}

void monitor_traffic(){
    const char *packets[]={"HELLO","ATTACK_SIGNATURE","NORMAL","MALWARE_SAMPLE"};
    for(int i=0;i<4;i++) detect_intrusion(packets[i]);
}
