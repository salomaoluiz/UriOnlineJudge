var input = `5.0
7.1`
var lines = input.split('\n');

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let A = parseFloat(lines[0]);
let B = parseFloat(lines[1]);
let MEDIA = (A*3.5 + B * 7.5) / 11
console.log(`MEDIA = ${MEDIA.toFixed(5)}`);

