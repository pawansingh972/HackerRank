function processData(input) {
    //Enter your code here
    var inputArr = input.split("\n");
    var n = parseInt(inputArr[0]);
    var q = inputArr[n + 1];
    var frequencyMap = {};
    for (var i = 1; i <= n; i++) {
        frequencyMap[inputArr[i]] = typeof frequencyMap[inputArr[i]] === "undefined" ? 1 : ++frequencyMap[inputArr[i]];
    }
    for (var i = n+2; i < inputArr.length; i++) {
        console.log(frequencyMap[inputArr[i]] || 0);
    }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
