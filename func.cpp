// <тип змінної яка повернеться> <назва функції> (<формат змінної яку приймає функцйія> <назва змінної яку приймаємо>) {
//     return <Результат обчислень>
// }

int jackpot(int p) {
    return p * 2;
}

int main()
{
    int n, func_res;
    cout << "Please enter n = ";
    cin >> n;
    func_res = jackpot(n);

    cout << "func_res =  " << func_res;
    return 0;
}
