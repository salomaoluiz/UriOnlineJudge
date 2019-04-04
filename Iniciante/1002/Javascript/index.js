var input = '2.00'
var lines = input.split(' ');

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let raio = lines[0];
let pi = 3.14159;
let area = Math.pow(raio, 2) * pi;

console.log(`A=${area.toFixed(4)}`);

