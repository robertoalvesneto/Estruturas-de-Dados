<h1>Insertionsort</h1>

<h4>Lógica do algoritmo</h4>
<p>Usa a estratégia de inserir o valor já na sua posição correta. Para isso ele pega um vetor que esteja ordenado e, dado cada valor novo, compara com os valores do vetor até achar sua posição correta.</p>
<p>Para ordenar o vetor inteiro é como se ele fizesse uma divisão lógica em dois subvetores, o primeiro vetor desordenado de tamanho N e o segundo ordenado de tamanho 0. A cada passagem é pego o primeiro valor do 1º vetor e posto na sua posição no 2º vetor. Quando um novo valor é posto no 2º vetor o seu tamanho é incrementado em um e o 1º vetor é decrementado em um. Esse processo se repete até o tamanho do 1º vetor ser 0.</p>
<p>Esse algoritmo é um pouco mais complexo do que o bubblesort, contudo, ainda muito fácil. Sua complexidade continua sendo O(n²), apesar de empiricamente apresentar desempenho melhor que o bubblesort, pois isso depende do grau de ordenação da lista inicial.</p>

<h4>Vantagem</h4>
<p>O seu melhor caso - vetor ordenado - é O(n). Pode parecer estranho um algoritmo de ordenação onde a sua vantagem é com vetores já ordenados, contudo, isso faz sentido quando queremos inserir poucos valores em um vetor que já está ordenado. Nessa respectiva situação, o insertion é o melhor algoritmo.</p>

