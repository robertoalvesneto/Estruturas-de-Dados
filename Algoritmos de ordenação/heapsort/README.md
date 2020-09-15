<h1>Heapsort</h1>

<h4>Heap</h4>
<p>O heap é uma lista de prioridade que pode ser visualizada na forma de árvore binária. Ela segue a seguinte equação para sua construção: </p>
<pre>
	S<i>i</i> <= S<i>|i/2|</i>, para 1 < <i>i</i> < n
	onde, n == tamanho do vetor e S<i>i</i> é a posição atual
</pre>
<p>O heap consegue construir sua estrutura em complexidade O(n) e remover cada maior valor(raiz) em complexidade O(log n). Com isso é fácil de deduzir sua utilidade para ordenação. A cada remoção retiramos o maior valor da lista, se fizermos isso n vezes temos o vetor ordenado.</p>
<p>O algoritmo tem complexidade O(n log n)</p>

<h4>Algoritmo</h4>
<ol>
<li>Construir o heap. O(n)</li>
<li>Remover seu maior valor(o 1°) e colocar no final do vetor(essa posição será desindexada pelo heap no próximo loop, assim ficando como se não existisse.). O(log n)</li>
<li>Repetir o passo anterior até que o heap termine.</li>
</ol>

