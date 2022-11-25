function AprovadoouReprovado(num1, num2, num3, num4) {
    let res = (num1 + num2 + num3 + num4) / 4
    
    if(res < 5) {
        console.log("reprovado" + "media: " + res)
    }else if(res <=7) {
        console.log("prova final" + "media: " + res)
    } else {
        console.log("aprovado" + " media: " + res)
    }
}

AprovadoouReprovado(7, 10, 8, 9)
//codigo3: calculando a media e determinando aprovado ou reprovado