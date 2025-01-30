function CalculatePercentage(Marks, Outof) {
    if (Outof === void 0) { Outof = 500; }
    var Result = 0;
    Result = (Marks / Outof) * 100;
    return Result;
}
console.log(CalculatePercentage(232)); // (230,500)
console.log(CalculatePercentage(230, 300)); // (230,300)
