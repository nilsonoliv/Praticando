function feira() {
  var a = prompt("Diga quantos pimentões amarelos: ");
  var x = parseInt(a);
  var b = prompt("Diga quantos pimentões vermelhos: ");
  var y = parseInt(b); 
  var total = x + y;
  
 
  console.log("X = " + total);
  
}

feira();

______________________________________________________________________________________________________________________________________

ESSE DAQUI EMBAIXO EU NÃO ENTENDI... 

let line = gets().split(" ");
let A = parseInt(line[0]);
let B = parseInt(line[1]);
let total = A + B; // Altere o valor da variável com o cálculo esperado
console.log("X = " + total);


// a função gets é implementada dentro do sistema para ler as entradas(inputs) dos dados e a função print para imprimir a saída (output) de dados.
// Abaixo segue um exemplo de código que você pode ou não utilizar

let valor1 = parseInt(gets());
let valor2 = parseInt(gets());
let valor3 = parseFloat(gets());

//Complete os espaços em branco com uma possível solução para o problema



let letra = "correndo pelado";
console.log(letra);
console.log(typeof letra);




var atual = 600000;

//com R$
var f = atual.toLocaleString('pt-br',{style: 'currency', currency: 'USD'});

//sem R$
var f2 = atual.toLocaleString('pt-br', {minimumFractionDigits: 2});

console.log(f);
console.log(f2);






let valor1 = parseInt(gets());
let valor2 = parseInt(gets());  
let valor3 = parseFloat(gets()); 

let NUMBER = valor1;

let salary = valor2 * valor3;

                                                    

console.log("NUMBER = " + NUMBER);
console.log("SALARY = U$ " + salary.toFixed(2));  

//"Como estamos trabalhando com dinheiro é importante saber também os centavos, com o auxílio do método .toFixed() eu consigo controlar o número de casas decimais após a vírgula, de forma mais simples, indicando o número de casas que eu quero como parâmetro.
Como queremos deixar a resposta com duas casas decimais após a vírgula utilizamostoFixed(2)" - Alura - artigos - Formatando números no Java Script.


_____________________________________________________________________________________________________________________________________




ASSUNTOS PENDENTES PARA ESTUDAR 

Todas as entradas e saída dos algoritmos são utilizados o STDIN e STDOUT de cada linguagem, abaixo tem algumas dicas de como utilizar cada STDIN e STDOUT de cada linguagem.
JavaScript

Em JavaScript as funções de STDIN e STDOUT respectivamente sãogets e console.log, a função gets é implementada internamente para auxiliar a entrada dos dados.

Exemplo:
let line = gets(); // Retorna a próxima linha de entrada
console.log(line); // Imprime o dado

Java

Em Java existe várias formas de implementar o STDIN e STDOUT recomendamos utilizar BufferedReader para o STDIN e o System.out.println para o STDOUT.