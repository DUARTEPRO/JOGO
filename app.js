let listaDeNumeros = [];
let numeroSecreto = numeroAleatorio();
let tentativas = 1 ;
let numeroLimite = 10;
function textoNaTela(tag,texto) {
    let tituloFrase = document.querySelector (tag);
    tituloFrase.innerHTML = texto;
    responsiveVoice.speak(texto, 'Brazilian Portuguese Female', {rate : 1.2});
 }
 reiniciarJogo();
 mensagemInicial();
 function mensagemInicial() {
textoNaTela('h1', 'Jogo do advinhe o numero');
textoNaTela('p' , 'escolha um numero de 1 a 10');
   } 
function verificarChute() {
    let chute = document.querySelector('input').value;
    if   (chute == numeroSecreto) {
        textoNaTela('h1', 'VOCE ACERTOU!');
        let palavraTentativa = tentativas > 1 ? 'tentativa':'tentativas';
        let mensagemTentativa = `voce acertou o numero secreto com ${tentativas} ${palavraTentativa}`;
                textoNaTela('p', mensagemTentativa);
                document.getElementById('reiniciar').removeAttribute('disabled');
    }  else {
        if (chute > numeroSecreto){
            textoNaTela('p', `o numero secreto e menor que ${chute}`);
        } else {
                textoNaTela('p', `o numero secreto e maior que ${chute}`); 
        }
        tentativas++;
    }
}
function numeroAleatorio() {
    let numeroEscolhido = parseInt(Math.random() * numeroLimite + 1); 
    let quantidadeDeNumeros = listaDeNumeros.length;
    if (numeroEscolhido == numeroLimite) {
       listaDeNumeros = [];
    }
    if (listaDeNumeros.includes(numeroEscolhido) ) {
      return numeroAleatorio();
    } else {
        listaDeNumeros.push(numeroEscolhido);
        console.log (listaDeNumeros);
        return numeroEscolhido;
    }
    
}
function limparCampo() {
    chute = document.querySelector('input');
    chute.value = '';
}
function reiniciarJogo() {
    numeroSecreto = numeroAleatorio();
    limparCampo();
    tentativas = 1;
    mensagemInicial();
    document.getElementById('reiniciar').setAttribute ('disabled', true);
}











