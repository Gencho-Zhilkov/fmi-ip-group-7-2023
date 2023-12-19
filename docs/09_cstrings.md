[comment]: # (Set the theme:)
[comment]: # (THEME = white)
[comment]: # (CODE_THEME = github)
<!-- [comment]: # (CODE_THEME = monokai-sublime) -->
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

29.11.2023

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

### Коментари по Контролно 1

- Четете внимателно условието!
- Питайте _какво се иска от вас_
- Внимавайте за технически грешки!

- _"Консултация"_ следващия вторник от 16 до 18?

[comment]: # (!!!)

## Цели за днес:
<br/>

## Символни низове

[comment]: # (!!!)

## Символни низове

- **Дефиниция:** Масив от символи (`char`), който завършва с `'\0'`.

- Предимства?
- Недостатъци?

[comment]: # (!!!)

## Четене от клавиатура

```cpp
char str[10];
cin.getline(str, 10);
```

```cpp
char str[20];
cin.getline(str, 20, ',');
```

- **ВАЖНО!** Не забравяйте да запазите и един `char` място за _**терминиращата нула**_!

[comment]: # (!!!)

## `<cstring>`

- Дължина: `strlen`
- Сравняване: `strcmp` и `strncmp`
- Копиране: `strcpy` и `strncpy`
- Добавяне: `strcat` и `strncat`
- Търсене: `strchr` и `strstr`
- Числа: `atoi` и `atof`

```cpp
#define _CRT_SECURE_NO_WARNINGS
```

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

#### Какво прави следния код?

```cpp
int *a = new int(7);
int *b = new int[7];
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
void foo(int &x) {
    x *= x;
}

int c = 5;
foo(c);
std::cout << c << std::endl;
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
const char *str = "abc";
const char arr[4] = {'a', 'b', 'c'};

std::cout << str << ' ' << arr << std::endl;
std::cout << sizeof(str) << ' ' << sizeof(arr) << std::endl;
std::cout << strlen(str) << ' ' << strlen(arr) << std::endl;
```

[comment]: # (!!!)

#### Какво прави следната функция?

```cpp
void foo(char *a, char *b) {
    while(*b++ = *a++);
}
```

- _**Бонус:**_ Открийте буболечките.

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Задачи:

- На лист: зад. 2 и/или 3
- На компютър: _мечо пух_

[comment]: # (!!!)
