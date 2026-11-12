def fun(n: int):
    if n == 0:
        print()

    if n > 0:
        print(n, end=" ")
        fun(n - 1)
        print(n, end=" ")


def main():
    n = -5
    fun(n)


if __name__ == "__main__":
    main()
