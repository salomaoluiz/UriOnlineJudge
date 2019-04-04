var input = `JOAO
500.00
1230.30`;
var lines = input.split("\n");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let name = lines[0];
let salary = parseInt(lines[1]);
let sell = parseFloat(lines[2]);

let total = salary + (sell * 15) / 100;

console.log(`TOTAL = R$ ${total.toFixed(2)}`);
