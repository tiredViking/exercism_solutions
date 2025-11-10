#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float earth_years = seconds / 31557600;
    
    switch (planet){
        case 0: return earth_years / 0.2408467; break;
        case 1: return earth_years / 0.61519726; break;
        case 2: return earth_years; break;
        case 3: return (earth_years / 1.8808158); break;
        case 4: return (earth_years / 11.862615); break;
        case 5: return earth_years / 29.447498; break;
        case 6: return earth_years / 84.016846; break;
        case 7: return earth_years / 164.79132; break;
        default: return -1; break;
    }
}