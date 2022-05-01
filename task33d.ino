const pin_t MY_LED = D3;
SYSTEM_THREAD(ENABLED);

int ledToggle(String command)
{
    if (command.equals("wave"))
    {
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);
        digitalWrite(MY_LED, HIGH);
        delay(1000);
        digitalWrite(MY_LED, LOW);
        delay(1000);
        return 1;
    }
    else if (command.equals("pat"))
    {
        digitalWrite(MY_LED, HIGH);
        delay(500);
        digitalWrite(MY_LED, LOW);
        delay(500);
        digitalWrite(MY_LED, HIGH);
        delay(500);
        digitalWrite(MY_LED, LOW);
        delay(500);
        digitalWrite(MY_LED, HIGH);
        delay(500);
        digitalWrite(MY_LED, LOW);
        delay(500);
        return 1;
    }
    return 0;
}
void setup() {
    
    pinMode(MY_LED, OUTPUT);
    Particle.function("Toggle", ledToggle);


}
void loop() {
}