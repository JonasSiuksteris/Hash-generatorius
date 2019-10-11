# Hash-generatorius
1-oji užduotis: Hash generatorius

Kriterijai:

1. Maišos funkcijos įėjimas (angl. input) gali būti bet kokio dydžio simbolių eilutė (angl. string).
Input saugomas string tipo kintamajame

2. Maišos funkcijos išėjimas (angl. output) visuomet yra to paties fiksuoto dydžio rezultatas.
Output visada yra 20 simboliu ilgio string tipo kintamasis

3. Maišos funkcijos reikšmė/kodas (hash‘as) bet kokiai input reikšmėi yra apskaičiuojamas nesunkiai - efektyviai.
Kuo string ilgesnis, tuo hash'o pateikimas truks ilgiau, tačiau pastebėti sunku.

4. Maišos funkcija yra deterministinė, t. y., tam pačiam įvedimui (angl. input'ui) išvedimas (angl. output'as) visuomet yra tas pats.
Šitą kriterijų atitinka

5. Iš funkcijos rezultato (output'o) praktiškai neįmanoma atgaminti įvedimo (input'o).
Manau, kad atgaminti neįmanoma

6. Praktiškai neįmanoma surasti tokių dviejų skirtingų argumentų (input'ų), kad jiems gautume tą patį hash'ą, t. y.,: m1 != m2, bet h(m1) = h(m2).
Tai padaryti būtų labai sunku, tačiau tobulas hash algoritmas kiek žinau negali egzistuoti

7. Bent minimaliai pakeitus įvedimą, pvz.vietoj "Lietuva" pateikus "lietuva", maišos funkcijos rezultatas-kodas turi skirtis iš esmės
Lietuva - o38443j3az83zk8jkaiv
lietuva - v6wuxtxs5du4u6dleyc5

Tyrimo analizė:

1. Susikurkite testinių įvedimo failų pavyzdžių, tokių kad:
* Bent du failai būtų sudaryti tik iš vieno, tačiau skirtingo, simbolio.

| Symbol | Hash |
|--------|------|
| '/' | b00e3158235408202ea048e0bff65f3f0f390d295ac8b05a2a5ee74d015a8670 |
| 'v' | dc14d06fb9982f45a073126c54a5771f357de544194c7206a437d55f73e2ea44 |



* Bent du failai būtų sudaryti iš daug visiškai skirtingų simbolių (> 10000 simbolių)

| File name | Hash |
|-----------|------|
| File_1 | a28c5f439f62ff5c17cfe844b7cd15d80a2b1c741dd0ec8a061e49825ce3290f |
| File_2 | a3dab5686e0b972ae5248cc701049623a2283ad9bcda86934da093a5a102fee0 |

* Bent du failai būtų sudaryti iš daug simbolių ir skirtųsi vienas nuo kito tik vienu simboliu.

| File name | Hash |
|-----------|------|
| File_1 | 41710912adc17ecaa16ccb81f2f871b451bddebe89323d871cbdf5e69e374247 |
| File_2 | feb17e86774ea3863ac516d7eb59e1feea0f375017cc302fd1a8f0823c598353 |

* Tuščias failas Ir išveskite output'us. 

1234567890abcdeffedc

2. Ištirkite Jūsų sukurtos hash funkcijos efektyvumą: tuo tikslu suhash'uokite kiekvieną eilutę iš konstitucija.txt failo.

Number of tests performed on file konstitucija.txt: 100
Total hashing time (s): 0
Average hashing time (s): 0

Hash'o vertinimas([kreditai Lukui Kuzmai](https://github.com/BlackDude22/GeresnisTheHashRacer))

A1 - vidutinis hash'avimo laikas (s).  
B1 - Kolizijų skaičius.  
B2 - Vidutinis hash'avimo greitis (hash/s).  
C1 - Kolizijų skaičius.  
C2 - Vidutinis hash'avimo greitis (hash/s).  
D1 - Minimalus panašumo koeficientas  
D2 - Maksimalus panašumo koeficientas  
D3 - Vidutinis panašumo koeficientas  

| Autorius | A1 |	B1 | B2 |	C1 | C2 |	D1 | D2 |	D3 |
|----------|----|----|----|----|----|----|----|----|
| SHA256	| 0.002	| 0	| 545 137 |	0	| 123 797	| 0	| 0.23	| 0.06|
|JonasSiuksteris |	0.006 |	0	| 127 319 |	0	| 120 221	| 0	| 0.18 |	0.06|
