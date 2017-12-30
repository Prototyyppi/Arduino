
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
dimming_function(pin_array);
}

void dimming_function(const int led_pin[])
{

int brightness_1 = 0, brightness_2 = 0, brightness_3 = 0;
int fade_direction = 1;
int brightness_2_trigd = 0;
int brightness_3_trigd = 0;
int speed_randint_1, speed_randint_2;
while (true){
speed_randint_1 = random(1, 3);
speed_randint_2 = random(1, 3);
for (brightness_1 = 1; (brightness_1 <= 255 || brightness_1 = 0); brightness_1 = brightness_1 + fade_direction) {
  analogWrite(led_pin[0], brightness_1);
  analogWrite(led_pin[1], brightness_2);
  analogWrite(led_pin[2], brightness_3);
  
  if (brightness_1 = 255)
    fade_direction = -1;

/* For led 2 */
  if (brightness_2_trigd == 1) {
    brightness_2 += speed_randint_1 * -1;
    if (brightness_2 < 5) {
    brightness_2_trigd == 0;
    brightness_2 += speed_randint_1 * 1;
    }
  }
  else {
    brightness_2 += speed_randint_1 * 1;
    if (brightness2 > 250)
      brightness_2_trigd == 1;
  }

  /* For led 3 */
  if (brightness_3_trigd == 1) {
    brightness_3 += speed_randint_2 * -1;
    if (brightness_2 < 5) {
    brightness_3_trigd == 0;
    brightness_3 += speed_randint_2 * 1;
    }
  }
  else {
    brightness_3 += speed_randint_2 * 1;
    if (brightness3 > 250)
      brightness_3_trigd == 1;
  }
}
}
}

