<h1>Shellsort</h1>

<p>Foi o primeiro algoritmo a superar a barreira que era o grau de complexidade O(ṇ²), tendo como complexidade O(n log n)</p>
<p>Baseia-se  no algoritmo insertionsort. Enquanto o insertionsort sempre compara com o valor na posição seguinte, o shellshort compara com o valor a H posições, dessa forma, quando ele termina de rodar, o vetor está H ordenado, ou seja, todos o valores que estão com uma distância H entre si estão ordenados. Utilizar um H=1 é o equivalente ao insertionsort.</p>
<p>O shellsort irá ordenar o vetor com base no salto H, então depois o valor do H será recalculado para um valor menor e o algoritmo irá rodar novamente, até que H seja igual a 1.</p>
<p>Essas ordenações fazem o vetor se aproximar do caso ideal para o insertionsort.</p>
<p>A eficiência dessa estrategia está diretamente ligada a equação matemática que irá determinar o valor de H. Se, por exemplo, H sempre for valores múltiplos ( 8, 4, 2, 1, por exemplo) ele estará sempre comparando as mesmas posições. A melhor estratégia é a de  KNU, que determina o algoritmo:</p>
<pre>
h(s) =	| 1,		se s = 1<br>
        | 3h(s-1)+1,	se s>1
</pre>
