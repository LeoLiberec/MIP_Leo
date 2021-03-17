#include <string>
#include <map>
#include "mbed.h"

DigitalOut led(LED1);

void mapaSymbolu();
void tecka();
void cara();
void symboly();
void morze(retezec);
string stringToMorse(retezec);

map <char, string> mapa;

void mapaSymbolu()
{
    mapa.insert(pair<char, string>('1', ".----"));
    mapa.insert(pair<char, string>('2', "..---"));
    mapa.insert(pair<char, string>('3', "...--"));
    mapa.insert(pair<char, string>('4', "....-"));
    mapa.insert(pair<char, string>('5', "....."));
    mapa.insert(pair<char, string>('6', "-...."));
    mapa.insert(pair<char, string>('7', "--..."));
    mapa.insert(pair<char, string>('8', "---.."));
    mapa.insert(pair<char, string>('9', "----."));
    mapa.insert(pair<char, string>('0', "-----"));

    mapa.insert(pair<char, string>('a', ".-"));
    mapa.insert(pair<char, string>('b', "-..."));
    mapa.insert(pair<char, string>('c', "-.-."));
    mapa.insert(pair<char, string>('d', "-.."));
    mapa.insert(pair<char, string>('e', "."));
    mapa.insert(pair<char, string>('f', "..-."));
    mapa.insert(pair<char, string>('g', "--."));
    mapa.insert(pair<char, string>('h', "...."));
    mapa.insert(pair<char, string>('i', ".."));
    mapa.insert(pair<char, string>('j', ".---"));
    mapa.insert(pair<char, string>('k', "-.-"));
    mapa.insert(pair<char, string>('l', ".-.."));
    mapa.insert(pair<char, string>('m', "--"));
    mapa.insert(pair<char, string>('n', "-."));
    mapa.insert(pair<char, string>('o', "---"));
    mapa.insert(pair<char, string>('p', ".--."));
    mapa.insert(pair<char, string>('q', "--.-"));
    mapa.insert(pair<char, string>('r', ".-."));
    mapa.insert(pair<char, string>('s', "..."));
    mapa.insert(pair<char, string>('t', "-"));
    mapa.insert(pair<char, string>('u', "--."));
    mapa.insert(pair<char, string>('v', "...-"));
    mapa.insert(pair<char, string>('w', ".--"));
    mapa.insert(pair<char, string>('x', "-..-"));
    mapa.insert(pair<char, string>('y', "-.--"));
    mapa.insert(pair<char, string>('z', "--.."));
}

int main() 
{
    string jmeno = "leo";
    mapaSymbolu();
    string morze = stringToMorse(jmeno);
    morze(morze);
}

void morze(string code) 
{
    for (int i = 0; i < code.length(); i++)
    {
        switch (code[i]) 
        {
        case '.':
            tecka();
            break;
        case '-':
            cara();
            break;
        }
    }
}

void tecka() {
    led = 1;
    wait(0.25);
    led = 0;
    wait(0.25);
}

void cara() 
{
    led = 1;
    wait(1);
    led = 0;
    wait(0.25);
}

string stringToMorse(string str) 
{
    string kod = "";
    for (int i = 0; i < str.length(); i++)
    {
        kod += morzeMapa[str[i]];
    }
    return kod;
}


