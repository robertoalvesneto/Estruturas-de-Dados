<h1>Ordenar com base na frequência</h1>

<h4>Atividade:</h4>
<p>Apresente um algoritmo que receba uma tabela de números inteiros e os ordene em ordem decrescente tendo como critério a sua frequência, isto é, o número de vezes que cada um deles ocorre na tabela.</p>
<h4>Exemplo:</h4>
<p>antes: 1 3 5 6 6 6 3 3 3 1<br>após: 3 3 3 3 6 6 6 1 1 5</p>
<h4>Estratégia adotada</h4>
<ul>
<li>ordenando o vetor normalmente;</li>
<li>criar dois vetores para mapeamento. Um contém todos os números diferentes que aparecem e o outro a quantidade de vezes que cada valor desses aparece;</li>
<li>ordenamos em ordem decrescente o vetor de quantidade de cada valor e conforme trocamos seus valores de posição, trocamos os valores do vetor ‘’valores’;</li>
<li>montamos o vetor original com os valores ordenado.</li>
</ul>

