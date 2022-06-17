#define pin 11

#define ra 440
#define ra2 220
#define ras 466
#define si 494
#define Do 262
#define Do2 523
#define dos 277
#define re 294
#define res 311
#define mi 330
#define fa 349
#define fas 370
#define so 392
#define so2 196
#define sos 415
#define d delay(350)
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
}

void loop() {
  tone(pin,re,500);
  d;
  tone(pin,ra,500);
  d;
  tone(pin,so,500);
  d;
  tone(pin,fa,500);
  d;
  tone(pin,so,500);
  d;//
  tone(pin,ra,340);
  d;
  delay(400);
  tone(pin,re,220);
  d;d;//
  tone(pin,so,500);
  d;
  tone(pin,ra,500);
  d;
  tone(pin,so,500);
  d;
  tone(pin,fa,500);
  d;d;
  delay(100);
  tone(pin,Do,200);
  delay(300);
  tone(pin,Do,200);
  delay(300);
  tone(pin,Do,200);
  delay(300);d;
  tone(pin,so,500);
  d;
  tone(pin,ra,500);
  delay(200);
  tone(pin,so,500);
  d;
  tone(pin,fa,500);
  d;
  tone(pin,re,600);
  d;d;
  tone(pin,mi,500);
  d;d;
  tone(pin,fa,500);
  d;
  tone(pin,so,500);
  d;
  tone(pin,fa,500);
  d;
  tone(pin,mi,500);
  d;delay(200);
  tone(pin,ra2,250);
  d;
  tone(pin,ra2,250);
  d;
  tone(pin,ra2,250);
  d;d;
  tone(pin,ra2,500);
  d;
  tone(pin,so2,500);
  d;
  tone(pin,ra2,600);
  d;
  tone(pin,233,600);
  d;
  tone(pin,ra2,600);
  d;d;d;
  tone(pin,re,500);
  d;
  tone(pin,re,500);
  d;
  tone(pin,ra,500);
  d;
  tone(pin,so,250);
  d;d;
  tone(pin,fa,250);
  d;d;
  tone(pin,so,600);
  d;d;
  tone(pin,ra,250);
  d;d;
  tone(pin,mi,250);
  d;
  tone(pin,re,600);
  d;d;
  tone(pin,mi,500);
  d;
  tone(pin,fa,500);
  d;d;
  tone(pin,re,500);
  d;//
  tone(pin,ra,500);
  d;d;
  tone(pin,so,400);
  d;
  tone(pin,fas,250);
  d;
  tone(pin,so,250);
  d;
  tone(pin,ra,250);
  d;
  while(1);
}
