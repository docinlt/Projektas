# V0.1

**Programą, kuri nuskaito šiuos studentų duomenis:**
 - vardą ir pavardę
 - n atliktų namų darbų (nd) rezultatus (10-balėje sistemoje), o taip pat egzamino (egz) rezultatą.
- Tuomet iš šių duomenų, suskaičiuoja galutinį balą (galutinis):

*galutinis = 0.4 * vidurkis + 0.6 * egzaminas*

**Klasės duomenys:**
  - studento vardą ir pavardę;
  - namų darbų ir egzamino rezultatą;
  - galutinis pažymys.

**Klasės metodai:**

  - Konstruktorius 
  - Priskyrimo-kopijavimo operatorius
  - Kopijavimo konstruktorius
  - Destruktorius
  - Duomenų įvedimo metodas
  - Duomenų išvedimo metodas
  - Galutinio pažymio skaičiavimo metodas
  - Galutinis apskaičiuotas balas pateikiamas dviejų skaičių po kablelio tikslumu:

  ```
  Pavardė     Vardas       Galutinis (Vid.)
  --------------------------------------------------
  Arvydas     Sabonis      x.xx
  Rimas       Kurtinaitis  y.yy
  ...
```

# V0.1.1
**Duomenu papildymas:**
 - Papildyta programoje, kad vietoj vidurkio galutinio balo skaičiavimo būtų galima naudoti ir medianą.
```
Pavardė     Vardas       Galutinis (Vid.) / Galutinis (Med.)
-----------------------------------------------------------
Arvydas     Sabonis      x.xx               x.xx
Rimas       Kurtinaitis  y.yy               y.yy
...
```
 - Papildyta kad mokinio gautieji balai už namų darbus bei egzaminą būtų generuojami atsitiktinai.

# V0.1.2
 - Galimybė nuskaityti duomenis iš failo *kursiokai.txt*. 
 ```
Pavardė     Vardas      ND1  ND2   ND3  ND4  ND5  Egzaminas
Vardas1     Pavardė1    8    9     10   6    10   9
Vardas2     Pavardė2    7    10    8    5    4    6
...
```
- Po nuskaičiavimo duomenu iš failo, išvedimas rezultatas:
```
Pavardė     Vardas       Galutinis (Vid.) Galutinis (Med.)
----------------------------------------------------------
Vardas1     Pavardė1                 x.xx             x.xx
Vardas2     Pavardė2                 y.yy             y.yy
...
```
 - Studentu išvedimas surūšiuoti pagal vardus ir visi stulpeliai išlygiuoti. 
 - Atliktas kodo reorganizavimas.
 - Funkcijos ir nauji duomenų tipai (klasės) perkelti į .h failą.
 - Pritaikytas išimčių valdymas. 

# V0.2
Nauju studentų generavimas: 1 000, 10 000, 100 000, 1 000 000, 10 000 000.

Atlikta studentu rūšiavimas į dvi kategorijas:

-  Studentai, kurių galutinis balas < 5.0 vadinami “vargšiukai”.
-  Studentai, kurių galutinis balas >= 5.0 vadinami "kietiakiai".

Surūšiuoti studentai išvesti į du naujus failus: `vargsiukai.txt` `kietiakiai.txt`

Atlikta programos veikimo spartos analizę:

- Failų kūrimas.
- Duomenų nuskaitymą iš failų.
- Studentų rūšiavimas ir išvedimas į du naujus failus.

Programos testavimas:
```
1 000 studentu generavimas ir issaugojimas uztruko: 0.0100941 sekundes.
10 000 studentu generavimas ir issaugojimas uztruko: 0.0940954 sekundes.
100 000 studentu generavimas ir issaugojimas uztruko: 0.934243 sekundes.
1 000 000 studentu generavimas ir issaugojimas uztruko: 9.69477 sekundes.
10 000 000 studentu generavimas ir issaugojimas uztruko: 94.2855 sekundes.
```
```
1 000 studentu nuskaitymas uztruko: 0.0196079 sekundes.
10 000  studentu nuskaitymas uztruko: 0.202027 sekundes.
100 000  studentu nuskaitymas uztruko: 2.08346 sekundes.
1 000 000  studentu nuskaitymas uztruko: 20.117 sekundes.
10 000 000  studentu nuskaitymas uztruko: 209.615 sekundes.
```
```
1 000 studentu rusiavimas uztruko: 0.0028348 sekundes.
10 000  studentu rusiavimas uztruko: 0.0225809 sekundes.
100 000  studentu rusiavimas uztruko: 0.228028 sekundes.
1 000 000  studentu rusiavimas uztruko: 2.32511 sekundes.
10 000 000  studentu rusiavimas uztruko: 23.3341 sekundes.
```
# V0.2.1

 - Pridetas kontaineriu pasirinkimas: `Vector` `Deque` `List`
 
 **Skirtingų konteinerių testavimo rezultatai:**

