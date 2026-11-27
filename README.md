*This project has been created as part of the 42 curriculum by kmota, mafvicen.*

# Push_swap — Estado do projeto

**Atualizado: 27/11/2026 | Fase atual: Scope em processo**

## Description — Objetivo

Ordenar números inteiros em ordem crescente na stack A, utilizando uma stack auxiliar B e apenas as 11 operações permitidas. O programa deve minimizar as operações emitidas, implementar quatro estratégias (`simple`, `medium`, `complex` e `adaptive`) e selecionar a estratégia adequada em tempo de execução.

## 1. Estado geral

| Etapa | Estado |
|---|---|
| Estruturas, Libft e Makefile | Implementados e compilando sem avisos (`-Wall -Wextra -Werror`) |
| Testes finais, Norminette e memória | Em andamento (`valgrind` já validado com 0 leaks no fluxo atual) |
| Checker próprio (bonus) | Pendente; opcional |

## 2. Estrutura atual de trabalho

```text
push_swap/
├── Makefile
├── push_swap.h
├── libft/
│   ├── ft_printf/
```

## 3. Estruturas de dados

### Pilhas e nós (`t_node`, `t_stack`)

### Chunks e configuração de execução (`t_chunk`, `t_strategy`, `t_config`)

## 4. Funções implementadas

### Parsing e gestão de memória

### Operações

### Ordenação pequena e utilitários (`sort_small.c`, `sort_utils.c`, `indexing.c`)

## 5. Simple — `sort_simple.c`

## 6. Medium — `sort_medium.c` e `chunk_utils.c` (Validado)

### Resultados medidos no Medium (`./checker_linux`)

## 7. Próximas etapas:

## Instructions — Compilação e execução

*Nota: no presente momento, (27/11/2026), a compilacao eh feita com ```cc -Wall -Wextra -Werror ft_*.c -o push_swap``` ao inves de "make", pois o ``Makefile`` esta no processo de criacao.*
```sh
make
./push_swap 42 -15 800 0 7
./push_swap "5 4 3 2 1"
./push_swap 1 2 3 4 5
./push_swap --simple 5 4 3 2 1
./push_swap --medium 42 -15 800 0 7
./push_swap --complex 42 -15 800 0 7
./push_swap --adaptive --bench 42 -15 800 0 7
```

- Entradas vazias, apenas com flags ou já ordenadas terminam com status `0` sem emitir operações.
- Flags desconhecidas (ex.: `--invalida`) ou argumentos inválidos/duplicados emitem `Error\n` no `stderr` e terminam com status `1`.

## 8. Testes já realizados

## 9. Checklist até à entrega

- [ ] Implementar e validar Medium (`sort_medium.c`, `chunk_utils.c`) com 100 e 500 números.
- [ ] Implementar parsing de flags (`--simple`, `--medium`, `--complex`, `--adaptive`, `--bench`) em `parse_flags.c`.
- [ ] Implementar Complex ($O(n \log n)$) e demonstrar operações para 100 e 500 números.
- [ ] Implementar `compute_disorder()` e seleção automática no modo Adaptive.
- [ ] Implementar saída completa do `--bench` no `stderr` (percentagem de disorder, estratégia, total e contagem das 11 operações).
- [ ] Rever operações duplas (`ss`, `rr`, `rrr`) e casos sem efeito.
- [ ] Executar `norminette` em todos os `.c` e `.h` (remover comentários `//`, ajustar espaçamento e cabeçalhos).
- [ ] Limpar ficheiros temporários (`checker_linux`, `main_jeanlezy.c` $\rightarrow$ `main.c`, protótipos não utilizados) e confirmar `Makefile` sem relink.
- [ ] Revisão final da documentação e defesa da dupla.

## 10. Contribuições da dupla

- **kmota:**
- **mafvicen:**
- **Ambos:**

## Resources — Referências e utilização de IA