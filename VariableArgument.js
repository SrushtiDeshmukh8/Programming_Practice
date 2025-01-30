function Addition() {
    var Value = [];
    for (var _i = 0; _i < arguments.length; _i++) {
        Value[_i] = arguments[_i];
    }
    var Sum = 0;
    var Cnt = 0;
    for (Cnt = 0; Cnt < Value.length; Cnt++) {
        Sum = Sum + Value[Cnt];
    }
    return Sum;
}
console.log(Addition());
console.log(Addition(10, 20, 30, 40));
console.log(Addition(10, 20, 30, 40, 50, 60, 70));
console.log(Addition(10, 20, 30, 40, 50, 60, 70, 80, 90, 100));
