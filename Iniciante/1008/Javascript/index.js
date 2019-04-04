var input = `6
145
15.55 `;
var lines = input.split("\n");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let number = parseInt(lines[0]);
let hour = parseInt(lines[1]);
let cost = parseFloat(lines[2]);

let salary = hour * cost;

console.log(`NUMBER = ${number}`);
console.log(`SALARY = U$ ${salary.toFixed(2)}`);
