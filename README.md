Pràctica 2 – Monitorització Ambiental d’un CPD
Finalitat

Desenvolupar un sistema que permeti monitoritzar les condicions ambientals d’una sala de servidors mitjançant una placa ESP32, alertant automàticament sobre situacions de risc com l’excés de temperatura o la detecció de llum, i permetent la consulta de dades en temps real a través del Monitor Sèrie.


Resum del projecte

L’ESP32 llegeix contínuament les dades d’un sensor de temperatura LM35 i d’un sensor de lluminositat LDR connectats a les seves entrades analògiques.

Quan la temperatura supera els 25 °C, el sistema activa un LED d’alerta i mostra el missatge "ALERTA: Sobreescalfament CPD!". Si l’LDR detecta llum, es mostra el missatge "AVÍS: Porta oberta o llum encesa".

A més, l’usuari pot interactuar amb el sistema a través del Monitor Sèrie enviant comandes per consultar l’estat actual dels sensors o apagar manualment el LED d’alerta.


Comandes admeses

STATUS: mostra la temperatura actual i el nivell de llum detectat.

LED_OFF: apaga manualment el LED d’alerta.

Les comandes es processen independentment de si s’escriuen en majúscules, minúscules o una combinació de totes dues.



El seguiment de les tasques es realitza mitjançant un tauler Kanban a GitHub amb les columnes:

To do

Doing

Done


Resultat final:

El sistema permet monitoritzar en temps real les condicions ambientals d’una sala de servidors.

L’usuari pot consultar l’estat dels sensors mitjançant el Monitor Sèrie, rebre avisos automàtics davant situacions de risc i controlar manualment el LED d’alerta.

El funcionament és estable i permet automatitzar la vigilància bàsica d’un CPD utilitzant sensors analògics connectats a una placa ESP32.

Video demostratiu: https://drive.google.com/file/d/1rSZj1i23Elnkx3_I2WldFrL5e0HwUscJ/view?usp=sharing
