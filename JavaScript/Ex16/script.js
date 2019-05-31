function contar() {
   let ini = document.getElementById("txti");
   let fim = document.getElementById("txtf");
   let passo = document.getElementById("txtp");
   let res = document.getElementById("res");

 
    if(ini.value.length == 0 || fim.value.length == 0 || passo.value.length == 0) {
        res.innerHTML = "Impossível contar!";
    } else {
        res.innerHTML = `Contando: <br> `
        let x = Number(ini.value);
        let y = Number(fim.value);
        let z = Number(passo.value);
        if(z <= 0) {
            window.alert("Passo inválido! Considerando PASSO = 1")
            z = 1;
        }
        if(x < y) {
            for (let c = x; c <= y; c += z) {
                res.innerHTML += `${c} \u{1F449} `;
            }
        } else {
            for (let c = x; c >= y; c -= z) {
                res.innerHTML += `${c} \u{1F449} `;
            }
        }
        
        res.innerHTML += `\u{1F3C1}`
    }
}