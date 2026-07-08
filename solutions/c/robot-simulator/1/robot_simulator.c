#include "robot_simulator.h"
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t robot;
    robot.direction = direction;
    robot.position.y = y;
    robot.position.x = x;

    return robot;
}

void robot_move(robot_status_t *robot, const char *commands){
    for (size_t i = 0; i < strlen(commands); i++){
        switch (commands[i]){
            case 'R': robot->direction = (robot->direction + 1) % 4;
                break;
            case 'L': robot->direction = (robot->direction - 1) % 4;
                break;
            case 'A': 
                switch (robot->direction){ 
                    case DIRECTION_EAST:
                        robot->position.x += 1; break;
                    case DIRECTION_NORTH: 
                        robot->position.y += 1; break;
                    case DIRECTION_WEST: 
                        robot->position.x -= 1; break;
                    case DIRECTION_SOUTH: 
                        robot->position.y -= 1; break;
                    default: break;
                }
        }
    }
}

