#include "sfml.h"
#include "util.h"

using namespace util;

int main() {

    SFML sfml(500,600,"Meu jogo!");
    sfml.background(0,0,0);

    int xo = -random(0,500);
    int yo = random(0,600);

    float x = 100;
    float speed = 5;


    while (sfml.windowIsOpen()) {

        sfml.clear();

        if (sfml.keyIsDown(SFML::Key::Left)) {
            x-=speed;
        } else if (sfml.keyIsDown(SFML::Key::Right)) {
            x+=speed;
        }

        if(x > 445){

            x = 445;

        }else if(x < 5) {

            x = 5;
        }

        sfml.ellipse(x, 530, 50, 50);

        yo += 3;

        if(yo > 600) {

            xo = random(0,460);
            yo = -random(0,550);
        }

        sfml.rect(xo,yo,40,40);

        sfml.display();
    }

    return 0;
}
