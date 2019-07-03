#define _time 1000
int led = 8;
char x;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if(Serial.available())
    {
      x = Serial.read();
      Morse_Led(x,led);
      Serial.println(x, DEC);
    }
}

void Morse_Led(int pin,char x)
{
  switch(x){
    case 'a':
    case 'A':Morse_dot(pin);Morse_dash(pin);break;
    case 'b':
    case 'B':Morse_dash(pin);Morse_dot(pin);Morse_dot(pin);Morse_dot(pin);break;
    case 'c':
    case 'C':Morse_dash(pin);Morse_dot(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 'd':
    case 'D':Morse_dash(pin);Morse_dot(pin);Morse_dot(pin);break;
    case 'e':
    case 'E':Morse_dot(pin);break;
    case 'f':
    case 'F':Morse_dot(pin);Morse_dot(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 'g':
    case 'G':Morse_dash(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 'h':
    case 'H':Morse_dot(pin);Morse_dot(pin);Morse_dot(pin);Morse_dot(pin);break;
    case 'i':
    case 'I':Morse_dot(pin);Morse_dot(pin);break;
    case 'j':
    case 'J':Morse_dot(pin);Morse_dash(pin);Morse_dash(pin);Morse_dash(pin);break;
    case 'k':
    case 'K':Morse_dash(pin);Morse_dot(pin);Morse_dash(pin);break;
    case 'l':
    case 'L':Morse_dot(pin);Morse_dash(pin);Morse_dot(pin);Morse_dot(pin);break;
    case 'm':
    case 'M':Morse_dash(pin);Morse_dash(pin);break;
    case 'n':
    case 'N':Morse_dash(pin);Morse_dot(pin);break;
    case 'o':
    case 'O':Morse_dash(pin);Morse_dash(pin);Morse_dash(pin);break;
    case 'p':
    case 'P':Morse_dot(pin);Morse_dash(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 'q':
    case 'Q':Morse_dash(pin);Morse_dash(pin);Morse_dot(pin);Morse_dash(pin);break;
    case 'r':
    case 'R':Morse_dot(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 's':
    case 'S':Morse_dot(pin);Morse_dash(pin);Morse_dot(pin);break;
    case 't':
    case 'T':Morse_dash(pin);break;
    case 'u':
    case 'U':Morse_dot(pin);Morse_dot(pin);Morse_dash(pin);break;
    case 'v':
    case 'V':Morse_dot(pin);Morse_dot(pin);Morse_dot(pin);Morse_dash(pin);break;
    case 'w':
    case 'W':Morse_dot(pin);Morse_dash(pin);Morse_dash(pin);break;
    case 'x':
    case 'X':Morse_dash(pin);Morse_dot(pin);Morse_dot(pin);Morse_dash(pin);break;
    case 'y':
    case 'Y':Morse_dash(pin);Morse_dot(pin);Morse_dash(pin);Morse_dash(pin);break;
    case 'z':
    case 'Z':Morse_dash(pin);Morse_dash(pin);Morse_dot(pin);Morse_dot(pin);break;
    case ' ':break;
    case '\n':break;
  };
}

void Morse_dot(int _pin)
{
  digitalWrite(_pin,HIGH);
  delay(_time);
  digitalWrite(_pin,LOW);
  delay(_time);
}

void Morse_dash(int _pin)
{
  digitalWrite(_pin,HIGH);
  delay(_time*4);
  digitalWrite(_pin,LOW);
  delay(_time);
}
