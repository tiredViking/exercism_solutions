#include "darts.h"

uint8_t score(coordinate_t landing_position){
    
    float hit_radius = sqrt((pow(landing_position.x, 2) + pow(landing_position.y, 2)));

    if (hit_radius <= 1 && hit_radius >= -1) return 10;
    else if (hit_radius <= 5 && hit_radius >= -5) return 5;
    else if (hit_radius <= 10 && hit_radius >= -10) return 1;
    else return 0;

}