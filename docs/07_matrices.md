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

15.11.2023

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Цели за днес

- Синоними
- Многомерни масиви

[comment]: # (!!!)

## Синоними

_A rose by any other name ..._

[comment]: # (!!! data-auto-animate)

## Синоними

```cpp
int foo = 42;
int &bar = foo;
const int &baz = bar;
```

[comment]: # (!!!)

### Пример: `swap`

```cpp
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
```

[comment]: # (!!!)

## Синоним != Указател

_**Какви са разликите?**_

[comment]: # (!!!)


### Многомерни Масиви

1. Какво?
2. Защо?
3. Как?

[comment]: # (!!!)

### Многомерни Масиви: Какво?

Многомерен масив = масив от масиви<br/>
[от масиви ...]

[comment]: # (!!!)

### Многомерни Масиви: Защо?

[comment]: # (!!!)

### Многомерни Масиви: Как?

```cpp
double points2D[100][2];
double points3D[100][3];

int bitmap[3][3] = {
    {1, 0, 1},
    {0, 1, 0},
    {1, 0, 1},
};
```

[comment]: # (!!!)

### Пример:

```cpp
static const size_t MAX_SIZE = 1024;

void sumRows(const int xs[][MAX_SIZE],
             const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; i ++) {
        int res = 0;
        for (size_t j = 0; j < cols; j ++) {
            res += xs[i][j];
        }
        std::cout << res << ' ';
    }
    std::cout << std::endl;
}
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int &ref = 42;
std::cout << ref << std::endl;
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
const int &ref = 42;
std::cout << ref << std::endl;
```

[comment]: # (!!!)

#### Какво ще отпечата следния код?

```cpp
int foo = 42;
int &bar = foo;
int *baz = &foo, *bam = &bar;

cout << foo << bar << *baz << *bam << endl;
cout << (baz == bam) << endl;
```

[comment]: # (!!!)

#### Открийте грешките

```cpp
int arr[2] = {0, 1};
int *a = arr;
const int *b = arr;
int * const c = arr;
const int * const d = arr;

cout << ++(*a) << endl; cout << *(a++) << endl;
cout << ++(*b) << endl; cout << *(b++) << endl;
cout << ++(*c) << endl; cout << *(c++) << endl;
cout << ++(*d) << endl; cout << *(d++) << endl;
```

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Задачи: 1-8

[comment]: # (!!!)
