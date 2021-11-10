import random


def main():
    fun = generate_y_fun(2)
    results = []
    for i in range(250):
        x = random.uniform(1, 100)
        y = fun(x)
        results.append([x, y])

    file_name = f'csv_examples/csv_{int(random.uniform(0,7000))}.csv'
    with open(file_name, 'w') as fl:
        for res in results:
            # res = map(lambda it: str(it), res)
            for item in range(len(res)):
                temp = str(res[item])
                fl.write(temp)
                if item != len(res)-1: fl.write(',')
            fl.write('\n')


def generate_y_fun(degree: int):
    degree += 1
    coef = []
    for i in range(degree):
        ran_value = random.uniform(0, 100)
        coef.append(ran_value)

    def fun(x):
        res = 0
        for c, value in enumerate(coef):
            res += value*(x**c)
        return res

    return fun


if __name__ == '__main__':
    main()
