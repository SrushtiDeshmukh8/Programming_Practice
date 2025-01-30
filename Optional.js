function CircleArea(Rad, PI) {
    var Area = 0;
    if (PI == undefined) {
        PI = 3.14;
    }
    Area = PI * Rad * Rad;
    return Area;
}
console.log(CircleArea(5.10, 3.14));
console.log(CircleArea(5.10));