**Vector**

**Failų kūrimas:**
```
1 000 studentu generavimas ir issaugojimas uztruko: 0.0117462 sekundes.
10 000 studentu generavimas ir issaugojimas uztruko: 0.114177 sekundes.
100 000 studentu generavimas ir issaugojimas uztruko: 1.14467 sekundes.
1 000 000 studentu generavimas ir issaugojimas uztruko: 12.9032 sekundes.
10 000 000 studentu generavimas ir issaugojimas uztruko: 115.425 sekundes.
```
**Duomenų nuskaitymas iš failų:**
```
1 000 studentu nuskaitymas uztruko: 0.0196079 sekundes.
10 000  studentu nuskaitymas uztruko: 0.202027 sekundes.
100 000  studentu nuskaitymas uztruko: 2.08346 sekundes.
1 000 000  studentu nuskaitymas uztruko: 20.117 sekundes.
10 000 000  studentu nuskaitymas uztruko: 209.615 sekundes.
```
**Studentų rūšiavimas į dvi grupes ir išsaugojimas:**
```
1 000 studentu rusiavimas uztruko: 0.0028348 sekundes.
10 000  studentu rusiavimas uztruko: 0.0225809 sekundes.
100 000  studentu rusiavimas uztruko: 0.228028 sekundes.
1 000 000  studentu rusiavimas uztruko: 2.32511 sekundes.
10 000 000  studentu rusiavimas uztruko: 23.3341 sekundes.
```

**Deque**

**Failų kūrimas:**
```
1 000 studentu generavimas ir issaugojimas uztruko: 0.0116282 sekundes.
10 000 studentu generavimas ir issaugojimas uztruko: 0.113923 sekundes.
100 000 studentu generavimas ir issaugojimas uztruko: 1.14888 sekundes.
1 000 000 studentu generavimas ir issaugojimas uztruko: 11.4728 sekundes.
10 000 000 studentu generavimas ir issaugojimas uztruko: 114.67 sekundes.
```
**Duomenų nuskaitymas iš failų:**
```
1 000 studentu nuskaitymas uztruko: 0.0193503 sekundes.
10 000  studentu nuskaitymas uztruko: 0.202718 sekundes.
100 000  studentu nuskaitymas uztruko: 2.05375 sekundes.
1 000 000  studentu nuskaitymas uztruko: 19.8391 sekundes.
10 000 000  studentu nuskaitymas uztruko: 206.56 sekundes.
```
**Studentų rūšiavimas į dvi grupes ir išsaugojimas:**
```
1 000 studentu rusiavimas uztruko: 0.002526 sekundes.
10 000  studentu rusiavimas uztruko: 0.0231674 sekundes.
100 000  studentu rusiavimas uztruko: 0.229066 sekundes.
1 000 000  studentu rusiavimas uztruko: 2.30468 sekundes.
10 000 000  studentu rusiavimas uztruko: 23.0783 sekundes.
```

**List**

**Failų kūrimas:**
```
1 000 studentu generavimas ir issaugojimas uztruko: 0.0116499 sekundes.
10 000 studentu generavimas ir issaugojimas uztruko: 0.114254 sekundes.
100 000 studentu generavimas ir issaugojimas uztruko: 1.13993 sekundes.
1 000 000 studentu generavimas ir issaugojimas uztruko: 11.3965 sekundes.
10 000 000 studentu generavimas ir issaugojimas uztruko: 115.076 sekundes.
```
**Duomenų nuskaitymas iš failų:**
```
1 000 studentu nuskaitymas uztruko: 0.0198067 sekundes.
10 000  studentu nuskaitymas uztruko: 0.201586 sekundes.
100 000  studentu nuskaitymas uztruko: 2.05774 sekundes.
1 000 000  studentu nuskaitymas uztruko: 19.8041 sekundes.
10 000 000  studentu nuskaitymas uztruko: 206.793 sekundes.
```
**Studentų rūšiavimas į dvi grupes ir išsaugojimas:**
```
1 000 studentu rusiavimas uztruko: 0.0026183 sekundes.
10 000  studentu rusiavimas uztruko: 0.0231942 sekundes.
100 000  studentu rusiavimas uztruko: 0.22894 sekundes.
1 000 000  studentu rusiavimas uztruko: 2.30861 sekundes.
10 000 000  studentu rusiavimas uztruko: 22.9593 sekundes.
```

  
# V1.0

- Sukurtas setup failas.


