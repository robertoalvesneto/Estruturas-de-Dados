<h1>Bubblesort</h1>

<h4>Lógica do algoritmo</h4>
<p>É o algoritmo de ordenação mais simples, tanto em lógica quanto em implementação. </p>
<p>Consiste em pegar o primeiro valor do vetor e ir comparando com todos os outros, trocando de posição conforme encontrar um maior. Quando terminar de percorrer todo o vetor, teremos no final dele o maior valor. Esse processo é repetido N vezes, onde N é a quantidade de termos do vetor.</p>
<p>Como esse algoritmo realiza N comparações para encontrar cada maior valor, e ele precisa rodar N vezes para organizar todos eles, sua complexidade é O(n²)</p>

<h4>Critérios de parada</h4>
<p>Existem dois critérios de parada que podem ser usados para melhorar a eficiência do bubblesort:</p>
<ol>
<li>Como em toda passagem colocamos o maior valor no final do vetor, na passagem seguinte não precisamos comparar com a última posição, já que sabemos que o maior valor está nela.</li>
<li>Se, durante uma passagem, nenhum dos valores trocar de posição, significa que o vetor já está ordenado, logo, o algoritmo pode finalizar.</li>
</ol>
<p>Com esses dois critérios o algoritmo continua sendo O(n²) no pior caso e no caso médio, contudo, no melhor caso - onde o vetor já está ordenado - ele passa a ser O(n)</p>

