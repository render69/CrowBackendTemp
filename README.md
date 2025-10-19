# Crow Backend Template (C++)

A minimal, modern backend template built with **C++ + Crow** — fast, elegant, and easy to extend.

Модерновый шаблон для backend-приложений на **C++ + Crow** — лёгкий, быстрый и удобный для расширения.

---

## Table of Contents / Содержание

- [About / О проекте](#-about--о-проекте)
- [Features / Возможности](#-features--возможности)
- [Installation / Установка](#-installation--установка)
- [Run / Запуск](#-run--запуск)
- [API](#-api)
- [Project Structure / Структура проекта](#-project-structure--структура-проекта)
- [Dependencies / Зависимости](#-dependencies--зависимости)
- [License / Лицензия](#-license--лицензия)
- [Author / Автор](#-author--автор)

---

## About / О проекте

**English:**  
This is a clean, ready-to-use backend template built on the [Crow](https://github.com/CrowCpp/Crow) framework — a modern C++ microframework similar to Express.js, but faster and fully type-safe.

**Русский:**  
Это чистый шаблон backend-приложения на [Crow](https://github.com/CrowCpp/Crow) — современном фреймворке на C++, похожем на Express.js, но с высокой скоростью и типобезопасностью.

---

## Features / Возможности

**English:**
- Simple REST API setup  
- Modern CMake structure  
- Multi-threaded Crow server  
- JSON responses (via `nlohmann::json`)  
- Ready build & run scripts (`build.sh`, `run.sh`)  
- Clean `.gitignore` and config support  

**Русский:**
- Простая настройка REST API  
- Современная структура проекта на CMake  
- Многопоточный сервер Crow  
- Ответы в JSON-формате (через `nlohmann::json`)  
- Готовые скрипты сборки и запуска (`build.sh`, `run.sh`)  
- Чистый `.gitignore` и поддержка конфигов  

---

## Installation / Установка

**Requirements / Требования:**
- C++20 compiler (`g++`, `clang++`)
- CMake ≥ 3.14
- Git

**English:**
```bash
git clone https://github.com/yourname/crow_backend.git
cd crow_backend
./scripts/build.sh
```

**Русский:**

```bash
git clone https://github.com/yourname/crow_backend.git
cd crow_backend
./scripts/build.sh
```

---

## Run / Запуск

**English:**

```bash
./scripts/run.sh
```

Server will start at:
[http://localhost:18080](http://localhost:18080)

**Русский:**

```bash
./scripts/run.sh
```

Сервер запустится по адресу:
[http://localhost:18080](http://localhost:18080)

---

## API

| Method / Метод | Endpoint / Путь | Description / Описание                                     |
| -------------- | --------------- | ---------------------------------------------------------- |
| GET            | `/`             | Returns welcome text / Возвращает приветственное сообщение |
| GET            | `/api/ping`     | Health check (“pong”) / Проверка состояния (“pong”)        |
| GET            | `/api/users`    | Returns sample user list / Возвращает список пользователей |

---

## Project Structure / Структура проекта

```
crow_backend/
├── CMakeLists.txt         # CMake build system / CMake-сборка
├── include/               # Header files / Заголовочные файлы
│   └── routes.hpp
├── src/                   # Source files / Исходники
│   ├── main.cpp
│   └── routes.cpp
├── scripts/               # Helper scripts / Скрипты
│   ├── build.sh           # Build project / Сборка проекта
│   └── run.sh             # Run server / Запуск сервера
├── config/
│   └── config.json        # Config file (optional) / Конфиг (опционально)
├── .gitignore             # Git ignore rules / Исключения для Git
└── README.md              # Documentation / Документация
```

---

## Dependencies / Зависимости

**English:**

* [Crow](https://github.com/CrowCpp/Crow) — C++ web framework
* [nlohmann/json](https://github.com/nlohmann/json) — Modern JSON library
* CMake, Threads library

**Русский:**

* [Crow](https://github.com/CrowCpp/Crow) — веб-фреймворк на C++
* [nlohmann/json](https://github.com/nlohmann/json) — современная библиотека JSON
* CMake и стандартная библиотека потоков

---

## Scripts / Скрипты

### `scripts/build.sh`

**English:** Compiles the project using CMake and stores the result in `build/`.
**Русский:** Компилирует проект через CMake и сохраняет результат в `build/`.

### `scripts/run.sh`

**English:** Builds (if necessary) and runs the executable.
**Русский:** Собирает (если нужно) и запускает исполняемый файл.

---

## Tips / Советы

**English:**

* Use `cmake --build build --target CrowBackend` for incremental builds.
* For hot reload:

  ```bash
  find src include | entr ./scripts/run.sh
  ```

**Русский:**

* Используй `cmake --build build --target CrowBackend` для быстрой пересборки.
* Для автоматического перезапуска при изменениях:

  ```bash
  find src include | entr ./scripts/run.sh
  ```

---

## Example Response / Пример ответа

**GET** `http://localhost:18080/api/ping`

```json
{
  "status": "ok",
  "message": "pong"
}
```

---

## License / Лицензия

**MIT License** — свободное использование, изменение и распространение кода.

---

## Author / Автор

**Render**
C++ developer & creator of this Crow backend template.
Разработчик на C++, автор этого шаблона Crow backend.

---

> Feel free to fork, extend, or use it as a base for your own microservices.
> Не стесняйся форкать, улучшать и использовать как основу для своих микросервисов.