
/* Declare names for pin numbers */
const int red_led = 2;
const int green_led = 3;
const int blue_led = 4;
const int pin_array[3] = {2, 3, 4};

void dimming_function(const int led_pin);

void setup()
{
/* Led pins are output pins */
pinMode(red_led, OUTPUT);
pinMode(green_led, OUTPUT);
pinMode(blue_led, OUTPUT);
}

void loop()
{
int pin;
for (pin = 0; pin<=2; pin++) {
  dimming_function(pin_array[pin]);
}
pin = 0;

}

void dimming_function(const int led_pin)
{

int brightness;
int fade_direction = 1;
for(brightness = 1; (brightness <= 255 || brightness = 0); brightness + fade_direction) {
  analogWrite(led_pin, brightness);
  if (brightness = 255) {
    fade_direction = -1;
  }
}
}

