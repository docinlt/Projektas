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
