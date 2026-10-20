# Dokumentacija projekta Git testni projekt

## 1. Namen projekta

Projekt vsebuje preprost kalkulator, napisan v programskem jeziku C. Poleg razvoja kalkulatorja je namen projekta praktično spoznavanje sistema za nadzor različic Git in platforme GitHub.

## 2. Osnovni ukazi Git

Pri delu z repozitorijem uporabljamo naslednje ukaze:

- `git status` – prikaže stanje delovnega direktorija.
- `git add` – doda spremembe v pripravo za commit.
- `git commit` – shrani pripravljene spremembe.
- `git log` – prikaže zgodovino commitov.
- `git diff` – prikaže razlike med spremembami.
- `git fetch` – prenese informacije iz oddaljenega repozitorija.
- `git pull` – prenese in združi spremembe.
- `git push` – objavi lokalne commite v oddaljenem repozitoriju.

## 3. Veje in združevanje

Veje omogočajo ločeno razvijanje funkcionalnosti. Spremembe lahko združimo z ukazom `git merge`. Pri združevanju lahko pride do konflikta, ki ga moramo ročno razrešiti.

Preizkusili smo hitro združevanje (fast-forward), združevanje z dodatnim merge commitom in reševanje konfliktov.

## 4. Sodelovanje prek GitHuba

GitHub omogoča sodelovanje z uporabo oddaljenih repozitorijev, fork-ov, issue-jev in pull requestov.

Pull request omogoča pregled sprememb pred združitvijo. Za vejo `master` je nastavljena zaščita, ki zahteva uporabo pull requesta.

## 5. Napredne operacije

V projektu smo preizkusili:

- `git rebase` in interaktivni rebase;
- `git cherry-pick`;
- `git stash` in `git stash pop`;
- ustvarjanje oznak različic, na primer `v1.0.0`;
- `git reset` z možnostmi `--soft`, `--mixed` in `--hard`;
- `git revert`;
- delo v stanju detached HEAD.

Ukaze za spreminjanje zgodovine uporabljamo previdno, zlasti pri vejah, ki so že objavljene.

## 6. Različni načini razvoja

Preizkusili smo tri načine organizacije razvoja:

- **GitHub Flow** – razvoj v ločeni veji in uporaba pull requesta.
- **GitFlow** – uporaba vej, kot sta `develop` in `feature`.
- **Trunk-based development** – pogoste manjše spremembe in delo okoli glavne razvojne veje.

## 7. Submodule in monorepo

Git submodule omogoča vključitev drugega repozitorija v projekt. V našem projektu je kot primer uporabljen repozitorij `octocat/Hello-World`.

Monorepo lahko vsebuje več aplikacij ali knjižnic v enem repozitoriju. V ta namen smo pripravili mapi `apps/` in `libs/`.

## 8. Avtomatizirano preverjanje

Projekt vsebuje konfiguracijo GitHub Actions v datoteki `.github/workflows/ci.yml`.

Trenutni CI-postopek se zažene ob dogodkih `push` in `pull_request` ter preveri, ali obstaja datoteka `README.md`.

## 9. Varnost in dobre prakse

Pri delu z Gitom in GitHubom upoštevamo naslednja priporočila:

- občutljivih podatkov, gesel, žetonov in zasebnih ključev ne shranjujemo v repozitorij;
- z `.gitignore` izključimo datoteke, ki jih ne želimo slediti;
- commite podpisujemo z GPG;
- uporabljamo varnostne funkcije GitHuba in Dependabot;
- pred commitom preverimo stanje z `git status` in spremembe z `git diff`;
- uporabljamo jasna in opisna sporočila commitov.

## 10. Struktura projekta

- `src/` – izvorna koda kalkulatorja;
- `tests/` – prostor za testne datoteke;
- `docs/` – dokumentacija projekta;
- `apps/` – primer aplikacije v monorepozitoriju;
- `libs/` – primer skupnih komponent;
- `external/Hello-World/` – Git submodule;
- `.github/workflows/` – konfiguracija GitHub Actions.

## 11. Zaključek

Projekt je namenjen praktičnemu učenju Gita in GitHuba. Z vajami smo spoznali osnovne ukaze, delo z vejami, sodelovanje prek pull requestov, napredne operacije, dokumentiranje projekta, avtomatizirano preverjanje in varnostne prakse.