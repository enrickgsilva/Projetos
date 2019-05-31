let num = [5, 8, 2, 9, 3];

num.push(1); //adiciona o valor 1 no final do vetor num
console.log(`Vetor não ordenado: ${num}`);
console.log(`O vetor tem ${num.length} posições`); //num.length mostra o tamanho do vetor
num.sort(); //ordena o vetor
console.log(num[0]);
console.log(`Vetor ordenado: ${num}`);
let pos = num.indexOf(20); //faz a busca do valor 8 no vetor
console.log(`O valor 8 está na posição ${pos}`);