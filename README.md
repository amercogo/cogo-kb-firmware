# cogo-kb-firmware ⌨️

Ovaj repozitorijum sadrži firmware za mehaničku tastaturu napisan u **čistom C jeziku** od nule. Fokus projekta je na low-level programiranju mikrokontrolera, upravljanju registrima i implementaciji USB HID protokola bez korišćenja teških eksternih biblioteka (poput QMK/ZMK).

## 🎯 Cilj projekta
Razviti lagan, efikasan i potpuno prilagođen firmware koji demonstrira osnove embedded sistema:
- Manuelno upravljanje GPIO pinovima (bitmasking).
- Implementacija Matrix Scanning algoritma.
- Debounce logika za stabilan unos.
- USB HID (Human Interface Device) komunikacija.

## 🛠 Tehnologije i Alati
- **Jezik:** C (Bare-metal)
- **Arhitektura:** AVR (npr. ATmega32U4) ili ARM (RP2040)
- **Build System:** Make / CMake
- **Simulacija:** [Wokwi](https://wokwi.com/)
- **Kompajler:** `avr-gcc` ili `arm-none-eabi-gcc`

## 📂 Struktura projekta
- `/src` - Sav izvorni kod (.c i .h fajlovi).
- `/include` - Header fajlovi sa definicijama registara i konstanti.
- `/docs` - Tehnička dokumentacija matrice i USB deskriptora.
- `Makefile` - Skripta za kompajliranje i flash-ovanje koda.

## 🚀 Plan razvoja (Roadmap)
1. [ ] **Setup:** Inicijalizacija mikrokontrolera i "Blink" test.
2. [ ] **GPIO & Matrix:** Pisanje drajvera za skeniranje redova i kolona.
3. [ ] **Debouncing:** Algoritam za eliminaciju mehaničkog šuma tastera.
4. [ ] **USB Stack:** Implementacija USB deskriptora za tastaturu.
5. [ ] **Keymap Engine:** Podrška za mapiranje tastera i slojeve (layers).

---
*Developed by Amer, Software Engineering Student @ UNZE*
