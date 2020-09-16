<h1>Mergesort</h1>

<h4>Lógica do algoritmo</h4>
<p>Utiliza da estratégia de dividir para conquistar. O vetor principal é dividido em dois vetores menores de igual tamanho, então então é chamado recursivamente cada um desses vetores e são divididos novamente, até ficarem com o tamanho 1.</p>
<p>Agora ele irá voltar unindo os vetores repartidos ordenando os valores internos. Isso ocorre da seguinte forma:</p>
<ol>
<li>Compara a 1̣º posição do vetor1 com a 1ºposição do vetor2.</li>
<ol>
<li>Se a 1º do vetor1 for maior, coloca o seu valor em vetor auxiliar e incrementa o contador do vetor1.</li>
<li>Se não, coloca o valor do vetor2 em vetor auxiliar e incrementa o contador do vetor2</li>
</ol>
<li>enquanto não chegar no final do vetor1 ou do vetor2, repetir passo 1.</li>
<li>Colocar todos os valores do vetor que ainda tem elementos no vetor auxiliar.</li>
</ol>
<p>Essa implementação tem complexidade O(n log n), contudo possui uma implementação relativamente complexa.</p>


