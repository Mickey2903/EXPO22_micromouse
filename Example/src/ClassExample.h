/* dit is de header file
hierin staat alle informatie over de gebruikte functies in de class*/

/* ClassExample_h mag worden veranderd in alles,
dit dient alleen om te kijken of de file al bestaat,
gebruik niet twee keer de zelfde tekst in verschillende files.

het is het netst om de file naam te gebruiken*/
#ifndef ClassExample_h 
#define ClassExample_h 

// plaats hier de andere files die vanuit deze class worden aangeroepen, ook de arduino header
#include "Arduino.h"

// plaats hier alle defines
#define State0 0
#define State1 1

//dit is de class constructor
class ClassName
{
    public: // hierin staan de fucties die binnen en buiten de class kunnen worden aangeroepen
        ClassName(); //dit is de initialiser, deze wordt gebruikt bij Object Oriented Programming
        void fuctie0();
        void functie1(int arg1, str arg2);

    private: // hierin staan de fucties dia aleen binnen de class kunnnen worden aangeroepen
        void functie2();
        int functie3(int arg3, bool arg4);

};

extern ClassName ExternName;// met ExternName roep je de class aan vanuit andere files
#endif