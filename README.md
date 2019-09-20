# Hash-generatorius
1-oji užduotis: Hash generatorius

Kriterijai:

1.Maišos funkcijos įėjimas (angl. input) gali būti bet kokio dydžio simbolių eilutė (angl. string).
Input saugomas string tipo kintamajame

2. Maišos funkcijos išėjimas (angl. output) visuomet yra to paties fiksuoto dydžio rezultatas.
Output visada yra 20 simboliu ilgio string tipo kintamasis

3. Maišos funkcijos reikšmė/kodas (hash‘as) bet kokiai input reikšmėi yra apskaičiuojamas nesunkiai - efektyviai.
Kuo string ilgesnis, tuo hash'o pateikimas truks ilgiau, tačiau pastebėti sunku.

4. Maišos funkcija yra deterministinė, t. y., tam pačiam įvedimui (angl. input'ui) išvedimas (angl. output'as) visuomet yra tas pats.
Šitą kriterijų atitinka

5.Iš funkcijos rezultato (output'o) praktiškai neįmanoma atgaminti įvedimo (input'o).
Manau, kad atgaminti neįmanoma

6. Praktiškai neįmanoma surasti tokių dviejų skirtingų argumentų (input'ų), kad jiems gautume tą patį hash'ą, t. y.,: m1 != m2, bet h(m1) = h(m2).
Tai padaryti būtų labai sunku, tačiau tobulas hash algoritmas kiek žinau negali egzistuoti

7. Bent minimaliai pakeitus įvedimą, pvz.vietoj "Lietuva" pateikus "lietuva", maišos funkcijos rezultatas-kodas turi skirtis iš esmės
Lietuva - o38443j3az83zk8jkaiv
lietuva - v6wuxtxs5du4u6dleyc5
