[comment]: # (Set the theme:)
[comment]: # (THEME = white)
[comment]: # (CODE_THEME = monokai-sublime)
[comment]: # (The list of themes is at https://revealjs.com/themes/)
[comment]: # (The list of code themes is at https://highlightjs.org/)
[comment]: # (Pass optional settings to reveal.js:)
[comment]: # (controls: true)
[comment]: # (keyboard: true)
[comment]: # (markdown: { smartypants: true })
[comment]: # (hash: false)
[comment]: # (respondToHashChanges: false)
[comment]: # (Other settings are documented at https://revealjs.com/config/)

# УП: КН - Група 7
------

04.10.2023

[comment]: # (!!!)

## Преди да започнем

- Как се казвате?
- Какъв опит имате в програмирането?
- С какви езици сте се работили?
- С какво искате да се занимавате?
- Какво искате да получите от този курс?

[comment]: # (!!!)

## За мен

- [Генчо Жилков](https://github.com/Gencho-Zhilkov)
- НПМГ + Приложна математика
- Програмирам професионално от 2008 г.
- Опит със C, C++, Java, Python и други...
- Асистент по УП, ООП, СДП, ФП
- Интереси: Алгоритми, AI & ML

[comment]: # (!!!)

## За Вас

- Как се казвате?
- Какъв опит имате в програмирането?
- С какви езици сте се работили?
- С какво искате да се занимавате?
- Какво искате да получите от този курс?

[comment]: # (!!!)

## Цели на курса

1. Да мислите структурирано

2. Да подхождате алгоритмично към проблемите

3. Да се изразявате свободно на С++

[comment]: # (!!!)

## Защо да ви пука ?

- Базови знания и умения $=$ Здрава основа

- Курс № 1/3: следват ООП и СДП

- Оценка? ¯\\\_(ツ)\_/¯

[comment]: # (!!!)

## Защо С++ ?

- Много парадигми: Процедурно, ООП, Метапрограмиране
- Едновременно ниско + високо ниво на абстракция
<div>$\Rightarrow$ Един език за трите курса</em></div>

- В основата на много съвременни езици за програмиране.

[comment]: # (!!!)

## Недостатъци на С++
<br/>

_"With great power comes great responsibility"_

[comment]: # (!!!)

## Упражнения

- _"Преговор"_ на лекциите ~ 10-15 мин.

- Въпроси и примери ~ 10-15 мин.

- Задачи

[comment]: # (!!!)

### Какво да очаквате от мен ?

- Да съм насреща, когато имате нужда

- Да ви помогна с каквото мога

- Да отговоря на _всеки_ въпрос

[comment]: # (!!!)

### Какво _аз_ очаквам от вас

- Да сте активни в час:
  - Да решавате задачи
  - Да задавате въпроси
- Да експериментирате
- Да не се страхувате да грешите

[comment]: # (!!!)

## Как да учите ?

- Успех $=$ ~Талант~ + Практика
- Програмиране: Умения > Знания
- Писане на код >> Четене на код
<div>$\Rightarrow$ Четете <em>активно</em></div>
<div>$\Rightarrow$ <em>Решавайте</em> задачи</div>
<div>$\Rightarrow$ Искайте <em>обратна връзка</em></div>

[comment]: # (!!!)

## Въпроси ?

[comment]: # (!!!)

## Github

- https://github.com/

- https://github.com/Gencho-Zhilkov/fmi-ip-group-7-2023

[comment]: # (!!!)

## _Hello World!_

```cpp [1|3|4|5]
#include <iostream>

int main() {
	std::cout << "Hello World!" << std::endl;
	return 0;
}
```

[comment]: # (!!!)

## Вход от клавиатурата

```cpp [1|4-5|6]
#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  std::cout << a * b * c << std::endl;

  return 0;
}
```
[comment]: # (!!!)

## Въпроси ?

[comment]: # (!!!)
