#include <stdio.h>

int main() 
{
    enum {
        GEAR_STATE_UP,
        GEAR_STATE_DOWN,
        GEAR_STATE_TRANSITION
    } gearState = GEAR_STATE_UP;

    char input;

    printf("Airplane Landing Gear Control\n");
    printf("Enter 'd' to lower the gear, 'u' to raise the gear, or 'q' to quit:\n");

    while (1) {
        switch (gearState)
        {
            case GEAR_STATE_UP:
                printf("Landing gear is up\n");
                break;
            case GEAR_STATE_DOWN:
                printf("Landing gear is down\n");
                break;
            case GEAR_STATE_TRANSITION:
                printf("Landing gear is transitioning\n");
                break;
        }

       
        scanf(" %c", &input);

        if (input == 'q' || input == 'Q') 
        {
            break;
        }

        switch (gearState) {
            case GEAR_STATE_UP:
                if (input == 'd' || input == 'D') 
                {
                    gearState = GEAR_STATE_TRANSITION;
                }
                break;
            case GEAR_STATE_DOWN:
                if (input == 'r' || input == 'R') 
                {
                    gearState = GEAR_STATE_TRANSITION;
                }
                break;
            case GEAR_STATE_TRANSITION:
                if (input == 'u' || input == 'U')
                {
                    gearState = GEAR_STATE_UP;
                } else if (input == 'd' || input == 'D')
                {
                    gearState = GEAR_STATE_DOWN;
                }
                break;
        }
    }

    return 0;
}

