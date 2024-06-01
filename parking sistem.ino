#include <Servo.h> //library servo

Servo myservo; // membuat variabel servo untuk dikendalikan

int pos = 0; // deklarasi variabel untuk posisi sudut

void setup()

{

 myservo.attach(3); //deklarasi servo pada pin 3

}

void loop()

{

  for(pos = 0; pos < 180; pos+= 1) // perulangan untuk posisi 0 sampai 180 derajat

  { // step setiap 1 derajat

   myservo.write(pos); // memerintahkan servo ke posisi derajat sesuai nilai variabel pos

   delay(5); // menunggu 15 milidetik

  }

  for(pos = 180; pos>=1; pos-=1) // perulangan untuk posisi 180 sampai 0 derajat

  {

   myservo.write(pos); // memerintahkan servo ke posisi derajat sesuai nilai variabel pos

   delay(5); // menunggu 15 milidetik

  }

}
