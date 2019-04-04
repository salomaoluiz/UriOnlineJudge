var input = `13 2 15.30
161 4 5.20`;
var lines = input.split("\n");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
let piece1 = lines[0].split(" ");
let piece2 = lines[1].split(" ");

for (let i = 0; i < 3; i++) {
  piece1[i] = parseFloat(piece1[i]);
  piece2[i] = parseFloat(piece2[i]);
}
let total = piece1[1] * piece1[2] + piece2[1] * piece2[2];

console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);
