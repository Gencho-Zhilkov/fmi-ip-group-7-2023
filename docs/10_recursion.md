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

13.12.2023

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Цели за днес:
<br/>

## Рекурсия

[comment]: # (!!!)

### Рекурсия

- Какво е и кога се използва?
- Предимства?
- Недостатъци?

[comment]: # (!!!)

### Пример

```cpp
int factorial(int n) {
   if (n <= 1) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}
```

[comment]: # (!!!)

### Структура

- Дъна (базови случаи)
- Общи случаи
- Сходство с математическата индукция

[comment]: # (!!!)

### Рекурсия _vs._ Итерация

- По какво се различават?
- Кога кое да използваме?

[comment]: # (!!!)

### Опашкова Рекурсия

- Какво е и защо се използва?
- Предимства?
- Недостатъци?

[comment]: # (!!!)

### Пример

```cpp
int factorial_helper(int n, int res) {
   if (n <= 1) {
      return res;
   } else {
      return factorial_helper(n - 1, n * res);
   }
}

int factorial_tailrec(int n) {
   return factorial_helper(n, 1);
}
```

[comment]: # (!!!)

### Проблемът със `strcpy`

```cpp
void strcpy(char *a, char *b) {
    while(*b++ = *a++);
}
```

- Какво става, когато `a` и `b` се _"припокриват"_?

[comment]: # (!!!)

## Въпроси?

[comment]: # (!!!)

## Задачи:

![](images/me4o_puh.png)

[comment]: # (!!!)
