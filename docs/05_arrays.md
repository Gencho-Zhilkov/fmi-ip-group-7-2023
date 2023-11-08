[comment]: # (Set the theme:)
[comment]: # (THEME = white)
<!-- [comment]: # (CODE_THEME = github) -->
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

03.11.2023

[comment]: # (!!!)

## Цели за днес

_Що е то памет и има ли почва у нас?_

(Указатели и Масиви)

[comment]: # (!!!)

## Указатели и Масиви

1. Какво?
2. Защо?
3. Как?

[comment]: # (!!! data-auto-animate)

## Що е то компютър?

![](images/comp_arch.png)

[comment]: # (!!!)

## Указатели и Масиви: Защо?

1. Така работи хардуера!
2. Taка работи ОС!
3. Така работи ООП!
4. В основата на **всички** структури от данни!
5. _It literally gives you superpowers ..._

[comment]: # (!!!)

## Указатели и Масиви: Как?

```cpp
int x = 42;
int *xPtr = &x;
```

```cpp
double temperature[365];
for (size_t i = 0; i < 365; i ++) {
    std::cin >> temperature[i];
}
```

[comment]: # (!!!)

### Примери: `swap`

```cpp
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
```

[comment]: # (!!!)

### Примери: Обхождане

```cpp
long sumEvenElements(const int* const xs, const size_t n) {
    long res = 0;
    for (size_t i = 0; i < n; i ++) {
        if (xs[i] % 2 == 0) {
            res += xs[i];
        }
    }
    return res;
}
```

[comment]: # (!!!)

### Примери: Обхождане<sup>2</sup>

```cpp
unsigned countInversions(const int* const xs, const size_t n) {
    unsigned res = 0;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; i < n; ++j) {
            res += (xs[i] > xs[j]);
        }
    }
    return res;
}
```

[comment]: # (!!!)

### Примери: _"два указателя"_

```cpp
size_t sortEven(int *nums, size_t len) {
    size_t even = 0;
    for(size_t i = 0; i < len; i++) {
        if (nums[i] % 2 == 0) {
            if (i > even) {
                swap(&nums[i], &nums[even]);
            }
            even ++;
        }
    }
    return even;
}
```

[comment]: # (!!!)

### Примери: честотна таблица

```cpp
bool hasRepeatingDigits(long long n) {
    bool digits[10] = {};
    do {
        const int digit = n % 10;
        if (digits[digit]) {
            return true;
        }
        digits[digit] = true;
        n /= 10;
    } while (n);

    return false;
}
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int *ptr = &42;
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
const int x = 42;
int *xPtr = &x;
*xPtr = 0;
std::cout << x << std::endl;
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a[5] = {10, 20, 30};

std::cout << a[0] << std::endl;
std::cout << a[3] << std::endl;
std::cout << a[5] << std::endl;
std::cout << *(++a) << std::endl;
std::cout << *(a + 1) << std::endl;
std::cout << (a == &a[0]) << std::endl;
std::cout << (a + 1 == &a[1]) << std::endl;
```
[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int a[3] = {1, 2, 3};
int *b = a;

*(++b) = 100;
std::cout << a[0] << ' ' << a[1] << ' ' << a[2] << std::endl;
```
[comment]: # (!!!)

#### Открийте буболечката

```cpp
void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
```
[comment]: # (!!!)

#### Открийте буболечката

```cpp
void swap(int *a, int *b) {
    int *temp = a;
    *a = *b;
    *b = *temp;
}
```
[comment]: # (!!!)

#### Открийте буболечката

```cpp
unsigned countInversions(const int* const xs, const size_t n) {
    unsigned res = 0;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; i < n; ++j) {
            res += (xs[i] > xs[j]);
        }
    }
    return res;
}
```
[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Задачи

![](images/me4o_puh.png)

[comment]: # (!!!)
