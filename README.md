# Máquina NORMA (Simulador)
Repositório relativo a simulação de funções de uma máquina Norma.

## Como contribuir?
Só me pedir o acesso que eu libero pra vocês abrirem as PRs, ou caso já tiverem só continuar lendo as intruções abaixo.

### Requisitos para participar
Saber programar em `c++`

### Regras
✅ O que pode fazer:

1. Comparar se um valor é igual a zero
2. Somar 1 a algum valor;
3. Subtrair 1 de algum valor;

❌ O que não pode fazer:
> Essas operações não existem em uma máquina NORMA, então algumas das operações tiveram que passar por conversão em forma de função, a fim de simular o máximo possível de como os processos ocorrem nessa máquina.

1. Uso de `while`
> use `goto` ao invés de `while`...
2. Atribuição de valor diretamente a alguma variável
> use a macro `int aux = atribuiValor();` ao ínvés de `int aux = X;`
3. Atribuição de zero diretamente a alguma variavel
> use a macro `int aux = atribuiZero();` ao ínvés de `int aux = 0;`

### Desenvolvimento
Basta seguir a sequência abaixo

1. Faça o clone do repositório
2. Abra a branch a partir da *master*, com o seguinte nome `feat/{NOME DA FUNÇÃO A SER IMPLEMENTADA}`, exemplos:
    * `feat/somador`
    * `feat/multiplicador`
    * `feat/divisor`
3. Depois de implementada a função, é só abrir uma PR e aguardar a revisão
4. Se tudo estiver de acordo com as [regras](#regras) ela será aprovada e mergeada na branch *master*
5. Após isso, já aparecerá sua contribuição ao projeto! 🎉
