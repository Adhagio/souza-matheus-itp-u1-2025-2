# Introdução a Técnicas de Programação - Unidade 1
**Aluno**: Matheus Ronaldo de Souza
**Matrícula**: 20250024920
**Período**: 2025.2


## 📁 Estrutura do Projeto
- `projeto/`: Projeto principal da unidade
- `listas/`: Soluções das listas de exercícios
- `README.md`: Este arquivo


## 🚀 Projeto: Jogo da Velha com IA básica
**Descrição**: [Implementação do jogo da velha em C com interface de linha de comando, incluindo modo para dois jogadores e modo jogador versus computador]
**Repositório**: [https://github.com/Adhagio/souza-matheus-itp-u1-2025-2]
**Vídeo de Demonstração**: [https://youtu.be/rvgV0bT9DaE]


### Funcionalidades Implementadas:

- Tabuleiro 3x3 com interface visual clara
- Modo para dois jogadores humanos
- Modo jogador versus computador com IA
- IA que bloqueia jogadas vencedoras do oponente
- IA que busca oportunidades de vitória
- Validação de entradas do usuário
- Sistema de detecção de vitória/empate
- Menu interativo e reinício de partidas


### Conceitos da U1 Aplicados:

- Estruturas condicionais: Validação de jogadas em `posicaoValida()`, detecção de vitória em `verificarVencedor()`, controle de fluxo no menu com `switch-case`
- Estruturas de repetição: Loop principal do jogo em `main()`, buscas sistemáticas na IA com loops `for` aninhados, validação de entrada com `while`
- Vetores: Matriz `tabuleiro[3][3]` para estado do jogo, vetor `tentativas[9][2]` para estratégia de prioridades da IA
- Funções: 13 funções incluindo `inicializarTabuleiro()`, `verificarVencedor()`, `obterJogadaIA()`, `podeVencer()` com responsabilidades bem definidas


## 📚 Listas de Exercícios

### Semana 2 - Variáveis, Tipos e Operadores:
- ✅ Problema 1: Calculadora de IMC
- ✅ Problema 2: Conversão de temperatura
- ✅ Problema 3: Cálculo de juros compostos
- ✅ Problema 4: Operações aritméticas básicas

### Semana 3 - Condicionais:

- ✅ Problema 1: Classificação de IMC
- ✅ Problema 2: Calculadora de energia elétrica
- ✅ Problema 3: Sistema de notas
- ✅ Problema 4: Pedra, papel, tesoura
- ✅ Problema 5: Calculadora de desconto progressivo
- ✅ Problema 6: Diagnóstico médico simples
- ✅ Problema 7: Sistema de equações do 2º grau
- ✅ Problema 8: Validador de triângulos

### Semana 4A - Repetições:

- ✅ Problema 1: Dobrar folha
- ✅ Problema 2: Homem Aranha
- ✅ Problema 3: Números colegas
- ✅ Problema 4: Jogo de dardos

### Semana 4B - Análise e Padrões:

- ✅ Questões 1-4: Análise de código
- ✅ Questões 5-11: Implementações

### Semana 5 - Funções (Parte 1):

- ✅ Problema 1: Horários das rondas
- ✅ Problema 2: Primos triplos
- ✅ Problema 3: Pousando a sonda espacial

### Semana 6 - Vetores:

- ✅ Problema 1: MEC - Correção ENEM
- ✅ Problema 2: Álbum de figurinhas
- ✅ Problema 3: A construção da ponte
- ✅ Problema 4: Em busca do tesouro perdido

## 🎯 Principais Aprendizados

 Aprendi a importância de dividir um projeto complexo em sprints menores, desenvolvendo funcionalidades básicas primeiro e depois aprimorando incrementalmente.Aprendi também a organizar o código em funções especializadas com responsabilidades únicas, facilitando a manutenção, testes e compreensão do código, além de compree nder a necessidade de validar todas as entradas do usuário para evitar comportamentos inesperados e loops infinitos, implementando sistemas de tratamento de erro.


## 🔧 Ambiente de Desenvolvimento

- **SO**: [Windows/Linux/macOS]
- **Compilador**: GCC versão [X.X]
- **Editor**: Visual Studio Code