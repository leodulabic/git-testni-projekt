# Git testni projekt

## Opis projekta

Projekt vsebuje preprost kalkulator, napisan v programskem jeziku C. Namen projekta je tudi praktično spoznavanje sistema za nadzor različic Git in platforme GitHub.

## Funkcionalnosti

- Seštevanje
- Odštevanje
- Množenje
- Deljenje
- Preverjanje deljenja z ničlo

## Struktura projekta

- `src/` – izvorna koda kalkulatorja
- `tests/` – prostor za testne datoteke
- `docs/` – projektna dokumentacija
- `apps/` – primer aplikacije v monorepozitoriju
- `libs/` – primer skupnih pomožnih komponent
- `external/Hello-World/` – primer Git submodule
- `.github/workflows/` – konfiguracija GitHub Actions

## Zahteve

- Prevajalnik C, na primer GCC
- Git za delo z repozitorijem

## Prevajanje in zagon

Program lahko prevedemo z ukazom:

```bash
gcc src/kalkulator.c -o kalkulator
```

Prevedeni program zaženemo z ukazom:

```bash
./kalkulator
```

Ukaza sta odvisna od dejanske strukture in implementacije programa.

## Testiranje in CI

GitHub Actions vsebuje osnovni CI-workflow, ki se zažene ob dogodkih `push` in `pull_request`. Trenutno preverja obstoj datoteke `README.md`.

## Delo z Gitom in GitHubom

V projektu preizkušamo:

- ustvarjanje commitov in vej;
- združevanje vej in reševanje konfliktov;
- oddaljene repozitorije in delo s pull requesti;
- `merge`, `rebase`, `cherry-pick` in `stash`;
- oznake različic, na primer `v1.0.0`;
- razveljavljanje sprememb z `reset` in `revert`;
- GPG podpisovanje commitov;
- `.gitignore`, submodule in monorepo;
- avtomatizirano preverjanje z GitHub Actions;
- varnostne funkcije GitHuba, vključno z Dependabotom.

## Prispevanje

Pred oddajo sprememb preverimo stanje repozitorija z `git status`, pregledamo spremembe z `git diff` in napišemo jasno sporočilo commita. Večje spremembe razvijamo v ločeni veji in jih po možnosti pregledamo prek pull requesta.

## Licenca

Licenca projekta še ni določena.