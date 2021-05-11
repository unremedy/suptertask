## RK 2

сборка

```sh
$ cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
$ cmake --build _build --target install
```

тесты
```sh
$ cmake --build _build --target test -- ARGS=--verbose
```

[![Build Status](https://travis-ci.org/unremedy/suptertask.svg?branch=master)](https://travis-ci.org/unremedy/suptertask)
