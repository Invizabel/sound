#define ULTRASONIC_PIN  9
void setup()
{
  // Timer1, toggle OC1A (Pin 9) on compare match
  TCCR1A = _BV(COM1A0);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  
  // 40 kHz output:
  OCR1A = 199;

  pinMode(ULTRASONIC_PIN, OUTPUT);
}

void loop()
{
}
