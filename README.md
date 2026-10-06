# CPSC 100

Course materials from CPSC 100, Yale's offering of CS50: section exercises with starter code and
solutions, web demos, and office-hours simulations, from 2019 to 2024.

Each folder was its own repository until October 2026 (the Was column gives its old name) and keeps
that repository's full commit history, so `git log -- <folder>` shows its original commits.

**Kinds:** a *starter* is code with TODO, WE DO or YOU DO blocks for students to complete; a *solution*
is a completed version; a *demo* was shown in class; an *office-hours sim* is described below.

## C

Section exercises from the first weeks of C, and two sorting exercises built on the starter code of CS50's Filter problem.

| Folder | Kind | What it covers | Was | Commits | Active |
| --- | --- | --- | --- | --- | --- |
| [Week1](c/Week1) | Starters + solutions | Loops, functions, strings and arrays. Most exercises pair a starter with a solution, such as `integers.c` and `integersSol.c` | week1 | 4 | 2022-05 to 2022-06 |
| [ImageSort](c/ImageSort) | Starter | Selection sort: sort each row of a bitmap by hue | ImageSort | 20 | 2021-05 to 2022-06 |
| [ImageSortMerge](c/ImageSortMerge) | Starter | Sort each row by hue, then merge the sorted rows into one ordering of the whole image | combinationSort | 4 | 2022-06 |

## Python

| Folder | Kind | What it covers | Was | Commits | Active |
| --- | --- | --- | --- | --- | --- |
| [SortedWords](python/SortedWords) | Starter | Print the command-line words in sorted order with Python's own sort, and reject words that contain anything but letters | PySort | 1 | 2022-10-10 |
| [Speller](python/Speller) | Starter | CS50's Speller in Python: load a dictionary, check every word of a text, then find a faster data structure than a list | PySpeller | 12 | 2022-10 |

## Web

From a static page to a Flask app backed by a database, plus two of CS50's Flask exercises.

| Folder | Kind | What it covers | Was | Commits | Active |
| --- | --- | --- | --- | --- | --- |
| [HelloPage](web/HelloPage) | Demo | A minimal styled HTML page (CS50 Beyond) | testRep | 9 | 2019-08 |
| [PokedexHTML](web/PokedexHTML) | Demo | Styling an HTML table with CSS, the starting point for the Pokémon pages | pokeWeb | 9 | 2021-05-27 |
| [PokedexFlask](web/PokedexFlask) | Starter | Serve the Pokémon pages with Flask: one route for all nine, one for a close-up | pokeFlask | 7 | 2021-05-27 |
| [PokedexJinja](web/PokedexJinja) | Starter | Fill Jinja templates from a SQLite Pokédex and show the Pokémon a form selects | pokeJinja | 8 | 2021-05 to 2021-06 |
| [Froshims](web/Froshims) | Starter | CS50's froshims registration app: count sign-ups for each sport and list them in a table | froshims | 10 | 2021-06 to 2022-06 |
| [Birthdays](web/Birthdays) | Starter | CS50's Birthdays lab: a Flask app that stores and lists birthdays in SQLite | birthdaysPractice | 1 | 2023-11-08 |

## Office-hours simulations

Each sim is a student's work on a CS50 problem, for practicing how to help at office hours. Most open with the question the student brings. The bugs are planted on purpose, so this code is not meant to run cleanly.

| Folder | Kind | What it covers | Was | Commits | Active |
| --- | --- | --- | --- | --- | --- |
| [Fall2021](office-hours/Fall2021) | Office-hours sim | Inheritance (C: recursion and pointers), Scrabble (C) and Tournament (Python) | Fall21_OHsims | 9 | 2021-08 |
| [Fall2024](office-hours/Fall2024) | Office-hours sim | Three DNA sims (Python) and Readability (C) | OHSimsF24 | 26 | 2022-08 to 2024-09 |
| [Movies](office-hours/Movies) | Office-hours sim | SQL: a student who solved Movies with only JOINs and can't combine two queries into one | movies_OH | 2 | 2021-10-28 |
| [Fiftyville](office-hours/Fiftyville) | Office-hours sim | SQL: a Fiftyville log whose final, combined query won't run | fiftyville_OH | 5 | 2021-10-27 |

## Running the code

The C and Python exercises use the [CS50 library](https://cs50.readthedocs.io/libraries/cs50/), and the web apps use Flask;
both come installed in CS50's online coding environment. Starters compile and start as they are, with their TODOs left undone.
