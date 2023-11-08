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

18.10.2023

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Съвети

1. Използвайте `&&` и `||` вместо `*` и `+`
2. Използвайте `std::endl` вместо `'\n'`
3. `unsigned` **винаги** е `>= 0`
4. Правилата са, за да се замислим преди да ги нарушим

[comment]: # (!!!)

## Github classroom

1. Качвайте **всичко!**
2. Искайте активно обратна връзка
3. _Тук има бъг_
4. _**Errare humanum est**_

[comment]: # (!!!)

![](images/insait_tech_series.jpg)

[comment]: # (!!!)

## Цели за днес

1. Условни оператори
2. Цикли

[comment]: # (!!!)

## Условни оператори

1. За какво се използват?
2. Кои са?

[comment]: # (!!! data-auto-animate)

## Условни оператори

- `if (..) {} else if (..) {} else {}`
- `?:` (тернарен оператор)
- `switch`

[comment]: # (!!!)

## Цикли

1. За какво се използват?
2. Кои са?

[comment]: # (!!!)

## Цикли: `for`

```cpp
for(<initializer>; <condition>; <increment>) {
    <body>
}
```
[comment]: # (!!!)

## Цикли: `while`

```cpp
while(<condition>) {
    <body>
}
```
[comment]: # (!!!)

## Цикли: `do-while`

```cpp
do {
    <body>
} while(<condition>);
```
[comment]: # (!!!)

## Цикли: `break` + `continue`

1. Какво правят?
1. За какво се използват?

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a;
std::cin >> a;
std::cout << a * ((a > 0) - (a < 0)) << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a = 5, b = 7, c = 0;
std::cout << ((a < b) && (c += 1)) << std::endl;
std::cout << ((a < b) || (c += 2)) << std::endl;
std::cout << ((a > b) && (c += 4)) << std::endl;
std::cout << ((a > b) || (c += 8)) << std::endl;
std::cout << c << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a = 5, b = 7;
a += b;
b = a - b;
a -= b;
std::cout << a << ' ' << b << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a = 1, b = 0;
std::cout << a / b << std::endl;
```

```cpp
double a = 1, b = -1, c = 0;
std::cout << a / c << ' ' << b / c << std::endl;
```

```cpp
double a = 1, b = 2, c = 0;
std::cout << (a / c == b / c) << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
for (int i = 0; i < 5; ++i) {
    switch(i) {
        case 0:  std::cout << "A";
        case 1:  continue;
        case 2:  std::cout << "B";
        default: std::cout << "C";
    }
}
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int res = 0;
for (int i = 1; i <= 10; i += 5) {
    res += i;
}
std::cout << res << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int s = 0;
for(int i = 0; i < 9; i++)
{
    if(i % 2 == 0)
        continue;
    s += i;
}
std::cout << s << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int s = 0, n;

std::cin >> n;
while (n != 0) {
    if (n > 0) {
        s += n;
    } else {
        s -= n;
    }
    std::cin >> n;
}
std::cout << s << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
long res = 0;
for (int i = 1; i > 0; i ++) {
    res += i;
}
std::cout << res << std::endl;
```
[comment]: # (!!!)

#### Открийте буболечката

```cpp
unsigned n;
std::cin >> n;

bool isPrime = true;
for (unsigned i = 2; i <= int(sqrt(n)); i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }
}

std::cout << isPrime << std::endl;
```
[comment]: # (!!!)

#### Открийте буболечката

```cpp
int n;
std::cin >> n;

int digitsCount = 0;
while (n != 0) {
    n /= 10;
    digitsCount ++;
}

std::cout << digitsCount << std::endl;
```
[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Задачи

### 1-5 + 11-15

### Предизвикателство: 17

[comment]: # (!!!)

