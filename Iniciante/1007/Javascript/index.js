var input = `5
6
7
8`;
var lines = input.split("\n");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let A = parseInt(lines[0]);
let B = parseInt(lines[1]);
let C = parseInt(lines[2]);
let D = parseInt(lines[3]);

let DIFERENCA = (A * B - C * D);

console.log(`DIFERENCA = ${DIFERENCA}`);
