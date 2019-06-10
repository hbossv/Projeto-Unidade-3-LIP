#include "sfml.h"
#include "util.h"
#include <cstring>
#include <iostream>
#include <fstream>

using namespace util;
using namespace std;

int main()
{

    SFML sfml(700,700,"Car Dibre");
    sfml.background(0,0,0);
    sfml.textSize(20);

    Image carro1("carro_verde.png");
    Image carro2("carro_amarelo.png");
    Image carro3("carro_vermelho.png");
    Image carro4("carro_azul.png");
    Image carro5("carro_final.png");

    Image inimigo1("inimigo1.png");
    Image inimigo2("inimigo2.png");
    Image inimigo3("inimigo3.png");
    Image inimigo4("inimigo4.png");
    Image inimigo5("inimigo5.png");

    Image primavera ("primavera.png");
    Image grama("grama.png");
    Image arbusto1("arbusto1.png");

    Image outono("outono.png");
    Image arbusto2("arbusto2.png");
    Image folhas("folhas.png");

    Image inverno("inverno.png");
    Image arbusto3("arbusto3.png");
    Image neve("neve.png");

    Image asfalto("asfalto.png");
    Image caixablue("caixa_azul.png");
    Image heart("heart.png");
    Image acelerador("acelerador.png");
    Image freio("freio.png");

    Image gameover("gameover.png");

    Image kabum("explosion-sprite.png");
    bool animating = false;
    bool KeyPressed = false;

    char str[50] = "";

    int xanterior;
    int yanterior;
    int j = 0;
    int w = 100; //largura do objeto no sprite
    int h = 100; //altura do objeto no sprite

    Sound bum("explosion.wav");
    Sound vida("pegarvida.wav");
    Sound mudanivel("mudanivel.wav");
    Sound morreu("morreu.wav");

    Sound nivel1("nivel1.wav");
    Sound nivel2("nivel2.wav");
    Sound nivel3("nivel3.wav");
    Sound nivel4("nivel4.wav");

    char frase[100];
    char nome[50];

    int contaPontos = 0;

    int xobstaculo[10], yobstaculo[10];
    for(int i = 0; i < 10; i++)
    {

        xobstaculo[i] = random(210,450);
        yobstaculo[i] = -random(0, 7000);
    }

    int xtiro = -50, ytiro = 630;
    int vidas = 1;
    int xvida = random(210, 390), yvida = 0;

    int tela = 2;
    int nivel = 1;

    float xcarro = 100, ycarro = 580;
    float speed = 5;
    float vtiro = 3;
    bool atirar = true;
    bool toca = true;
    bool isplaying = false;

    while (sfml.windowIsOpen())
    {

        sfml.clear();


        if(tela == 1)
        {

            //Tela de Inicio

        }

        if(tela == 2)
        {

            //-------------------- Cenário(Grama - primavera - lado direito ): --------------------------------

            if(nivel == 1)
            {

                sfml.image(grama, 465, 0);
                sfml.image(grama, 465, 60);
                sfml.image(grama, 465, 120);
                sfml.image(grama, 465, 180);
                sfml.image(grama, 465, 240);
                sfml.image(grama, 465, 300);
                sfml.image(grama, 465, 360);
                sfml.image(grama, 465, 420);
                sfml.image(grama, 465, 480);
                sfml.image(grama, 465, 540);
                sfml.image(grama, 465, 600);
                sfml.image(grama, 465, 660);

                sfml.image(grama, 529, 0);
                sfml.image(grama, 529, 60);
                sfml.image(grama, 529, 120);
                sfml.image(grama, 529, 180);
                sfml.image(grama, 529, 240);
                sfml.image(grama, 529, 300);
                sfml.image(grama, 529, 360);
                sfml.image(grama, 529, 420);
                sfml.image(grama, 529, 480);
                sfml.image(grama, 529, 540);
                sfml.image(grama, 529, 600);
                sfml.image(grama, 529, 660);

                sfml.image(grama, 593, 0);
                sfml.image(grama, 593, 60);
                sfml.image(grama, 593, 120);
                sfml.image(grama, 593, 180);
                sfml.image(grama, 593, 240);
                sfml.image(grama, 593, 300);
                sfml.image(grama, 593, 360);
                sfml.image(grama, 593, 420);
                sfml.image(grama, 593, 480);
                sfml.image(grama, 593, 540);
                sfml.image(grama, 593, 600);
                sfml.image(grama, 593, 660);

                sfml.image(grama, 657, 0);
                sfml.image(grama, 657, 60);
                sfml.image(grama, 657, 120);
                sfml.image(grama, 657, 180);
                sfml.image(grama, 657, 240);
                sfml.image(grama, 657, 300);
                sfml.image(grama, 657, 360);
                sfml.image(grama, 657, 420);
                sfml.image(grama, 657, 480);
                sfml.image(grama, 657, 540);
                sfml.image(grama, 657, 600);
                sfml.image(grama, 657, 660);

                sfml.image(grama, 700, 0);
                sfml.image(grama, 700, 60);
                sfml.image(grama, 700, 120);
                sfml.image(grama, 700, 180);
                sfml.image(grama, 700, 240);
                sfml.image(grama, 700, 300);
                sfml.image(grama, 700, 360);
                sfml.image(grama, 700, 420);
                sfml.image(grama, 700, 480);
                sfml.image(grama, 700, 540);
                sfml.image(grama, 700, 600);
                sfml.image(grama, 700, 660);


            }

            //-------------------- Cenário(Grama - primavera - lado direito)--------------------------------

            //-------------------- Cenário(Grama - outono - lado direito ): --------------------------------

            if(nivel == 2)
            {

                sfml.image(folhas, 465, 0);
                sfml.image(folhas, 465, 60);
                sfml.image(folhas, 465, 120);
                sfml.image(folhas, 465, 180);
                sfml.image(folhas, 465, 240);
                sfml.image(folhas, 465, 300);
                sfml.image(folhas, 465, 360);
                sfml.image(folhas, 465, 420);
                sfml.image(folhas, 465, 480);
                sfml.image(folhas, 465, 540);
                sfml.image(folhas, 465, 600);
                sfml.image(folhas, 465, 660);

                sfml.image(folhas, 529, 0);
                sfml.image(folhas, 529, 60);
                sfml.image(folhas, 529, 120);
                sfml.image(folhas, 529, 180);
                sfml.image(folhas, 529, 240);
                sfml.image(folhas, 529, 300);
                sfml.image(folhas, 529, 360);
                sfml.image(folhas, 529, 420);
                sfml.image(folhas, 529, 480);
                sfml.image(folhas, 529, 540);
                sfml.image(folhas, 529, 600);
                sfml.image(folhas, 529, 660);

                sfml.image(folhas, 593, 0);
                sfml.image(folhas, 593, 60);
                sfml.image(folhas, 593, 120);
                sfml.image(folhas, 593, 180);
                sfml.image(folhas, 593, 240);
                sfml.image(folhas, 593, 300);
                sfml.image(folhas, 593, 360);
                sfml.image(folhas, 593, 420);
                sfml.image(folhas, 593, 480);
                sfml.image(folhas, 593, 540);
                sfml.image(folhas, 593, 600);
                sfml.image(folhas, 593, 660);

                sfml.image(folhas, 657, 0);
                sfml.image(folhas, 657, 60);
                sfml.image(folhas, 657, 120);
                sfml.image(folhas, 657, 180);
                sfml.image(folhas, 657, 240);
                sfml.image(folhas, 657, 300);
                sfml.image(folhas, 657, 360);
                sfml.image(folhas, 657, 420);
                sfml.image(folhas, 657, 480);
                sfml.image(folhas, 657, 540);
                sfml.image(folhas, 657, 600);
                sfml.image(folhas, 657, 660);

                sfml.image(folhas, 700, 0);
                sfml.image(folhas, 700, 60);
                sfml.image(folhas, 700, 120);
                sfml.image(folhas, 700, 180);
                sfml.image(folhas, 700, 240);
                sfml.image(folhas, 700, 300);
                sfml.image(folhas, 700, 360);
                sfml.image(folhas, 700, 420);
                sfml.image(folhas, 700, 480);
                sfml.image(folhas, 700, 540);
                sfml.image(folhas, 700, 600);
                sfml.image(folhas, 700, 660);


            }

            //-------------------- Cenário(Grama - primavera - lado direito)--------------------------------

            //-------------------- Cenário(Grama - inverno - lado direito ): --------------------------------

            if(nivel == 3 || nivel == 4)
            {

                sfml.image(neve, 465, 0);
                sfml.image(neve, 465, 60);
                sfml.image(neve, 465, 120);
                sfml.image(neve, 465, 180);
                sfml.image(neve, 465, 240);
                sfml.image(neve, 465, 300);
                sfml.image(neve, 465, 360);
                sfml.image(neve, 465, 420);
                sfml.image(neve, 465, 480);
                sfml.image(neve, 465, 540);
                sfml.image(neve, 465, 600);
                sfml.image(neve, 465, 660);

                sfml.image(neve, 529, 0);
                sfml.image(neve, 529, 60);
                sfml.image(neve, 529, 120);
                sfml.image(neve, 529, 180);
                sfml.image(neve, 529, 240);
                sfml.image(neve, 529, 300);
                sfml.image(neve, 529, 360);
                sfml.image(neve, 529, 420);
                sfml.image(neve, 529, 480);
                sfml.image(neve, 529, 540);
                sfml.image(neve, 529, 600);
                sfml.image(neve, 529, 660);

                sfml.image(neve, 593, 0);
                sfml.image(neve, 593, 60);
                sfml.image(neve, 593, 120);
                sfml.image(neve, 593, 180);
                sfml.image(neve, 593, 240);
                sfml.image(neve, 593, 300);
                sfml.image(neve, 593, 360);
                sfml.image(neve, 593, 420);
                sfml.image(neve, 593, 480);
                sfml.image(neve, 593, 540);
                sfml.image(neve, 593, 600);
                sfml.image(neve, 593, 660);

                sfml.image(neve, 657, 0);
                sfml.image(neve, 657, 60);
                sfml.image(neve, 657, 120);
                sfml.image(neve, 657, 180);
                sfml.image(neve, 657, 240);
                sfml.image(neve, 657, 300);
                sfml.image(neve, 657, 360);
                sfml.image(neve, 657, 420);
                sfml.image(neve, 657, 480);
                sfml.image(neve, 657, 540);
                sfml.image(neve, 657, 600);
                sfml.image(neve, 657, 660);

                sfml.image(neve, 700, 0);
                sfml.image(neve, 700, 60);
                sfml.image(neve, 700, 120);
                sfml.image(neve, 700, 180);
                sfml.image(neve, 700, 240);
                sfml.image(neve, 700, 300);
                sfml.image(neve, 700, 360);
                sfml.image(neve, 700, 420);
                sfml.image(neve, 700, 480);
                sfml.image(neve, 700, 540);
                sfml.image(neve, 700, 600);
                sfml.image(neve, 700, 660);


            }

            //-------------------- Cenário(Grama - inverno - lado direito)--------------------------------

            //------------------------ Cenário(Asfalto) ------------------------------

            sfml.image(asfalto, 200, 0);
            sfml.image(asfalto, 200, 140);
            sfml.image(asfalto, 200, 280);
            sfml.image(asfalto, 200, 420);
            sfml.image(asfalto, 200, 560);

            sfml.image(asfalto, 300, 0);
            sfml.image(asfalto, 300, 140);
            sfml.image(asfalto, 300, 280);
            sfml.image(asfalto, 300, 420);
            sfml.image(asfalto, 300, 560);

            sfml.image(asfalto, 400, 0);
            sfml.image(asfalto, 400, 140);
            sfml.image(asfalto, 400, 280);
            sfml.image(asfalto, 400, 420);
            sfml.image(asfalto, 400, 560);

            //------------------------ Cenário(Asfalto) ------------------------------


            //-------------------- Cenário(Grama - primavera): --------------------------------

            if(nivel == 1)
            {

                sfml.image(grama, 0, 0);
                sfml.image(grama, 0, 60);
                sfml.image(grama, 0, 120);
                sfml.image(grama, 0, 180);
                sfml.image(grama, 0, 240);
                sfml.image(grama, 0, 300);
                sfml.image(grama, 0, 360);
                sfml.image(grama, 0, 420);
                sfml.image(grama, 0, 480);
                sfml.image(grama, 0, 540);
                sfml.image(grama, 0, 600);
                sfml.image(grama, 0, 660);

                sfml.image(grama, 60, 0);
                sfml.image(grama, 60, 60);
                sfml.image(grama, 60, 120);
                sfml.image(grama, 60, 180);
                sfml.image(grama, 60, 240);
                sfml.image(grama, 60, 300);
                sfml.image(grama, 60, 360);
                sfml.image(grama, 60, 420);
                sfml.image(grama, 60, 480);
                sfml.image(grama, 60, 540);
                sfml.image(grama, 60, 600);
                sfml.image(grama, 60, 660);

                sfml.image(grama, 120, 0);
                sfml.image(grama, 120, 60);
                sfml.image(grama, 120, 120);
                sfml.image(grama, 120, 180);
                sfml.image(grama, 120, 240);
                sfml.image(grama, 120, 300);
                sfml.image(grama, 120, 360);
                sfml.image(grama, 120, 420);
                sfml.image(grama, 120, 480);
                sfml.image(grama, 120, 540);
                sfml.image(grama, 120, 600);
                sfml.image(grama, 120, 660);

                sfml.image(grama, 150, 0);
                sfml.image(grama, 150, 60);
                sfml.image(grama, 150, 120);
                sfml.image(grama, 150, 180);
                sfml.image(grama, 150, 240);
                sfml.image(grama, 150, 300);
                sfml.image(grama, 150, 360);
                sfml.image(grama, 150, 420);
                sfml.image(grama, 150, 480);
                sfml.image(grama, 150, 540);
                sfml.image(grama, 150, 600);
                sfml.image(grama, 150, 660);

                //-------------------- Cenário(Grama - primavera) ---------------------------------

                //------------------------ Cenário(Árvore - primavera): -------------------------------------

                sfml.image(primavera, 0, 5);
                sfml.image(primavera, 0, 70);
                sfml.image(primavera, 0, 150);
                sfml.image(primavera, 0, 230);
                sfml.image(primavera, 0, 310);
                sfml.image(primavera, 0, 390);
                sfml.image(primavera, 0, 470);
                sfml.image(primavera, 0, 550);
                sfml.image(primavera, 0, 630);

                sfml.image(primavera, 80, 5);
                sfml.image(primavera, 50, 70);
                sfml.image(primavera, 30, 150);
                sfml.image(primavera, 67, 230);
                sfml.image(primavera, 24, 310);
                sfml.image(primavera, 56, 390);
                sfml.image(primavera, 76, 470);
                sfml.image(primavera, 28, 550);


                //------------------------ Cenário(Árvore - primavera) -------------------------------------

                //------------------------ Cenário(Arbusto - primavera): -------------------------------------

                sfml.image(arbusto1, 187, 0);
                sfml.image(arbusto1, 187, 30);
                sfml.image(arbusto1, 187, 60);
                sfml.image(arbusto1, 187, 90);
                sfml.image(arbusto1, 187, 120);
                sfml.image(arbusto1, 187, 150);
                sfml.image(arbusto1, 187, 180);
                sfml.image(arbusto1, 187, 210);
                sfml.image(arbusto1, 187, 240);
                sfml.image(arbusto1, 187, 270);
                sfml.image(arbusto1, 187, 300);
                sfml.image(arbusto1, 187, 330);
                sfml.image(arbusto1, 187, 360);
                sfml.image(arbusto1, 187, 390);
                sfml.image(arbusto1, 187, 420);
                sfml.image(arbusto1, 187, 450);
                sfml.image(arbusto1, 187, 480);
                sfml.image(arbusto1, 187, 510);
                sfml.image(arbusto1, 187, 540);
                sfml.image(arbusto1, 187, 570);
                sfml.image(arbusto1, 187, 600);
                sfml.image(arbusto1, 187, 630);
                sfml.image(arbusto1, 187, 660);
                sfml.image(arbusto1, 187, 690);

                sfml.image(arbusto1, 495, 0);
                sfml.image(arbusto1, 495, 30);
                sfml.image(arbusto1, 495, 60);
                sfml.image(arbusto1, 495, 90);
                sfml.image(arbusto1, 495, 120);
                sfml.image(arbusto1, 495, 150);
                sfml.image(arbusto1, 495, 180);
                sfml.image(arbusto1, 495, 210);
                sfml.image(arbusto1, 495, 240);
                sfml.image(arbusto1, 495, 270);
                sfml.image(arbusto1, 495, 300);
                sfml.image(arbusto1, 495, 330);
                sfml.image(arbusto1, 495, 360);
                sfml.image(arbusto1, 495, 390);
                sfml.image(arbusto1, 495, 420);
                sfml.image(arbusto1, 495, 450);
                sfml.image(arbusto1, 495, 480);
                sfml.image(arbusto1, 495, 510);
                sfml.image(arbusto1, 495, 540);
                sfml.image(arbusto1, 495, 570);
                sfml.image(arbusto1, 495, 600);
                sfml.image(arbusto1, 495, 630);
                sfml.image(arbusto1, 495, 660);
                sfml.image(arbusto1, 495, 690);
            }

            //------------------------ Cenário(Arbusto - primavera) -------------------------------------

            //------------------------ Cenário(Folhas - outono): -------------------------------

            else if(nivel == 2)
            {

                sfml.image(folhas, 0, 0);
                sfml.image(folhas, 0, 60);
                sfml.image(folhas, 0, 120);
                sfml.image(folhas, 0, 180);
                sfml.image(folhas, 0, 240);
                sfml.image(folhas, 0, 300);
                sfml.image(folhas, 0, 360);
                sfml.image(folhas, 0, 420);
                sfml.image(folhas, 0, 480);
                sfml.image(folhas, 0, 540);
                sfml.image(folhas, 0, 600);
                sfml.image(folhas, 0, 660);

                sfml.image(folhas, 60, 0);
                sfml.image(folhas, 60, 60);
                sfml.image(folhas, 60, 120);
                sfml.image(folhas, 60, 180);
                sfml.image(folhas, 60, 240);
                sfml.image(folhas, 60, 300);
                sfml.image(folhas, 60, 360);
                sfml.image(folhas, 60, 420);
                sfml.image(folhas, 60, 480);
                sfml.image(folhas, 60, 540);
                sfml.image(folhas, 60, 600);
                sfml.image(folhas, 60, 660);

                sfml.image(folhas, 120, 0);
                sfml.image(folhas, 120, 60);
                sfml.image(folhas, 120, 120);
                sfml.image(folhas, 120, 180);
                sfml.image(folhas, 120, 240);
                sfml.image(folhas, 120, 300);
                sfml.image(folhas, 120, 360);
                sfml.image(folhas, 120, 420);
                sfml.image(folhas, 120, 480);
                sfml.image(folhas, 120, 540);
                sfml.image(folhas, 120, 600);
                sfml.image(folhas, 120, 660);

                sfml.image(folhas, 150, 0);
                sfml.image(folhas, 150, 60);
                sfml.image(folhas, 150, 120);
                sfml.image(folhas, 150, 180);
                sfml.image(folhas, 150, 240);
                sfml.image(folhas, 150, 300);
                sfml.image(folhas, 150, 360);
                sfml.image(folhas, 150, 420);
                sfml.image(folhas, 150, 480);
                sfml.image(folhas, 150, 540);
                sfml.image(folhas, 150, 600);
                sfml.image(folhas, 150, 660);

                //------------------------ Cenário(Folhas - outono) -------------------------------

                //------------------------ Cenário(Árvore - outono): -------------------------------------

                sfml.image(outono, 0, 0);
                sfml.image(outono, 0, 70);
                sfml.image(outono, 0, 150);
                sfml.image(outono, 0, 230);
                sfml.image(outono, 0, 310);
                sfml.image(outono, 0, 390);
                sfml.image(outono, 0, 470);
                sfml.image(outono, 0, 550);
                sfml.image(outono, 0, 630);

                sfml.image(outono, 80, 5);
                sfml.image(outono, 50, 70);
                sfml.image(outono, 30, 150);
                sfml.image(outono, 67, 230);
                sfml.image(outono, 24, 310);
                sfml.image(outono, 56, 390);
                sfml.image(outono, 76, 470);
                sfml.image(outono, 28, 550);

                //------------------------ Cenário(Árvore - outono) -------------------------------------

                //------------------------ Cenário(Arbusto - outono): -------------------------------------

                sfml.image(arbusto2, 187, 0);
                sfml.image(arbusto2, 187, 30);
                sfml.image(arbusto2, 187, 60);
                sfml.image(arbusto2, 187, 90);
                sfml.image(arbusto2, 187, 120);
                sfml.image(arbusto2, 187, 150);
                sfml.image(arbusto2, 187, 180);
                sfml.image(arbusto2, 187, 210);
                sfml.image(arbusto2, 187, 240);
                sfml.image(arbusto2, 187, 270);
                sfml.image(arbusto2, 187, 300);
                sfml.image(arbusto2, 187, 330);
                sfml.image(arbusto2, 187, 360);
                sfml.image(arbusto2, 187, 390);
                sfml.image(arbusto2, 187, 420);
                sfml.image(arbusto2, 187, 450);
                sfml.image(arbusto2, 187, 480);
                sfml.image(arbusto2, 187, 510);
                sfml.image(arbusto2, 187, 540);
                sfml.image(arbusto2, 187, 570);
                sfml.image(arbusto2, 187, 600);
                sfml.image(arbusto2, 187, 630);
                sfml.image(arbusto2, 187, 660);
                sfml.image(arbusto2, 187, 690);

                sfml.image(arbusto2, 495, 0);
                sfml.image(arbusto2, 495, 30);
                sfml.image(arbusto2, 495, 60);
                sfml.image(arbusto2, 495, 90);
                sfml.image(arbusto2, 495, 120);
                sfml.image(arbusto2, 495, 150);
                sfml.image(arbusto2, 495, 180);
                sfml.image(arbusto2, 495, 210);
                sfml.image(arbusto2, 495, 240);
                sfml.image(arbusto2, 495, 270);
                sfml.image(arbusto2, 495, 300);
                sfml.image(arbusto2, 495, 330);
                sfml.image(arbusto2, 495, 360);
                sfml.image(arbusto2, 495, 390);
                sfml.image(arbusto2, 495, 420);
                sfml.image(arbusto2, 495, 450);
                sfml.image(arbusto2, 495, 480);
                sfml.image(arbusto2, 495, 510);
                sfml.image(arbusto2, 495, 540);
                sfml.image(arbusto2, 495, 570);
                sfml.image(arbusto2, 495, 600);
                sfml.image(arbusto2, 495, 630);
                sfml.image(arbusto2, 495, 660);
                sfml.image(arbusto2, 495, 690);
            }

            //------------------------ Cenário(Arbusto - outono) -------------------------------------

            //-------------------- Cenário(Neve - inverno): --------------------------------

            if(nivel == 3 || nivel == 4)
            {

                sfml.image(neve, 0, 0);
                sfml.image(neve, 0, 60);
                sfml.image(neve, 0, 120);
                sfml.image(neve, 0, 180);
                sfml.image(neve, 0, 240);
                sfml.image(neve, 0, 300);
                sfml.image(neve, 0, 360);
                sfml.image(neve, 0, 420);
                sfml.image(neve, 0, 480);
                sfml.image(neve, 0, 540);
                sfml.image(neve, 0, 600);
                sfml.image(neve, 0, 660);

                sfml.image(neve, 60, 0);
                sfml.image(neve, 60, 60);
                sfml.image(neve, 60, 120);
                sfml.image(neve, 60, 180);
                sfml.image(neve, 60, 240);
                sfml.image(neve, 60, 300);
                sfml.image(neve, 60, 360);
                sfml.image(neve, 60, 420);
                sfml.image(neve, 60, 480);
                sfml.image(neve, 60, 540);
                sfml.image(neve, 60, 600);
                sfml.image(neve, 60, 660);

                sfml.image(neve, 120, 0);
                sfml.image(neve, 120, 60);
                sfml.image(neve, 120, 120);
                sfml.image(neve, 120, 180);
                sfml.image(neve, 120, 240);
                sfml.image(neve, 120, 300);
                sfml.image(neve, 120, 360);
                sfml.image(neve, 120, 420);
                sfml.image(neve, 120, 480);
                sfml.image(neve, 120, 540);
                sfml.image(neve, 120, 600);
                sfml.image(neve, 120, 660);

                sfml.image(neve, 150, 0);
                sfml.image(neve, 150, 60);
                sfml.image(neve, 150, 120);
                sfml.image(neve, 150, 180);
                sfml.image(neve, 150, 240);
                sfml.image(neve, 150, 300);
                sfml.image(neve, 150, 360);
                sfml.image(neve, 150, 420);
                sfml.image(neve, 150, 480);
                sfml.image(neve, 150, 540);
                sfml.image(neve, 150, 600);
                sfml.image(neve, 150, 660);


                //-------------------- Cenário(Neve - inverno) ---------------------------------

                //------------------------ Cenário(Arbusto - inverno): -------------------------------------

                sfml.image(arbusto3, 187, 0);
                sfml.image(arbusto3, 187, 30);
                sfml.image(arbusto3, 187, 60);
                sfml.image(arbusto3, 187, 90);
                sfml.image(arbusto3, 187, 120);
                sfml.image(arbusto3, 187, 150);
                sfml.image(arbusto3, 187, 180);
                sfml.image(arbusto3, 187, 210);
                sfml.image(arbusto3, 187, 240);
                sfml.image(arbusto3, 187, 270);
                sfml.image(arbusto3, 187, 300);
                sfml.image(arbusto3, 187, 330);
                sfml.image(arbusto3, 187, 360);
                sfml.image(arbusto3, 187, 390);
                sfml.image(arbusto3, 187, 420);
                sfml.image(arbusto3, 187, 450);
                sfml.image(arbusto3, 187, 480);
                sfml.image(arbusto3, 187, 510);
                sfml.image(arbusto3, 187, 540);
                sfml.image(arbusto3, 187, 570);
                sfml.image(arbusto3, 187, 600);
                sfml.image(arbusto3, 187, 630);
                sfml.image(arbusto3, 187, 660);
                sfml.image(arbusto3, 187, 690);

                sfml.image(arbusto3, 495, 0);
                sfml.image(arbusto3, 495, 30);
                sfml.image(arbusto3, 495, 60);
                sfml.image(arbusto3, 495, 90);
                sfml.image(arbusto3, 495, 120);
                sfml.image(arbusto3, 495, 150);
                sfml.image(arbusto3, 495, 180);
                sfml.image(arbusto3, 495, 210);
                sfml.image(arbusto3, 495, 240);
                sfml.image(arbusto3, 495, 270);
                sfml.image(arbusto3, 495, 300);
                sfml.image(arbusto3, 495, 330);
                sfml.image(arbusto3, 495, 360);
                sfml.image(arbusto3, 495, 390);
                sfml.image(arbusto3, 495, 420);
                sfml.image(arbusto3, 495, 450);
                sfml.image(arbusto3, 495, 480);
                sfml.image(arbusto3, 495, 510);
                sfml.image(arbusto3, 495, 540);
                sfml.image(arbusto3, 495, 570);
                sfml.image(arbusto3, 495, 600);
                sfml.image(arbusto3, 495, 630);
                sfml.image(arbusto3, 495, 660);
                sfml.image(arbusto3, 495, 690);

                //------------------------ Cenário(Arbusto - inverno) -------------------------------------

                //------------------------ Cenário(Árvore - inverno): -------------------------------------

                sfml.image(inverno, 0, 0);
                sfml.image(inverno, 0, 70);
                sfml.image(inverno, 0, 150);
                sfml.image(inverno, 0, 230);
                sfml.image(inverno, 0, 310);
                sfml.image(inverno, 0, 390);
                sfml.image(inverno, 0, 470);
                sfml.image(inverno, 0, 550);
                sfml.image(inverno, 0, 630);

                sfml.image(inverno, 75, 5);
                sfml.image(inverno, 50, 70);
                sfml.image(inverno, 30, 150);
                sfml.image(inverno, 67, 230);
                sfml.image(inverno, 24, 310);
                sfml.image(inverno, 46, 390);
                sfml.image(inverno, 76, 470);
                sfml.image(inverno, 28, 550);
            }

            //------------------------ Cenário(Árvore - inverno) -------------------------------------

            else if(nivel == 5)
            {

                sfml.background(random(0,255), random(0,255), random(0,255));
            }


            //------------------------ Vidas descendo: -------------------------------

            sfml.image(heart, xvida, yvida+=4);
            if(yvida > 690)
            {

                yvida = -3000;

            }

            if((xcarro > xvida) && (xcarro < xvida + 32)
                    && (ycarro > yvida) && (ycarro < yvida + 32))
            {

                yvida = -3000;
                vidas++;
                vida.play();

            }

            if((xcarro + 30 > xvida) && (xcarro + 30 < xvida + 32)
                    && (ycarro > yvida && ycarro < yvida + 32))
            {

                yvida = -3000;
                vidas++;
                vida.play();

            }

            if((xcarro > xvida) && (xcarro < xvida + 32)
                    && (ycarro + 65 > yvida) && (ycarro + 65 < yvida + 32))
            {

                yvida = -3000;
                vidas++;
                vida.play();

            }

            if((xcarro + 30 > xvida) && (xcarro + 30 < xvida + 32)
                    && (ycarro + 65 > yvida) && (ycarro + 65 < yvida + 32))
            {

                yvida = -3000;
                vidas++;
                vida.play();

            }
            //------------------------ Vidas descendo -------------------------------



            //---------------------------- Cenário(Lado direito): ---------------------------

            sfml.image(caixablue, 540, 52);
            sfml.image(caixablue, 540, 152);
            sfml.image(caixablue, 540, 252);
            sfml.image(freio, 540, 600);
            sfml.image(acelerador, 620, 560);


            //---------------------------- Cenário(Placar) ---------------------------

            //---------------------------- Movimentos do carro: ---------------------------

            if (sfml.keyIsDown(SFML::Key::Left))
            {

                xcarro -= speed;

            }
            else if(sfml.keyIsDown(SFML::Key::Right))
            {

                xcarro += speed;
            }

            if(xcarro > 460)
            {

                xcarro = 460;

            }
            else if(xcarro < 210)
            {

                xcarro = 210;
            }

            //---------------------------- Desenho carro: ----------------------------------
            if(nivel == 1)
            {

                sfml.image(carro1, xcarro, ycarro);
                if(toca)
                {

                    //nivel1.play();
                    toca = false;
                }

            }
            else if(nivel == 2)
            {

                if(!toca)
                {

                    //nivel1.stop();
                    //nivel2.play();
                    toca = true;
                }

                sfml.image(carro2, xcarro, ycarro);

            }
            else if(nivel == 3)
            {

                if(toca)
                {

                    //nivel2.stop();
                    //nivel3.play();
                    toca = false;
                }

                sfml.image(carro3, xcarro, ycarro);

            }
            else if(nivel == 4)
            {

                if(!toca)
                {

                    //nivel3.stop();
                    //nivel4.play();
                    toca = true;
                }

                sfml.image(carro4, xcarro, ycarro);

            }
            else if(nivel == 5)
            {

                speed = 7;
                if(toca)
                {

                    //nivel5.play();
                    toca = false;
                }

                sfml.image(carro5, xcarro, ycarro);

            }


            //---------------------------- Desenho carro -----------------------------------


            //---------------------------- Movimentos do carro ----------------------------

            //---------------------------- Tiro: ------------------------------------------
            if(!atirar)
            {

                ytiro -= vtiro;
                sfml.rect(xtiro,ytiro,5,10);
            }

            if(ytiro < 0)
            {

                xtiro = -50;
                ytiro = ycarro;
                atirar = true;

            }
            if(sfml.keyIsDown(SFML::Key::Space) && atirar)
            {

                xtiro = xcarro+22.5;
                atirar = false;
            }

            //---------------------------- Tiro ------------------------------------------

            //---------------------------- Texto: ----------------------------------------

            sprintf(frase, "Pontos: %d", contaPontos);
            sfml.text(frase, 547,53);

            sprintf(frase, "Vidas: %d", vidas);
            sfml.text(frase, 550,153);

            sprintf(frase, "Nivel: %d", nivel);
            sfml.text(frase, 550, 253);

            //---------------------------- Texto -----------------------------------------

            // --------------------------- Inimigo: --------------------------------------

            for(int i = 0; i < 10; i++)
            {

                // ----------------------- Niveis: ---------------------------------------
                yobstaculo[i] += 3;
                nivel = 1;

                if(contaPontos >= 10)
                {
                    yobstaculo[i] += 2.6;
                    nivel = 2;
                }
                if(contaPontos >= 30)
                {
                    yobstaculo[i] += 2.7;
                    nivel = 3;
                }
                if(contaPontos >= 50)
                {
                    yobstaculo[i] += 2.8;
                    nivel = 4;
                }
                if(contaPontos >= 70)
                {
                    yobstaculo[i] += 2.9;
                    nivel = 5;
                }
            }

            // ----------------------- Niveis ----------------------------------------

            for(int i = 0; i < 10; i++)
            {
                if(yobstaculo[i] > 680)
                {

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);
                    contaPontos++;
                }
            }

            // ------------------------------- Colisão(Carros): -----------------------------------

            for(int i = 0; i < 10; i++)
            {

                if((xcarro > xobstaculo[i] && xcarro < xobstaculo[i] + 30)
                        && (ycarro > yobstaculo[i] && ycarro < yobstaculo[i] + 70))
                {

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);
                    vidas--;

                }

                if((xcarro + 30 > xobstaculo[i] && xcarro + 30 < xobstaculo[i] + 30)
                        && (ycarro > yobstaculo[i] && ycarro < yobstaculo[i] + 70))
                {

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);
                    vidas--;

                }

                if((xcarro > xobstaculo[i] && xcarro < xobstaculo[i] + 30)
                        && (ycarro + 70 > yobstaculo[i] && ycarro + 70 < yobstaculo[i] + 70))
                {

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);
                    vidas--;

                }

                if((xcarro + 30 > xobstaculo[i] && xcarro + 30 < xobstaculo[i] + 30)
                        && (ycarro + 70 > yobstaculo[i] && ycarro + 70 < yobstaculo[i] + 70))
                {

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);
                    vidas--;

                }
            }

            // ------------------------------- Colisão(Carros) -----------------------------------

            // --------------------------- Inimigo -----------------------------------------------

            // ------------------------------- Colisão(Tiro): -----------------------------------

            for(int i = 0; i < 10; i++)
            {
                bool colidirTiro = (dist(xtiro+2.5, ytiro+5, xobstaculo[i]+20, yobstaculo[i]+20) < 19) ? true : false;
                if(colidirTiro)
                {

                    animating = true;
                    xtiro = -50;
                    ytiro = ycarro;
                    atirar = true;
                    contaPontos++;

                    xanterior = xobstaculo[i];
                    yanterior = yobstaculo[i];

                    xobstaculo[i] = random(210,460);
                    yobstaculo[i] = -random(0,7000);

                }

                if(animating)
                {
                    sfml.image(kabum,xanterior-w/3,yanterior-h/3,(i%9)*w,(i/9)*h,w,h);
                    j++;
                    if(j == 81)
                    {
                        animating = false;
                        j = 0;
                    }
                }
            }

            //---------------------------- Desenho inimigo: ----------------------------------

            for(int i = 0; i < 10; i++)
            {

                if(nivel == 1)
                {

                    sfml.image(inimigo1, xobstaculo[i], yobstaculo[i]);

                }
                else if(nivel == 2)
                {

                    sfml.image(inimigo2, xobstaculo[i], yobstaculo[i]);

                }
                else if(nivel == 3)
                {

                    sfml.image(inimigo3, xobstaculo[i], yobstaculo[i]);

                }
                else if(nivel == 4)
                {

                    sfml.image(inimigo4, xobstaculo[i], yobstaculo[i]);

                }
                else if(nivel == 5)
                {

                    sfml.image(inimigo5, xobstaculo[i], yobstaculo[i]);
                }

            }

            //---------------------------- Desenho inimigo -----------------------------------

            // ------------------------------- Colisão(Tiro) ---------------------------------

            // ------------------------------- Troca Tela(Carro): ----------------------------
            if(vidas == 0)

            {
                sfml.image(gameover, -90, 0);

                sprintf(nome, "Digite seu nome: %s", str);
                if(!KeyPressed)
                {

                    if(sfml.keyIsDown(SFML::Key::A))
                    {
                        strcat(str,"A");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::B))
                    {
                        strcat(str,"B");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::C))
                    {
                        strcat(str,"C");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::D))
                    {
                        strcat(str,"D");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::E))
                    {
                        strcat(str,"E");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::F))
                    {
                        strcat(str,"F");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::G))
                    {
                        strcat(str,"G");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::H))
                    {
                        strcat(str,"H");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::I))
                    {
                        strcat(str,"I");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::J))
                    {
                        strcat(str,"J");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::K))
                    {
                        strcat(str,"K");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::L))
                    {
                        strcat(str,"L");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::M))
                    {
                        strcat(str,"M");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::N))
                    {
                        strcat(str,"N");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::O))
                    {
                        strcat(str,"O");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::P))
                    {
                        strcat(str,"P");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::Q))
                    {
                        strcat(str,"Q");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::R))
                    {
                        strcat(str,"R");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::S))
                    {
                        strcat(str,"S");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::T))
                    {
                        strcat(str,"T");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::U))
                    {
                        strcat(str,"U");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::V))
                    {
                        strcat(str,"V");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::X))
                    {
                        strcat(str,"X");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::Y))
                    {
                        strcat(str,"Y");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::Z))
                    {
                        strcat(str,"Z");
                        KeyPressed = true;
                    }
                    else if(sfml.keyIsDown(SFML::Key::W))
                    {
                        strcat(str,"W");
                        KeyPressed = true;
                    }
                    else
                    {
                        KeyPressed = false;
                    }
                }

                sfml.text(nome, 210,400);
                //tela = 3;

            }
        }


        if(tela == 3)
        {

            sfml.image(gameover, -90, 0);

            if(!isplaying)
            {
                morreu.play();
                isplaying = true;
            }

            sprintf(frase, "Try Again -> Press Enter");
            sfml.text(frase, 210,400);
            sprintf(frase, "Ranking -> Press SPACE");
            sfml.text(frase, 220,470);

            // ------------------------------- Troca Tela (3) ------------------------------------

            if(sfml.keyIsDown(SFML::Key::Enter))
            {
                tela = 2;
                vidas = 3;
                contaPontos = 0;
            }

            if(sfml.keyIsDown(SFML::Key::Space))
            {
                //Ranking
            }
        }

        sfml.display();

    }

    return 0;
}
