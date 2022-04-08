#include <Stepper.h> //dodajemy do szkicu bibliotekę obsługującą silniki krokowe

#define ILOSC_KROKOW 32 //definiujemy stałą gdzie podajemy ilość kroków zależną od użytego silnika w naszym przypadku 32

Stepper silnik(ILOSC_KROKOW, 6, 5, 3, 2); //tutaj podajemy piny w Arduino, którymi sterujemy silnikiem

void setup()

{
silnik.setSpeed(500);
silnik.step(1024);

}

void loop ()

{

//silnik.setSpeed(500); //podajemy prędkość obrotu wyrażona w rpm 

//silnik.step(1024); //linijka powoduje obrót ośki silnika o 90 stopni

//delay(2000); // linijka powoduje odczekanie 2 sekund (wartosc w milisekundach 1000 = 1s)



}
