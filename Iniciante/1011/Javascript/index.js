var input = `12.7 10.4 15.2`;
var lines = input.split(" ");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

let A = parseFloat(lines[0]);
let B = parseFloat(lines[1]);
let C = parseFloat(lines[2]);
let pi = 3.14159;

let TRIANGULO = (A * C) / 2;
let CIRCULO = pi * Math.pow(C, 2);
let TRAPEZIO = ((A + B) * C) / 2;
let QUADRADO = Math.pow(B, 2);
let RETANGULO = A * B;

console.log("TRIANGULO: " + TRIANGULO.toFixed(3));
console.log("CIRCULO: " + CIRCULO.toFixed(3));
console.log("TRAPEZIO: " + TRAPEZIO.toFixed(3));
console.log("QUADRADO: " + QUADRADO.toFixed(3));
console.log("RETANGULO: " + RETANGULO.toFixed(3));
