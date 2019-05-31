let valores = [8, 1, 7, 4, 2, 9];
valores.sort();
/*
for(let i = 0; i < valores.length; i++) {
    console.log(`Vetor na posição ${i}: {${valores[i]}}`);
}
*/
for(let pos in valores) {
    console.log(`A posição ${pos} tem o valor ${valores[pos]}`);
}