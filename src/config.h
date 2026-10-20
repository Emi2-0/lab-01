// config.h – parametrii nodului de achiziție
#ifndef CONFIG_H
#define CONFIG_H
#define SENSOR_PIN A0 // intrarea analogică a senzorului
#define SAMPLE_PERIOD_MS 115200 // perioada de eșantionare (ms)
#define SERIAL_BAUD 9600 // viteza portului serial
#endif
#define LED_PIN 13
#define BUTTON_PIN      2
#define SENSOR_PIN A0 // intrarea analogică a senzorului
<<<<<<< HEAD
#define SAMPLE_PERIOD_MS 100 // eșantionare rapidă pentru vibrații
=======
#define SAMPLE_PERIOD_MS 5000 // economie de energie (baterie)
>>>>>>> feature/economie-energie
#define SERIAL_BAUD 9600 // viteza portului serial
