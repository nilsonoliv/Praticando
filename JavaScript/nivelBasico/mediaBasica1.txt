
function resultado(num1, num2, num3) {
    let enem = num1 > 700
    let vestibular = num2 > 7
    let faltas = num3 < 3
    
    if((enem || vestibular) && faltas) {
        console.log("Passou ")
    }else {
        console.log("reprovado ")
    }
}
resultado(600, 5, 2)