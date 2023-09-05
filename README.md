
# WJ_FEAR

WJ project MAX/MSP project

# INSTRUKCJA

- Pliki audio pobierasz z ***tutaj będzie link*** i wrzucasz do folderu media

- Odpalasz projekt w presentation mode

- Podłączasz arduino (włączanie arduino IDE już nawet nie jest potrzebne, kod jest już wgrany bezpośrednio na płytkę z tego co rozumiem)

- Odpalasz maxową konsolę

- Klikasz "view avalible devices" w projekcie

- Paytzysz gdzie jest arduino i wybierasz literkę

- Klikasz inicjalizację i tyle, powinno działać

- Ustawienie arudino smoothera zależą od konkretnej pozycji czujnika, a więc też są do sprawdzenia

## Roadmap

- ~~Arduino kod do Arduino IDE - umiem zrobić, potrzebuję fizycznego czujnika~~

- ~~Arduino w MAX/MSP - wstępna wersja już w projekcie, dokończenie wymaga fizycznego czujnika~~

- Wstępna kalibracja

- ~~Interfejs do uruchamiania~~

- ~~Muzyka~~

- GOGLE VR - ~~model +~~ wysyłanie dźwięku na gogle

## Do przemyślenia

- Pozycjonowanie głowy + ambisoniczny dźwięk

## Kod do Arduino IDE

```
int sensorValue; //czujka pin 12

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {

if (digitalRead(12) == 0)  {sensorValue = 0;}
else
{sensorValue = 1;}
  Serial.println(sensorValue);
  delay(5);  // delay in between reads for stability
}
```
