// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
// Inicio Do Codigo
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Todas As Variaveis
    // Acesso||Repeticao
    char area[1], acesso[1];
    int areaRepeticao, acessoRepeticao;
    // Cliente||Funcionario
    int cliente, funcionario, login, cadastro;
    int tentativasRepeticao = 1;
    // Username||Password Para Acesso
    char username[20], password[20], passwordRepeat[20];
    // Username||Password Do Banco De Dados
    char usernameBDD[] = {"Kaua"};
    char passwordBDD[] = {"1234"};
    // Inicio Das Variaveis Da Aba Para O Cliente
    //  Menu Para Cliente
    char menuCliente[1];
    int menuClienteRepeticao;
    // Carrinho De Compra
    char roupa[1];
    int roupaRepeticao, carrinhoRepeticao, SsNnRepeticao;
    // Pecas De Roupas
    char camisa[500], blusa[500], shorts[500], calca[500], pecasIntimas[500], meias[500];
    int conveterCamisa = 0, conveterBlusa = 0, conveterShorts = 0, conveterCalca = 0, conveterPI = 0, conveterMeias = 0;
    // Para Adicionar Mais Peças No Carrinho
    char reCompra[1];
    // Valor Total Da Compra
    float contaCamisa, contaBlusa, contaShorts, contaCalca, contaPI, contaMeias, total;
    // Pagamento
    char pareclamento[1], stringParcelas[2];
    int parcelas, pagamento;
    float totalParcelado;
    int parcelamentoRepeticao;
    // Confirmacao Da Compra
    char conferir[1], compraFinalizada[1];
    int compraAprovada;
    int compraFinalizadaRepeticao, confirmacaoCompraRepeticao, conferirRepeticao;
    // Prazo De Entrgra
    // Escholha Do Problema
    char opcoeReclamacao[1];
    int reclamacaoRepeticao;
    // Dados Para Reclamacao
    char fullName[30], telefone[11];
    int telefoneInteiro, telefoneRepeticao;
    // Solucao Resolvida
    char problemaMenu[1];
    int solucaoResolvidaRepeticao, problemaParaMenu, solucaoResolvida;
    // Fim Das Variaveis Da Aba Para O Cliente
    // Inicio Das Variaveis Da Aba Para O Funcionario
    //  Menu Para Funcionario
    char menuFuncionario[1];
    int menuFuncionarioRepeticao;
    // Cargos Dos Funcionarios
    int vendedor = 0, estoque = 0, recepcao = 0, fundador = 0;
    int vendedorRepeticao, estoqueRepeticao, recepcaoRepeticao, fundadorRepeticao;
    // Menu Para Os Cargos
    char menuVendedor[1], menuEstoque[1], menuRecepcao[1], menuFundador[1];
    int menuVendedorRepeticao, menuEstoqueRepeticao, menuRecepcaoRepeticao, menuFundadorRepeticao;
    // Retornar Para O Menu
    int retorno, retornoRepeticao;
    char backToMenu[1];
    // Menu Vendedor
    //  Estoque
    char escolhaEstoque[1], roupaEstoque[1], pecasEstoque[1];
    int escolhaRoupasEstoque, pecasEstoqueRepeticao, selecaoRepeticao, roupaEstoqueRepeticao;
    // Pecas Do Estoque
    char pecaCamisa[4], pecaBlusa[4], pecaShorts[4], pecaCalca[4], pecaMeias[4], pecaPI[4];
    int convPecaCamisa, convPecaBlusa, convPecaShorts, convPecaCalca, convPecaMeias, convPecaPI;
    // Adicionar Mais Pecas
    char adicionarPeca[1];
    int adicionarPecasRepeticao;
    // Confirmar A Solicitacao
    int solicitacaoAprovada, solicitacaoAprovadaRepeticao, solicitacaoFinalizada;
    char escolhaParaAprovacao[1];
    // Capacidade Maxima Do Estoque
    char capacidadeEstoque[5], quantidadeEstoque[5];
    int valorCapacidadeEstoque, x, y, valorQuantidadeEstoque;
    float resultadoEstoque, resultadoFinal;
    int descubraCapacidadeRepeticao;
    // Voltar Para O Menu Apos O Estque
    char descoberto[1];
    int desccobertoRepeticao, valorDescoberto;
    // Bonus Para O Vendedor
    char bonus[5], bonusRetorno[1];
    float resultadoBonus, valorAdcional;
    int bonusRepeticao, valorBonus, fimBonus, fimBonusRepeticao;
    // Marcar Reuniao
    char marcarReuniao[1], reuniaoBackMenu[1];
    int marcarReuniaoRepeticao, reuniaoBackMenuRepeticao, reuniaoMarcada;
    // Duvidas
    char duvidaRespondida[1];
    int duvidaRepeticao;
    // Forma De Pagamento
    int debito, credito, frmDePagamentoRepeticao;
    char frmDePagamento[1];
    // Quantas Parcelas Falta
    char qntsParcelas[2], qntsParcelasPaga[2], vlrPago[5], parcelasBackToMenu[1];
    int convQntsParcelas, convQntsParcelasPaga, convVlrPago, parcelasASerPagaRepeticao, parcelasPagas, parcelasBackToMenuRepeticao;
    float vlrTotalASerPago, valorDividoParcelado;
    int vlrPagoRepeticao, pclsPagasRepeticao, pclsFaltamRepeticao;
    // Fim Do Menu Vendedor
    // Menu Recepcao
    // Lista Do Todo
    int numberRecepcao, todoFim, todoFimRepeticao;
    char todoRetorno[1];
    // Listas De Telefone
    char listaTelefonema[1];
    int listaTelefonemaRepeticao;
    // Fim Do Menu Recepcao
    // Menu  Fundador
    // Relatorio
    char relatorio[1], relatorioBackToMenu[1];
    int relatorioRepeticao, relatorioBackToMenuRepeticao;
    // Arquivo
    char contaGastos[5], salarioGastos[5], roupasVendidasLucro[5], mesAtual[2], relatorioEnd[1];
    int convContaGastos, arquivoRepeticao, contasGastosRepeticao, convSalarioGastos, salarioGastosRepeticao, convRoupasVendidasLucro, roupasVendidasLucroRepeticao;
    int convMesAtual, mesAtualRepeticao, fimDoRelatorio, fimDoRelatorioRepeticao;
    float totalLucro;
    FILE *arquivo_relatorio;
    // Reuniao Fundador
    char fimReuniaoFundador[1];
    int qntdReuniao, reuniaoFundador, reuniaoFundadorRepeticao;
    // To-Do Fundador
    int numberFundador, todoFundadorRepeticao;
    char todoFundador[1];
    // Atoi Para Os Menus
    int convMenuCliente, convArea, convRoupa, convReCompra, convConferir, convParcelamento, convDuvidasRespondidas, convFrmDePagamento, convParcelasBackToMenu;
    int convAcesso;
    // Fim Das Variaveis

    // Inico Do Sistema
    //  Liberação Para O Restante Do Codigo
    do
    {
        printf("Seja Bem-Vindo A Venom!\n");
        printf("\n1 - Área Do Cliente\n2 - Área Do Funcionário\n3 - Sair");
        printf("\nDigite A Área Que Deseja Acessar: ");
        scanf("%s", &area);
        convArea = atoi(area);
        // Inicio Da Area
        switch (convArea)
        {
        case 1: // Cliente
            printf("\nCliente Faça Seu: ");
            cliente = 1;
            funcionario = 0;
            areaRepeticao = 0;
            break;

        case 2: // Funcionario
            printf("\nFuncionário Faça Seu: ");
            cliente = 0;
            funcionario = 1;
            areaRepeticao = 0;
            break;

        case 3: // Sair
            printf("\nOK, Volte Sempre!");
            cliente = 0;
            funcionario = 0;
            areaRepeticao = 0;
            break;

        default: // Opcao (Erro)
            printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
            cliente = 0;
            funcionario = 0;
            areaRepeticao = 1;
            break;
        }
        // Fim Da Area
        // Condicao Para Login||Cadastro
        if (cliente == 1 || funcionario == 1)
        {
            do
            {
                printf("\n1 - Login\n2 - Cadastro\n3 - Voltar");
                printf("\nDigite Um Valor: ");
                scanf("%s", &acesso);
                convAcesso = atoi(acesso);
                switch (convAcesso)
                {
                case 1:
                    // Codigo Para Login
                    do
                    {
                        printf("\nFaça Seu Login!");
                        printf("\nDigite Seu Usuário: ");
                        scanf("%s", &username);
                        printf("Digite Sua Senha: ");
                        scanf("%s", &password);

                        if ((strcmp(username, usernameBDD) == 0) && (strcmp(password, passwordBDD) == 0))
                        {
                            printf("\nLogin Efetuado Com Sucesso!");
                            printf("\nSeja Bem-Vindo %s!", username);
                            login = 1;
                            cadastro = 0;
                            acessoRepeticao = 0;
                            tentativasRepeticao = 5;
                        }

                        else
                        {
                            printf("\nUsuário/Senha Invalidos! Tente Novamente!");
                            printf("\nTentativas %d De 3!\n", tentativasRepeticao);
                            tentativasRepeticao++;
                            if (tentativasRepeticao == 4 || tentativasRepeticao > 5)
                            {
                                printf("\nNúmero De Tentativas Atingido!");
                                printf("\nAcesso Negado!");
                                printf("\nReinicie O Software!");
                                login = 0;
                                cadastro = 0;
                                tentativasRepeticao = 5;
                                acessoRepeticao = 0;
                                areaRepeticao = 0;
                            }
                        }
                    } while (tentativasRepeticao <= 4);
                    break;
                    // Fim Do Codigo Para Login

                case 2:
                    // Codigo Para Cadastro
                    do
                    {
                        printf("\nFaça O Seu Cadastro!");
                        printf("\nUsuario/Senha Tem Que Ser Maior Que 4 E Menor Que 10!");
                        printf("\nDigite Um Nome Para Seu Usuário: ");
                        scanf("%s", &username);
                        printf("Digite Sua Nova Senha: ");
                        scanf("%s", &password);
                        printf("Digite Sua Senha Novamente: ");
                        scanf("%s", &passwordRepeat);
                        // Verificar Tamanho
                        if (strlen(password) >= 4 && strlen(password) <= 10 && strlen(passwordRepeat) >= 4 && strlen(passwordRepeat) <= 10 && strlen(username) >= 4 && strlen(username) <= 10)
                        {
                            // Conferir Se Sao Iguais
                            if ((strcmp(password, passwordRepeat) == 0))
                            {
                                printf("\nCadastro Efetuado Com Sucesso!");
                                printf("\nSeja Bem-Vindo %s!", username);
                                login = 0;
                                cadastro = 1;
                                acessoRepeticao = 0;
                                tentativasRepeticao = 5;
                            }

                            else
                            {
                                printf("\nUsuário/Senha Invalidos! Tente Novamente!");
                                printf("\nTentativas %d De 3!\n", tentativasRepeticao);
                                tentativasRepeticao++;
                                if (tentativasRepeticao == 4 || tentativasRepeticao > 5)
                                {
                                    printf("\nNúmero De Tentativas Atingido!");
                                    printf("\nAcesso Negado!");
                                    printf("\nReinicie O Software!");
                                    login = 0;
                                    cadastro = 0;
                                    tentativasRepeticao = 5;
                                    acessoRepeticao = 0;
                                    areaRepeticao = 0;
                                }
                            }
                            // Conferir Se Sao Iguais
                        }

                        else
                        {
                            printf("\nUsuário/Senha Possuem Pouco/Muitos Caracteres! Tente Novamente!");
                            printf("\nTentativas %d De 3!\n", tentativasRepeticao);
                            tentativasRepeticao++;
                            if (tentativasRepeticao == 4 || tentativasRepeticao > 5)
                            {
                                printf("\nNúmero De Tentativas Atingido!");
                                printf("\nAcesso Negado!");
                                printf("\nReinicie O Software!");
                                login = 0;
                                cadastro = 0;
                                tentativasRepeticao = 5;
                                acessoRepeticao = 0;
                                areaRepeticao = 0;
                            }
                        }
                        // Fim De Verificar Tamanho
                    } while (tentativasRepeticao <= 4);
                    break;
                    // Fim Do Codigo Para Login

                case 3:
                    // Sair
                    printf("\nRetornando!\n");
                    areaRepeticao = 1;
                    acessoRepeticao = 0;
                    break;

                default:
                    // Opcao (Erro)
                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                    acessoRepeticao = 1;
                    areaRepeticao = 0;
                    break;
                }
            } while (acessoRepeticao == 1);
        }
        // Fim Da Condicao Para Login||Cadastro
    } while (areaRepeticao == 1);
    // Fim Da Liberação Para O Restante Do Codigo
    // Condicao Para Acessar Menu Do Cliente
    if (cliente == 1 && login == 1 || cliente == 1 && cadastro == 1)
    {
        do
        {
            printf("\n\nMenu Dedicado Para Os Clientes!");
            printf("\n1 - Carrinho De Compra\n2 - Prazo De Entregra\n3 - Compra Pelo Telenofe/Dúvidas\n4 - Pagamento\n5 - Sair");
            printf("\nDigite O Valor Do Menu Que Deseja Acessar: ");
            scanf("%s", &menuCliente);
            convMenuCliente = atoi(menuCliente);
            // Menu Para O Cliente
            switch (convMenuCliente)
            {
            case 1:
                // Codigo Carinho
                printf("\nCarrinho Selecionado! Roupas Unisex!");
                printf("\nConfira As Roupas!");
                // Codigo Para As Roupas
                do
                {

                    printf("\n\n1 - Camisa = 45.00R$\n2 - Blusa = 120.00R$\n3 - Shorts = 55.00R$\n4 - Calça = 75.00R$\n5 - Peças Intimas(Pacote Com 3 Peças) = 20.00R$\n6 - Meias(Pacote Com 4 Peças) = 20.00R$");
                    printf("\nDigite A Peça Que Deseja: ");
                    scanf("%s", &roupa);
                    convRoupa = atoi(roupa);
                    switch (convRoupa)
                    {
                    case 1:
                        // Camisa
                        do
                        {
                            printf("\nCamisa Selecionada!\nQuantas Camisas Deseja: ");
                            scanf("%s", &camisa);
                            conveterCamisa = atoi(camisa);

                            if (conveterCamisa == 0 || conveterCamisa < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);
                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Camisa

                    case 2:
                        // Blusa
                        do
                        {
                            printf("\nBlusa Selecionada!\nQuantas Blusa Deseja: ");
                            scanf("%s", &blusa);
                            conveterBlusa = atoi(blusa);

                            if (conveterBlusa == 0 || conveterBlusa < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);

                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Blusa

                    case 3:
                        // Shorts
                        do
                        {
                            printf("\nShorts Selecionado!\nQuantas Shorts Deseja: ");
                            scanf("%s", &shorts);
                            conveterShorts = atoi(shorts);

                            if (conveterShorts == 0 || conveterShorts < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);

                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Shorts

                    case 4:
                        // Calca
                        do
                        {
                            printf("\nCalça Selecionada!\nQuantas Calça Deseja: ");
                            scanf("%s", &calca);
                            conveterCalca = atoi(calca);

                            if (conveterCalca == 0 || conveterCalca < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);

                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Calca

                    case 5:
                        // Pecas Intimas
                        do
                        {
                            printf("\nPeças Intimas Selecionada!\nQuantas Peças Intimas Deseja: ");
                            scanf("%s", &pecasIntimas);
                            conveterPI = atoi(pecasIntimas);

                            if (conveterPI == 0 || conveterPI < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);

                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Pecas Intimas

                    case 6:
                        // Meias
                        do
                        {
                            printf("\nMeias Selecionada!\nQuantas Meias Deseja: ");
                            scanf("%s", &meias);
                            conveterMeias = atoi(meias);

                            if (conveterMeias == 0 || conveterMeias < 0)
                            {
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                confirmacaoCompraRepeticao = 1;
                            }

                            else
                            {
                                confirmacaoCompraRepeticao = 0;
                            }
                        } while (confirmacaoCompraRepeticao == 1);

                        do
                        {
                            printf("\nDeseja Adicionar, Outra Peça No Carrinho: ");
                            printf("\n1 - Sim\n2 - Não");
                            printf("\nDigite Um Valor: ");
                            scanf("%s", &reCompra);
                            convReCompra = atoi(reCompra);
                            switch (convReCompra)
                            {
                            case 1:
                                printf("\nSelecione Outra Peça!\n");
                                carrinhoRepeticao = 1;
                                pagamento = 0;
                                SsNnRepeticao = 0;
                                break;

                            case 2:
                                printf("\nIndo Para O Menu De Pagamento!");
                                carrinhoRepeticao = 0;
                                pagamento = 1;
                                SsNnRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                SsNnRepeticao = 1;
                                pagamento = 0;
                                break;
                            }
                        } while (SsNnRepeticao == 1);
                        break;
                        // Fim Meias

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        carrinhoRepeticao = 1;
                        break;
                    }
                } while (carrinhoRepeticao == 1);
                // Fim Do Codigo Para As Roupas Roupas
                // Condicao Para Pagamento
                if (pagamento == 1)
                {
                    // Conta
                    contaCamisa = conveterCamisa * 45.00;
                    contaBlusa = conveterBlusa * 120.00;
                    contaShorts = conveterShorts * 55.00;
                    contaCalca = conveterCalca * 75.00;
                    contaPI = conveterPI * 20.00;
                    contaMeias = conveterMeias * 20.00;
                    total = contaCamisa + contaBlusa + contaShorts + contaCalca + contaPI + contaMeias;
                    // Confirmacao Da Compra
                    do
                    {
                        printf("\nTotal: %.2f", total);
                        printf("\n\n1 - Para Conferir As Roupas Adicionadas\n2 - Para Proxima Etapa\n3 - Cancelar A Compra");
                        printf("\nDigite A Opção Desejavel: ");
                        scanf("%s", &conferir);
                        convConferir = atoi(conferir);
                        switch (convConferir)
                        {
                        case 1:
                            printf("\nConfiras As Roupas Que Estão No Carrinho De Compra!");
                            printf("\nCamisa - %d = %.2fR$", conveterCamisa, contaCamisa);
                            printf("\nBlusa - %d = %.2fR$", conveterBlusa, contaBlusa);
                            printf("\nShorts - %d = %.2fR$", conveterCalca, contaCalca);
                            printf("\nCalça - %d = %.2fR$", conveterShorts, contaShorts);
                            printf("\nPeças Intimas - %d = %.2fR$", conveterPI, contaPI);
                            printf("\nMeias - %d = %.2fR$", conveterMeias, contaMeias);
                            printf("\nTotal = %.2f", total);

                        case 2:
                            do
                            {
                                printf("\n\nDeseja Parcelar?\n1 - Sim\n2 - Não");
                                printf("\nDigite O Valor Da Opção Desejavel: ");
                                scanf("%s", &pareclamento);
                                convParcelamento = atoi(pareclamento);
                                switch (convParcelamento)
                                {
                                case 1:
                                    do
                                    {
                                        printf("\nO Valor De %.2fR$, Pode Ser  Parcelado Em Até 12x Sem Juros!", total);
                                        printf("\nEm Quantas Vezes Deseja Pareclar: ");
                                        scanf("%s", &stringParcelas);
                                        parcelas = atoi(stringParcelas);

                                        if (parcelas >= 1 && parcelas <= 12)
                                        {
                                            totalParcelado = total / parcelas;
                                            printf("\nO Valor Parcelado = %.2f Em %d Meses", totalParcelado, parcelas);
                                            parcelamentoRepeticao = 0;
                                            compraAprovada = 1;
                                            conferirRepeticao = 0;
                                        }

                                        else
                                        {
                                            printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                            parcelamentoRepeticao = 1;
                                            compraAprovada = 0;
                                        }

                                    } while (parcelamentoRepeticao == 1);
                                    break;

                                case 2:
                                    printf("\nTotal = %.2fR$, Compra Aprovada!", total);
                                    parcelamentoRepeticao = 0;
                                    compraAprovada = 1;
                                    break;

                                default:
                                    printf("\nTecla Digitada Invalida, Tente Novamente!");
                                    compraAprovada = 0;
                                    parcelamentoRepeticao = 1;
                                    break;
                                }

                            } while (parcelamentoRepeticao == 1);
                            break;

                        case 3:
                            printf("\nCancelamento De Compra!");
                            printf("\nPor Motivos De Segurança Reinicie O Software!");
                            conferirRepeticao = 0;
                            break;

                        default:
                            printf("\nTecla Digitada Invalida, Tente Novamente!");
                            conferirRepeticao = 1;
                            break;
                        }
                    } while (conferirRepeticao == 1);
                    // Fim Da Confirmacao Da Compra
                }
                // Fim Da Condicao Para Pagamento
                break; // Fim Do Carrinho De Compras

            case 2:
                // Prazo De Entrega
                do
                {
                    printf("\nPrazo De Entrega Selecionado!");
                    printf("\nO Prazo De Entrega Das Roupas Pode Ser Feito Em Até 7 Dias Úteis!");
                    printf("\n\nDigite 1 - Se A Data De Entrega, Foi Atingida E O Produto Não Foi Entregue");
                    printf("\nDigite 2 - Caso O Produto Foi Entregue, Pórem Dias Após O Prazo Estimado");
                    printf("\nDigite 3 - Caso O Produto Não Foi Entregue E Está Dentro Do Prazo Estimado Ainda");
                    printf("\nDigite 4 - Caso O Produto Foi Entregue E Dentro Do Prazo Estimado");
                    printf("\nDigite A Opção Que Deseja: ");
                    scanf("%s", &opcoeReclamacao);
                    int convOpcoeReclamacao = atoi(opcoeReclamacao);
                    switch (convOpcoeReclamacao)
                    {

                    case 1:
                        printf("\nInforme Seu Primeiro Nome: ");
                        scanf("%s", &fullName);
                        do
                        {
                            printf("\nAo Digitar O Telefone, Digite os 11 Números Sem Espaço!");
                            printf("\nSr/Sra %s, Informe Seu Telefone: ", fullName);
                            scanf("%s", &telefone);
                            telefoneInteiro = atoi(telefone);

                            if ((strlen(telefone) == 11))
                            {
                                if (telefoneInteiro != 0)
                                {
                                    telefoneRepeticao = 0;
                                }
                                else
                                {
                                    printf("\nNúmero De Telefone Invalido, Tente Novamente!\n");
                                    telefoneRepeticao = 1;
                                }
                            }

                            else
                            {
                                printf("\nNúmero De Telefone Invalido, Tente Novamente!\n");
                                telefoneRepeticao = 1;
                            }

                        } while (telefoneRepeticao == 1);
                        printf("\nSr/Sra %s, Agradecemos Por Entrar Em Contato Conosco, Pedimos Desculpa Pelo Atraso Dos Nossos Produtos ,Entraremos Em Contato O Mais Rápido Possivél, Pelo Telefone Informado!\nAtenciosamente. Equipe Venom", fullName);
                        reclamacaoRepeticao = 0;
                        solucaoResolvida = 1;
                        break;

                    case 2:
                        printf("\nSr/Sra Cliente, Agradecemos Por Entrar Em Contato Conosco, Pedimos Desculpa Pelo Atraso Dos Nossos Produtos , Esperamos Que Isso Não Venha Ocorrer Novamente!\nAtenciosamente. Equipe Venom");
                        reclamacaoRepeticao = 0;
                        solucaoResolvida = 1;
                        break;

                    case 3:
                        printf("\nSr/Sra Cliente, Acreditamos Que O Produto Esteja Na Fábrica Ou A Caminho De Sua Casa, Caso A Data De Entrega For Atingida E O Produto Não For Entregue, Entre Em Contato Conosco Novamente!\nAtenciosamente. Equipe Venom");
                        reclamacaoRepeticao = 0;
                        solucaoResolvida = 1;
                        break;

                    case 4:
                        printf("\nSr/Sra Cliente, Ficamos Felizes Em Saber Que A Entrega Do Produto Foi Realizada Com Sucesso, Dentro Prazo Estimado!\nAtenciosamente. Equipe Venom");
                        reclamacaoRepeticao = 0;
                        solucaoResolvida = 1;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                        reclamacaoRepeticao = 1;
                        break;
                    }
                    // Solução Da Reclamacao
                    if (solucaoResolvida == 1)
                    {
                        do
                        {
                            printf("\n\nDeseja Voltar Ao Menu:\n1 - Sim\n2 - Não");
                            printf("\nDigite A Opção Que Deseja: ");
                            scanf("%s", &problemaMenu);
                            int convProblemaMenu = atoi(problemaMenu);
                            switch (convProblemaMenu)
                            {
                            case 1:
                                printf("\nOK, Voltando Para O Menu!");
                                solucaoResolvidaRepeticao = 0;
                                reclamacaoRepeticao = 0;
                                menuClienteRepeticao = 1;
                                break;

                            case 2:
                                printf("\nOK, Volte Sempre!");
                                solucaoResolvidaRepeticao = 0;
                                reclamacaoRepeticao = 0;
                                menuClienteRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                solucaoResolvidaRepeticao = 1;
                                break;
                            }

                        } while (solucaoResolvidaRepeticao == 1);
                    }
                    // Fim Da Solução Da Reclamacao

                } while (reclamacaoRepeticao == 1);
                // Prazo De Entrega
                break;
            case 3:
                printf("\nCaso Queria Fazer A Compra Direto Com O Vendedor, Ligue No Telefone (XX) XXXX-XXXX");
                printf("\nCaso Queria Tirar Alguma Duvida, Ligue No Telefone (XX) XXXX-XXXX");
                do
                {
                    printf("\nDeseja Voltar Para O Menu:\n1 - Sim\n2 - Não");
                    printf("\nDigite O Valor: ");
                    scanf("%s", &duvidaRespondida);
                    convDuvidasRespondidas = atoi(duvidaRespondida);
                    switch (convDuvidasRespondidas)
                    {
                    case 1:
                        printf("\nOK, Voltando Para O Menu!");
                        duvidaRepeticao = 0;
                        menuClienteRepeticao = 1;
                        break;

                    case 2:
                        printf("\nOK, Volte Sempre!");
                        duvidaRepeticao = 0;
                        menuClienteRepeticao = 0;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!");
                        duvidaRepeticao = 1;
                        menuClienteRepeticao = 0;
                        break;
                    }

                } while (duvidaRepeticao == 1);
                break;

            case 4:
                // Conferir Quntas Parcelas Falta Para Ser Pago
                // Forma De Pagamento
                do
                {
                    printf("\nVeja Quantas Faturas Falta A Ser Pagas!");
                    printf("\n1 - Credito\n2 - Debito\n3 - Voltar");
                    printf("\nQual Foi A Forma De Pagamento:");
                    scanf("%s", &frmDePagamento);
                    convFrmDePagamento = atoi(frmDePagamento);
                    switch (convFrmDePagamento)
                    {
                    case 1:
                        credito = 1;
                        debito = 0;
                        frmDePagamentoRepeticao = 0;
                        break;

                    case 2:
                        credito = 0;
                        debito = 1;
                        frmDePagamentoRepeticao = 0;
                        break;

                    case 3:
                        printf("\nVoltando Para O Menu!");
                        credito = 0;
                        debito = 0;
                        frmDePagamentoRepeticao = 0;
                        menuClienteRepeticao = 1;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!");
                        credito = 0;
                        debito = 0;
                        frmDePagamentoRepeticao = 1;
                        break;
                    }
                } while (frmDePagamentoRepeticao == 1);
                // Fim Da Forma De Pagamento
                // Credito
                if (credito == 1)
                {
                    do
                    {
                        printf("\nCredito!");
                        do
                        {
                            printf("\nQual Foi O Valor Da Compra: ");
                            scanf("%s", &vlrPago);
                            convVlrPago = atoi(vlrPago);
                            if (convVlrPago >= 20 && convVlrPago <= 50000)
                            {
                                vlrPagoRepeticao = 0;
                            }
                            else
                            {
                                printf("\nValor Invalido, Tente Novamente");
                                vlrPagoRepeticao = 1;
                            }
                        } while (vlrPagoRepeticao == 1);

                        do
                        {
                            printf("Quantas Parcelas Foram Pagas: ");
                            scanf("%s", &qntsParcelasPaga);
                            convQntsParcelasPaga = atoi(qntsParcelasPaga);
                            if (convQntsParcelasPaga >= 1 && convQntsParcelasPaga <= 12)
                            {
                                pclsPagasRepeticao = 0;
                            }
                            else
                            {
                                printf("\nValor Invalido, Tente Novamente\n");
                                pclsPagasRepeticao = 1;
                            }
                        } while (pclsPagasRepeticao == 1);
                        do
                        {
                            printf("Em Quantas Vezes Foi Parcelado O Valor: ");
                            scanf("%s", &qntsParcelas);
                            convQntsParcelas = atoi(qntsParcelas);
                            if (convQntsParcelas >= 1 && convQntsParcelas <= 12)
                            {
                                pclsFaltamRepeticao = 0;
                            }
                            else
                            {
                                printf("\nValor Invalido, Tente Novamente\n");
                                pclsFaltamRepeticao = 1;
                            }

                        } while (pclsFaltamRepeticao == 1);

                        if (convQntsParcelasPaga < convQntsParcelas)
                        {
                            parcelasPagas = convQntsParcelas - convQntsParcelasPaga;
                            valorDividoParcelado = convVlrPago / convQntsParcelas;
                            printf("\nAinda Falta %d Parcelas, No Valor %.2fR$", parcelasPagas, valorDividoParcelado);
                            do
                            {
                                printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2 - Não");
                                printf("\nDigite O Valor: ");
                                scanf("%s", &parcelasBackToMenu);
                                convParcelasBackToMenu = atoi(parcelasBackToMenu);
                                switch (convParcelasBackToMenu)
                                {
                                case 1:
                                    printf("\nOK, Voltando Para O Menu!");
                                    parcelasBackToMenuRepeticao = 0;
                                    parcelasASerPagaRepeticao = 0;
                                    menuClienteRepeticao = 1;
                                    break;

                                case 2:
                                    printf("\nOK, Volte Sempre!");
                                    parcelasBackToMenuRepeticao = 0;
                                    parcelasASerPagaRepeticao = 0;
                                    menuClienteRepeticao = 0;
                                    break;

                                default:
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    parcelasBackToMenuRepeticao = 1;
                                    break;
                                }
                            } while (parcelasBackToMenuRepeticao == 1);
                        }

                        else if (convQntsParcelasPaga == convQntsParcelas)
                        {
                            printf("\nTodas Parcelas Foram Pagas!");
                            do
                            {
                                printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2 - Não");
                                printf("\nDigite O Valor: ");
                                scanf("%s", &parcelasBackToMenu);
                                int convParcelasBackToMenu = atoi(parcelasBackToMenu);
                                switch (convParcelasBackToMenu)
                                {
                                case 1:
                                    printf("\nOK, Voltando Para O Menu!");
                                    parcelasBackToMenuRepeticao = 0;
                                    parcelasASerPagaRepeticao = 0;
                                    menuClienteRepeticao = 1;
                                    break;

                                case 2:
                                    printf("\nOK, Volte Sempre!");
                                    parcelasBackToMenuRepeticao = 0;
                                    parcelasASerPagaRepeticao = 0;
                                    menuClienteRepeticao = 0;
                                    break;

                                default:
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    parcelasBackToMenuRepeticao = 1;
                                    break;
                                }
                            } while (parcelasBackToMenuRepeticao == 1);
                        }

                        else
                        {
                            printf("\nValores Digitados Inválido, Tente Novemante!");
                            parcelasASerPagaRepeticao = 1;
                        }

                    } while (parcelasASerPagaRepeticao == 1);
                }
                // Fim Do Credito
                // Debito
                else if (debito == 1)
                {
                    printf("\nDebito!");
                    printf("\nComo A Compra Foi Realizada Com O Debito, Então A Compra Foi Realizada A Vista, Logo Não Possuindo Parcelas!");
                    do
                    {
                        printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2 - Não");
                        printf("\nDigite O Valor: ");
                        scanf("%s", &parcelasBackToMenu);
                        convParcelasBackToMenu = atoi(parcelasBackToMenu);
                        switch (convParcelasBackToMenu)
                        {
                        case 1:
                            printf("\nOK, Voltando Para O Menu!");
                            parcelasBackToMenuRepeticao = 0;
                            parcelasASerPagaRepeticao = 0;
                            menuClienteRepeticao = 1;
                            break;

                        case 2:
                            printf("\nOK, Volte Sempre!");
                            parcelasBackToMenuRepeticao = 0;
                            parcelasASerPagaRepeticao = 0;
                            menuClienteRepeticao = 0;
                            break;

                        default:
                            printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                            parcelasBackToMenuRepeticao = 1;
                            break;
                        }
                    } while (parcelasBackToMenuRepeticao == 1);
                }
                // Fim Do Debito
                //  Fim Do Conferir Quntas Parcelas Falta Para Ser Pago
                break;

                // Sair
            case 5:
                printf("OK, Volte Sempre!");
                menuClienteRepeticao = 0;
                break;

            default:
                printf("\nTecla Digitada Inválida, Tente Novemante!");
                menuClienteRepeticao = 1;
                break;
            }
            // Fim Do Menu Para O Cliente
            // Condicao De Compra Aprovada
            if (compraAprovada == 1)
            {
                printf("\nMuito Obrigrado Por Comprar Na Venom!");
                printf("\nVolte Sempre =)");
                menuClienteRepeticao = 0;
                vendedor = 0;
                recepcao = 0;
                fundador = 0;
                funcionario = 0;
            }
            // Fim Da Condicao De Compra Aprovada
            fundador = 0;
            recepcao = 0;
            funcionario = 0;
            vendedor = 0;
        } while (menuClienteRepeticao == 1);
    }
    // Fim Da Condicao Para Acessar Menu Do Cliente
    // Condicao Para Acessar Menu Do Funcionario
    if (funcionario == 1 && login == 1 || funcionario == 1 && cadastro == 1)
    {
        do
        {
            printf("\n\nInforme Seu Cargo Na Empressa!");
            printf("\n1 - Vendedor/Estoque\n2 - Recepção\n3 - Fundador\n4 - Sair");
            printf("\nDigite O Valor Correspodente Ao Seu Cargo: ");
            scanf("%s", &menuFuncionario);
            int convMenuFuncionario = atoi(menuFuncionario);
            switch (convMenuFuncionario)
            {
            case 1:
                vendedor = 1;
                recepcao = 0;
                fundador = 0;
                menuFuncionarioRepeticao = 0;
                break;
            case 2:
                vendedor = 0;
                recepcao = 1;
                fundador = 0;
                menuFuncionarioRepeticao = 0;
                break;
            case 3:
                vendedor = 0;
                recepcao = 0;
                fundador = 1;
                menuFuncionarioRepeticao = 0;
                break;
            case 4:
                printf("\nVolte Sempre!");
                vendedor = 0;
                recepcao = 0;
                fundador = 0;
                menuFuncionarioRepeticao = 0;
                break;
            default:
                printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                vendedor = 0;
                recepcao = 0;
                fundador = 0;
                menuFuncionarioRepeticao = 1;
                break;
            }

        } while (menuFuncionarioRepeticao == 1);
    }
    // Fim Da Condicao Para Acessar Menu Do Funcionario
    // Condicao Para Acessar Menu Do Vendedor
    if (vendedor == 1)
    {
        do
        {
            printf("\n\nMenu Dedicado Para Os Vendedores/Estoquistas!");
            printf("\n1 - Verificação Dos Preços\n2 - Verificação Do Estoque\n3 - Lucro Na Venda\n4 - Marcar Reunião Com Fundador\n5 - Sair");
            printf("\nDigite O Valor Do Menu Que Deseja Acessar: ");
            scanf("%s", &menuVendedor);
            int convMenuVendedor = atoi(menuVendedor);
            // Menu Do Vendedor
            switch (convMenuVendedor)
            {
            case 1:
                // Verificação Dos Precos
                printf("\nOs Valores Das Peças De Roupas São: ");
                printf("\nCamisa = 45.00R$\nBlusa = 120.00R$\nShorts = 55.00R$\nCalça = 75.00R$\nPeças Intimas(Pacote Com 3 Peças) = 20.00R$\nMeias(Pacote Com 4 Peças) = 20.00R$");
                do
                {
                    printf("\n\nDeseja Retornar Ao Menu Do Vendedor:\n1 - Sim\n2 - Não");
                    printf("\nDigite O Valor Da Opção Que Deseja: ");
                    scanf("%s", &backToMenu);
                    int convBackToMenu = atoi(backToMenu);
                    switch (convBackToMenu)
                    {
                    case 1:
                        printf("\nVoltando Para O Menu Vendedor\n");
                        retorno = 0;
                        vendedorRepeticao = 1;
                        break;

                    case 2:
                        printf("\nOK, Volte Sempre!\n");
                        retorno = 0;
                        vendedorRepeticao = 0;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                        retorno = 1;
                        break;
                    }
                } while (retorno == 1);
                // Fim Da Verificação Dos Precos
                break;
            case 2:
                // Verificação Do Estoque
                do
                {
                    printf("\n1 - Para Acessar Estoque Sede Da Venom\n2 - Capacidade Mámixa De Um Estoque\n3 - Voltar");
                    printf("\nDigite O Valor Do Estoque Que Deseja: ");
                    scanf("%s", &escolhaEstoque);
                    int convEscolhaEstoque = atoi(escolhaEstoque);
                    // Escolha Entre Os Estoques
                    switch (convEscolhaEstoque)
                    {
                    case 1:
                        // Estoque Venom
                        do
                        {
                            printf("\nEstoque Venom Sede Selecionado!");
                            printf("\nAtualmete O Estoque Está Com 15 Mil Peças Disponiveis, Entre Eles: ");
                            printf("\n\n1 - Camisa = 4.000 Mil Peças\n2 - Blusa = 2.500 Mil Peças\n3 - Shorts = 2.000 Mil Peças\n4 - Calça = 3.000 Mil Peças\n5 - Peças Intimas = 1.500 Mil Peças\n6 - Meias = 2.000 Mil Peças");
                            printf("\nDeseja Solicitar Alguma Peça:\n1 - Sim\n2 - Não");
                            printf("\nDigite O Valor: ");
                            scanf("%s", &roupaEstoque);
                            int convRoupaEstoque = atoi(roupaEstoque);
                            // Escolher Uma Peca De Roupa
                            switch (convRoupaEstoque)
                            {
                            case 1:
                                // Solicitacao Das Pecas
                                do
                                {
                                    printf("\n\nQual Peça Deseja Solicitar:");
                                    printf("\n\n1 - Camisa\n2 - Blusa\n3 - Shorts\n4 - Calça\n5 - Peças Intimas\n6 - Meias");
                                    printf("\nQual Peça Deseja: ");
                                    scanf("%s", &pecasEstoque);
                                    int convPecasEstoque = atoi(pecasEstoque);
                                    // Selecionando As Pecas
                                    switch (convPecasEstoque)
                                    {
                                    case 1:
                                        // Pecas Camisa
                                        do
                                        {
                                            printf("\nQuantas Camisa Deseja: ");
                                            scanf("%s", &pecaCamisa);
                                            convPecaCamisa = atoi(pecaCamisa);
                                            // Condicao Para O Valor Correto
                                            if (convPecaCamisa >= 1 && convPecaCamisa <= 4000)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Camisa
                                        break;

                                    case 2:
                                        // Pecas Blusa
                                        do
                                        {
                                            printf("\nQuantas Blusas Deseja: ");
                                            scanf("%s", &pecaBlusa);
                                            convPecaBlusa = atoi(pecaBlusa);
                                            // Condicao Para O Valor Correto
                                            if (convPecaBlusa >= 1 && convPecaBlusa <= 2500)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Blusa
                                        break;

                                    case 3:
                                        // Pecas Shorts
                                        do
                                        {
                                            printf("\nQuantos Shorts Deseja: ");
                                            scanf("%s", &pecaShorts);
                                            convPecaShorts = atoi(pecaShorts);
                                            // Condicao Para O Valor Correto
                                            if (convPecaShorts >= 1 && convPecaShorts <= 2000)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Shorts
                                        break;

                                    case 4:
                                        // Pecas Calca
                                        do
                                        {
                                            printf("\nQuantas Calça Deseja: ");
                                            scanf("%s", &pecaCalca);
                                            convPecaCalca = atoi(pecaCalca);
                                            // Condicao Para O Valor Correto
                                            if (convPecaCalca >= 1 && convPecaCalca <= 3000)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Calca
                                        break;

                                    case 5:
                                        // Pecas Intimas
                                        do
                                        {
                                            printf("\nQuantas Peças Intimas Deseja: ");
                                            scanf("%s", &pecaPI);
                                            convPecaPI = atoi(pecaPI);
                                            // Condicao Para O Valor Correto
                                            if (convPecaPI >= 1 && convPecaPI <= 1500)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Intimas
                                        break;

                                    case 6:
                                        // Pecas Meias
                                        do
                                        {
                                            printf("\nQuantas Meias Deseja: ");
                                            scanf("%s", &pecaMeias);
                                            convPecaMeias = atoi(pecaMeias);
                                            // Condicao Para O Valor Correto
                                            if (convPecaMeias >= 1 && convPecaMeias <= 2000)
                                            {
                                                do
                                                {
                                                    printf("\nDeseja Solicitar Outra Peça:\n1- Sim\n2 - Não");
                                                    printf("\nDigite O Valor: ");
                                                    scanf("%s", &adicionarPeca);
                                                    int convAdicionarPeca = atoi(adicionarPeca);
                                                    switch (convAdicionarPeca)
                                                    {
                                                    case 1:
                                                        printf("\nOk, Adicione Outra Peça!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 1;
                                                        solicitacaoAprovada = 0;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    case 2:
                                                        printf("\nOK, Indo Para Conclusão Da Solicitação!\n");
                                                        adicionarPecasRepeticao = 0;
                                                        pecasEstoqueRepeticao = 0;
                                                        solicitacaoAprovada = 1;
                                                        selecaoRepeticao = 0;
                                                        break;

                                                    default:
                                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n\n");
                                                        adicionarPecasRepeticao = 1;
                                                        break;
                                                    }
                                                } while (adicionarPecasRepeticao == 1);
                                            }
                                            // Fim Da Condicao Para O Valor Correto
                                            // Condicao Para O Valor Incorreto
                                            else
                                            {
                                                printf("\nO Valor Não Corresponde, Com A Quantidade De Peças Disponiveis, Tente Novemante!\n\n");
                                                selecaoRepeticao = 1;
                                            }
                                            // Fim Da Condicao Para O Valor Incorreto
                                        } while (selecaoRepeticao == 1);
                                        // Fim Da Pecas Meias
                                        break;

                                    default:
                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                        pecasEstoqueRepeticao = 1;
                                        break;
                                    }
                                    // Finalicao Da Solicitacao
                                    if (solicitacaoAprovada == 1)
                                    {
                                        do
                                        {
                                            printf("\nEssa Solicitação É Direcionada Para O:\n1 - Cliente\n2 - Startup");
                                            printf("\nDigite O Valor: ");
                                            scanf("%s", &escolhaParaAprovacao);
                                            int convEscolhaParaAprovacao = atoi(escolhaParaAprovacao);
                                            switch (convEscolhaParaAprovacao)
                                            {
                                            case 1:
                                                printf("\nOK, Solicitação Concluida Com Sucesso!");
                                                printf("\nEsperando A Confirmação Dos Dados Pessoais Do Cliente, Confimarção Do Pagamento E O Endereço!");
                                                printf("\nPor Motivos De Segurança, O Aplicativo Ira Fechar!");
                                                solicitacaoFinalizada = 1;
                                                break;

                                            case 2:
                                                printf("\nOK, Solicitação Concluida Com Sucesso!");
                                                printf("\nO Envio Das Peças Para A Startup, Será Inicializada!");
                                                printf("\nPor Motivos De Segurança, O Aplicativo Ira Fechar!");
                                                solicitacaoFinalizada = 1;
                                                menuVendedorRepeticao = 0;
                                                break;

                                            default:
                                                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                                solicitacaoAprovadaRepeticao = 1;
                                                break;
                                            }

                                            if (solicitacaoFinalizada == 1)
                                            {
                                                menuVendedorRepeticao = 0;
                                                roupaEstoqueRepeticao = 0;
                                                menuEstoqueRepeticao = 0;
                                                solicitacaoAprovadaRepeticao = 0;
                                                break;
                                            }

                                        } while (solicitacaoAprovadaRepeticao == 1);
                                    }
                                    // Finalicao Da Solicitacao

                                    // Fim Do Selecionando As Pecas
                                } while (pecasEstoqueRepeticao == 1);
                                // Fim Da Solicitacao Das Pecas
                                break;

                            case 2:
                                printf("\nOK, Retornando Para O Menu!\n");
                                vendedorRepeticao = 1;
                                roupaEstoqueRepeticao = 0;
                                menuEstoqueRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                roupaEstoqueRepeticao = 1;
                                break;
                            }
                            // Fim Escolher Uma Peca De Roupa
                        } while (roupaEstoqueRepeticao == 1);
                        // Fim Do Estoque Venom
                        break;

                    case 2:
                        // Descrobir A Capacidade
                        do
                        {
                            printf("\nDescubra Quantos Porcento Está Cheio O Estoque: ");
                            printf("\nDigite A Capacidade Máxima Do Estoque: ");
                            scanf("%s", &capacidadeEstoque);
                            valorCapacidadeEstoque = atoi(capacidadeEstoque);
                            printf("Digite Quantos Itens, Tem Atualmente No Estoque: ");
                            scanf("%s", &quantidadeEstoque);
                            valorQuantidadeEstoque = atoi(quantidadeEstoque);
                            // Condicao Para Descobrir O Valor
                            if (valorCapacidadeEstoque >= 1 && valorQuantidadeEstoque >= 1)
                            {
                                x = valorQuantidadeEstoque * 100;
                                resultadoFinal = x / valorCapacidadeEstoque;
                                printf("\nO Estoque Está %.2f%% Prenchido!", resultadoFinal);
                                descubraCapacidadeRepeticao = 0;
                                valorDescoberto = 1;
                            }
                            // Fim Da Condicao Para Descobrir O Valor
                            // Condicao Se O Valor Invalido
                            else
                            {
                                printf("\nValor Inválido, Tente Novemante!\n");
                                descubraCapacidadeRepeticao = 1;
                                valorDescoberto = 0;
                            }
                            // Fim Da Condicao Se O Valor Invalido
                            // Voltar Para Menu
                            if (valorDescoberto == 1)
                            {
                                do
                                {
                                    printf("\nDeseja Voltar Para O Menu:\n1 - Sim\n2 - Não ");
                                    printf("\nDigite Um Valor: ");
                                    scanf("%s", &descoberto);
                                    int convDescoberto = atoi(descoberto);
                                    switch (convDescoberto)
                                    {
                                    case 1:
                                        printf("\nVoltando Para O Menu!");
                                        desccobertoRepeticao = 0;
                                        descubraCapacidadeRepeticao = 0;
                                        menuEstoqueRepeticao = 0;
                                        vendedorRepeticao = 1;
                                        break;

                                    case 2:
                                        printf("\nVolte Sempre!");
                                        desccobertoRepeticao = 0;
                                        descubraCapacidadeRepeticao = 0;
                                        menuEstoqueRepeticao = 0;
                                        vendedorRepeticao = 0;
                                        break;

                                    default:
                                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                        desccobertoRepeticao = 1;
                                        break;
                                    }
                                } while (desccobertoRepeticao == 1);
                            }
                            // Voltar Para Menu
                        } while (descubraCapacidadeRepeticao == 1);
                        // Fim De Descrobir A Capacidade
                        break;

                    case 3:
                        printf("\nOK, Retornando Para O Menu!");
                        menuEstoqueRepeticao = 0;
                        vendedorRepeticao = 1;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        menuEstoqueRepeticao = 1;

                        break;
                    }
                    // Fim Da Escolha Entre Os Estoques
                } while (menuEstoqueRepeticao == 1);
                // Fim Da Verificação Do Estoque
                break;

            case 3:
                // Bonus Do Vendedor
                do
                {
                    printf("\nVeja O Bonus De Ganho Em Cima Da Sua Venda!");
                    printf("\nO Bonus Do Vendedor É De 10%%, No Valor Total Vendido, Sem Imposto Adicionado!");
                    printf("\nDigite O Valor Da Sua Venda: ");
                    scanf("%s", &bonus);
                    valorBonus = atoi(bonus);
                    // Condicao Para Ganho De Bonus
                    if (valorBonus >= 1)
                    {
                        resultadoBonus = valorBonus / 10;
                        printf("\nO Seu Ganho De Bonus Foi De %.2fR$!", resultadoBonus);
                        bonusRepeticao = 0;
                        fimBonus = 1;
                    }
                    // Fim Da Condicao Para Ganho De Bonus
                    // Condicao Para Valor Invalido
                    else
                    {
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        bonusRepeticao = 1;
                        fimBonus = 0;
                    }
                    // Fim Da Condicao Para Valor Invalido
                    // Condicao Para Voltar Para O Menu
                    if (fimBonus == 1)
                    {
                        do
                        {
                            printf("\nDeseja Voltar Para Menu:\n1 - Sim\n2 - Não");
                            printf("\nDigite O Valor: ");
                            scanf("%s", &bonusRetorno);
                            int convBonusRetorno = atoi(bonusRetorno);
                            switch (convBonusRetorno)
                            {
                            case 1:
                                printf("\nOK, Voltando Para O Menu!\n");
                                fimBonusRepeticao = 0;
                                bonusRepeticao = 0;
                                vendedorRepeticao = 1;
                                break;

                            case 2:
                                printf("\nVolte Sempre!");
                                fimBonusRepeticao = 0;
                                bonusRepeticao = 0;
                                vendedorRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                fimBonusRepeticao = 1;
                                break;
                            }

                        } while (fimBonusRepeticao == 1);
                    }
                    // Fim Da Condicao Para Voltar Para O Menu
                } while (bonusRepeticao == 1);
                // Fim Do Bonus Do Vendedor
                break;

            case 4:
                // Marcar Reuniao
                do
                {
                    printf("\nDeseja Marcar Reunião Com O Fundador:\n1 - Sim\n2 - Não");
                    printf("\nDigite O Valor: ");
                    scanf("%s", &marcarReuniao);
                    int convMarcarReuniao = atoi(marcarReuniao);
                    switch (convMarcarReuniao)
                    {
                    case 1:
                        printf("\nOK, Veremos A Proxima Data Disponivel, E Avisaremos Assim, Que A Reunião, For Marcada!");
                        reuniaoMarcada = 1;
                        marcarReuniaoRepeticao = 0;
                        break;

                    case 2:
                        printf("\nOK, Voltando Para O Menu!\n");
                        marcarReuniaoRepeticao = 0;
                        vendedorRepeticao = 1;
                        reuniaoMarcada = 0;
                        break;
                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        marcarReuniaoRepeticao = 1;
                        reuniaoMarcada = 0;
                        break;
                    }
                    // Condicao Para Voltar Para O Menu
                    if (reuniaoMarcada == 1)
                    {
                        do
                        {
                            printf("\nDeseja Voltar Para O Menu:\n1 - Sim\n2 - Não ");
                            printf("\nDigite O Valor: ");
                            scanf("%s", &reuniaoBackMenu);
                            int convReuniaoBackMenu = atoi(reuniaoBackMenu);
                            switch (convReuniaoBackMenu)
                            {
                            case 1:
                                printf("\nOK, Voltando Para O Menu!\n");
                                reuniaoBackMenuRepeticao = 0;
                                marcarReuniaoRepeticao = 0;
                                vendedorRepeticao = 1;
                                break;

                            case 2:
                                printf("\nVolte Sempre!");
                                reuniaoBackMenuRepeticao = 0;
                                marcarReuniaoRepeticao = 0;
                                vendedorRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                reuniaoBackMenuRepeticao = 1;
                                break;
                            }
                        } while (reuniaoBackMenuRepeticao == 1);
                    }
                    // Condicao Para Voltar Para O Menu
                } while (marcarReuniaoRepeticao == 1);
                // Fim De Marcar Reuniao
                break;

            case 5:
                // Sair
                printf("\nOk, Volte Sempre!");
                vendedorRepeticao = 0;
                break;

            default:
                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                vendedorRepeticao = 1;
                break;
            }
            // Fim Do Menu Do Vendedor
        } while (vendedorRepeticao == 1);
    }
    // Fim Da Condicao Para Acessar Menu Do Vendedor
    // Condicao Para Acessar Menu Do Recepcao
    if (recepcao == 1)
    {
        do
        {
            printf("\n\nMenu Dedicado Para As Recepcão!");
            printf("\n1 - Coisas Para Hoje\n2 - Telefones\n3 - Sair");
            printf("\nDigite O Valor Do Menu Que Deseja Acessar: ");
            scanf("%s", &menuRecepcao);
            int convMenuRecepcao = atoi(menuRecepcao);
            // Acesso Para O Menu Da Recepcionaista
            switch (convMenuRecepcao)
            {
            case 1:
                // To-Do Para Recepcionista
                srand(time(0));
                numberRecepcao = (rand() % 4) + 1;
                if (numberRecepcao == 1)
                {
                    printf("\nMarcações!");
                    printf("\n1 - Falar Com Fundador!");
                    printf("\n2 - Participar Da Reunião Do Inico Da Semana!");
                    printf("\n3 - Atender Cliente Das 16H!");
                    printf("\n4 - Receber Encomenda, Do Envio De Peças De Roupas!");
                    printf("\n5 - Fazer O Planejamento Do Fundador Para Semana!");
                    todoFim = 1;
                    menuRecepcaoRepeticao = 0;
                }

                else if (numberRecepcao == 2)
                {
                    printf("\nMarcações!");
                    printf("\n1 - Atender O Cliente Das 10!");
                    printf("\n2 - Atender Ligação Do Cliente Das 11H30!");
                    printf("\n3 - Atender O Cliente Das 13H!");
                    printf("\n4 - Atender O Cliente Das 14H!");
                    todoFim = 1;
                    menuRecepcaoRepeticao = 0;
                }

                else if (numberRecepcao == 3)
                {
                    printf("\nMarcações!");
                    printf("\n1 - Marcar Reunião Para Fundador As 14H!");
                    printf("\n2 - Marcar Reunião Para Fundador As 16H!");
                    printf("\n3 - Receber A Visita Técnica!");
                    todoFim = 1;
                    menuRecepcaoRepeticao = 0;
                }

                else if (numberRecepcao == 4)
                {
                    printf("\nMarcações!");
                    printf("\n1 - Pedir/Receber Relatorio Semanal Do Estoque!");
                    printf("\n2 - Pedir/Receber Relatorio Semanal Dos Vendedores!");
                    printf("\n3 - Pedir/Receber Relatorio Semanal Do Lucro!");
                    printf("\n4 - Envio Dos Relatorios!");
                    printf("\n5 - Reunião De Desempenho Da Semana!");
                    todoFim = 1;
                    menuRecepcaoRepeticao = 0;
                }

                if (todoFim == 1)
                {
                    do
                    {
                        printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2 - Não");
                        printf("\nDigite O Valor: ");
                        scanf("%s", &todoRetorno);
                        int convTodoRetorno = atoi(todoRetorno);
                        switch (convTodoRetorno)
                        {
                        case 1:
                            printf("\nOK, Voltando Para O Menu!");
                            todoFimRepeticao = 0;
                            menuRecepcaoRepeticao = 1;
                            break;

                        case 2:
                            printf("\nOK, Volte Sempre!");
                            todoFimRepeticao = 0;
                            menuRecepcaoRepeticao = 0;
                            break;

                        default:
                            printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                            todoFimRepeticao = 1;
                            break;
                        }

                    } while (todoFimRepeticao == 1);
                }
                // Fim Do To-Do Para Recepcionista
                break;

            case 2:
                // Lista Telefonica
                printf("\nLista De Telefones!");
                printf("\nFundador 1: (XX)XXXX-XXXX");
                printf("\nFundador 2: (XX)XXXX-XXXX");
                printf("\nSala Dos Vendedores: (XX)XXXX-XXXX");
                printf("\nSala Dos Estoquistas: (XX)XXXX-XXXX");
                printf("\nFabrica: (XX)XXXX-XXXX");
                do
                {
                    printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2  - Não");
                    printf("\nDigite O Valor: ");
                    scanf("%s", &listaTelefonema);
                    int convListaTelefonema = atoi(listaTelefonema);
                    switch (convListaTelefonema)
                    {
                    case 1:
                        printf("\nOK, Voltando Para O Menu!");
                        listaTelefonemaRepeticao = 0;
                        menuRecepcaoRepeticao = 1;
                        break;

                    case 2:
                        printf("\nOK, Volte Sempre!");
                        listaTelefonemaRepeticao = 0;
                        menuRecepcaoRepeticao = 0;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        listaTelefonemaRepeticao = 1;
                        break;
                    }
                } while (listaTelefonemaRepeticao == 1);
                // Fim Da Lista Telefonica
                break;

            case 3:
                // Sair
                printf("\nOk, Volte Sempre!");
                menuRecepcaoRepeticao = 0;
                break;

            default:
                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                menuRecepcaoRepeticao = 1;
                break;
            }

        } while (menuRecepcaoRepeticao == 1);
    }
    // Fim Da Condicao Para Acessar Menu Do Recepcao
    // Condicao Para Acessar Menu Do Fundador
    if (fundador == 1)
    {
        do
        {
            printf("\n\nMenu Dedicado Para Os Fundadores!");
            printf("\n1 - Relatorio\n2 - Coisas Para Você\n3 - Reunioes Marcadas\n4 - Sair");
            printf("\nDigite O Valor Do Menu Que Deseja Acessar: ");
            scanf("%s", &menuFundador);
            int convMenuFundador = atoi(menuFundador);
            switch (convMenuFundador)
            {
            case 1:
                // Relatorio
                do
                {
                    printf("\n1 - Deseja Criar Um Relatorio Novo\n2 - Conferir Relatorio Do Mes Passado\n3 - Voltar");
                    printf("\nQual Opção Deseja: ");
                    scanf("%s", &relatorio);
                    int convRelatorio = atoi(relatorio);
                    switch (convRelatorio)
                    {
                    case 1:

                        arquivo_relatorio = fopen("Arquivo_Relatorio.txt", "w");
                        if (arquivo_relatorio == NULL)
                        {
                            printf("\nOcorreu Um Erro Para Criação Do Relatorio!");
                            printf("\nReinicie O Software!");
                            exit;
                        }
                        else
                        {
                            printf("\nCrie O Relatorio!");
                            fprintf(arquivo_relatorio, "Relatorio Do Mes: ");
                            do
                            {
                                printf("\nAo Digitar O Mes, Digite Em Numero, 1 a 12!");
                                printf("\nDe Que Mes É O Relatorio: ");
                                scanf("%s", &mesAtual);
                                convMesAtual = atoi(mesAtual);
                                if (convMesAtual >= 1 && convMesAtual <= 12)
                                {
                                    switch (convMesAtual)
                                    {
                                    case 1:
                                        fprintf(arquivo_relatorio, " Janeiro");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 2:
                                        fprintf(arquivo_relatorio, " Fevereiro");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 3:
                                        fprintf(arquivo_relatorio, " Março");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 4:
                                        fprintf(arquivo_relatorio, " Abril");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 5:
                                        fprintf(arquivo_relatorio, " Maio");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 6:
                                        fprintf(arquivo_relatorio, " Junho");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 7:
                                        fprintf(arquivo_relatorio, " Julho");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 8:
                                        fprintf(arquivo_relatorio, " Agostso");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 9:
                                        fprintf(arquivo_relatorio, " Setembro");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 10:
                                        fprintf(arquivo_relatorio, " Outubro");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 11:
                                        fprintf(arquivo_relatorio, " Novembro");
                                        mesAtualRepeticao = 0;
                                        break;

                                    case 12:
                                        fprintf(arquivo_relatorio, " Dezembro");
                                        mesAtualRepeticao = 0;
                                        break;
                                    }
                                }
                                else
                                {
                                    printf("\nMes Inserido Invalido, Tente Novamnete!\n");
                                    mesAtualRepeticao = 1;
                                }

                            } while (mesAtualRepeticao == 1);

                            fprintf(arquivo_relatorio, "\nGastos:\n ");
                            fprintf(arquivo_relatorio, "\nContas(Água, Luz, Aluguel): ");
                            do
                            {
                                printf("\nDigite O Valor Dos Gastos: ");
                                printf("\nValor Das Contas(Água, Luz, Aluguel): ");
                                scanf("%s", &contaGastos);
                                convContaGastos = atoi(contaGastos);
                                if (convContaGastos >= 1 && convContaGastos <= 1000000)
                                {
                                    fprintf(arquivo_relatorio, "%sR$", contaGastos);
                                    contasGastosRepeticao = 0;
                                }
                                else
                                {
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    contasGastosRepeticao = 1;
                                }
                            } while (contasGastosRepeticao == 1);

                            fprintf(arquivo_relatorio, "\nValor Dos Salarios(Vendedor,Estoquistas, Recepção): ");
                            do
                            {
                                printf("\nValor Dos Salarios(Vendedor,Estoquistas, Recepção): ");
                                scanf("%s", &salarioGastos);
                                convSalarioGastos = atoi(salarioGastos);
                                if (convSalarioGastos >= 1 && convSalarioGastos <= 1000000)
                                {
                                    fprintf(arquivo_relatorio, "%sR$", salarioGastos);
                                    salarioGastosRepeticao = 0;
                                }
                                else
                                {
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    salarioGastosRepeticao = 1;
                                }
                            } while (salarioGastosRepeticao == 1);

                            fprintf(arquivo_relatorio, "\nLucro: ");
                            fprintf(arquivo_relatorio, "\nLucro Das Roupas Vendidas: ");
                            do
                            {
                                printf("\nAgora Digite O Valor Do Lucro: ");
                                printf("\nValor Das Roupas Vendidas: ");
                                scanf("%s", &roupasVendidasLucro);
                                convRoupasVendidasLucro = atoi(roupasVendidasLucro);
                                if (convRoupasVendidasLucro >= 1 && convRoupasVendidasLucro <= 1000000)
                                {
                                    fprintf(arquivo_relatorio, "%sR$", contaGastos);
                                    roupasVendidasLucroRepeticao = 0;
                                }
                                else
                                {
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    roupasVendidasLucroRepeticao = 1;
                                }
                            } while (roupasVendidasLucroRepeticao == 1);

                            totalLucro = convRoupasVendidasLucro - (convContaGastos + convSalarioGastos);
                            if (totalLucro >= 1)
                            {
                                fprintf(arquivo_relatorio, "\nLucro: ");
                                printf("\nO Lucro É De: %2.fR$", totalLucro);
                                fprintf(arquivo_relatorio, "%.2fR$", totalLucro);
                            }
                            else if (totalLucro <= -1)
                            {
                                fprintf(arquivo_relatorio, "\nPrejuizo: ");
                                printf("\nO Prejuizo É De: %2.fR$", totalLucro);
                                fprintf(arquivo_relatorio, "%.2fR$", totalLucro);
                            }

                            else
                            {
                                fprintf(arquivo_relatorio, "\nMargem De Lucro: ");
                                printf("\nO Margem De Lucro É De: %2.fR$", totalLucro);
                                fprintf(arquivo_relatorio, "%.2fR$", totalLucro);
                            }

                            fclose(arquivo_relatorio);
                            printf("\nArquivo Salvo, Com Sucesso!");
                            printf("\nCaso Queria Ver O Relatorio, Procure Na Pasta, Onde Está O Codigo Fonte!");

                            do
                            {
                                printf("\n\nDeseja Voltar Para O Menu:\n1 - Sim\n2 - Não");
                                printf("\nDigite O Valor: ");
                                scanf("%s", &relatorioEnd);
                                int convRelatorioEnd = atoi(relatorioEnd);
                                switch (convRelatorioEnd)
                                {
                                case 1:
                                    printf("\nOK, Voltando Para O Menu!");
                                    fimDoRelatorioRepeticao = 0;
                                    relatorioRepeticao = 0;
                                    menuFundadorRepeticao = 1;
                                    break;

                                case 2:
                                    printf("\nOK, Volte Sempre!");
                                    fimDoRelatorioRepeticao = 0;
                                    relatorioRepeticao = 0;
                                    menuFundadorRepeticao = 0;
                                    break;

                                default:
                                    printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                    fimDoRelatorioRepeticao = 1;
                                    break;
                                }
                            } while (fimDoRelatorioRepeticao == 1);
                        }
                        break;

                    case 2:
                        printf("\nRelatorio Do Mes De Setembro\n");
                        printf("\nGastos Do Mes!");
                        printf("\nContas(Água,Luz, Aluguel): 4.700R$ ");
                        printf("\nSalario(Vendedor,Estoquistas, Recepção): 12.566R$");
                        printf("\nTotal Do Gastos: 17.266R$");
                        printf("\n\nLucro Do Mes");
                        printf("\nTotal De Roupas Vendidas: 36.000R$");
                        printf("\n\nSaldo Final: 18.734R$");
                        do
                        {
                            printf("\n\nDeseja Voltar Para Menu:\n1 - Sim\n2 - Não");
                            printf("\nDigite O Valor: ");
                            scanf("%s", &relatorioBackToMenu);
                            int convRelatorioBackToMenu = atoi(relatorioBackToMenu);
                            switch (convRelatorioBackToMenu)
                            {
                            case 1:
                                printf("\nRetornando Para O Menu!");
                                relatorioBackToMenuRepeticao = 0;
                                relatorioRepeticao = 0;
                                menuFundadorRepeticao = 1;
                                break;

                            case 2:
                                printf("\nOK, Volte Sempre!");
                                relatorioBackToMenuRepeticao = 0;
                                relatorioRepeticao = 0;
                                menuFundadorRepeticao = 0;
                                break;

                            default:
                                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                                relatorioBackToMenuRepeticao = 1;
                                break;
                            }
                        } while (relatorioBackToMenuRepeticao == 1);
                        break;

                    case 3:
                        printf("\nRetornando Para O Menu!");
                        relatorioRepeticao = 0;
                        menuFundadorRepeticao = 1;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        relatorioRepeticao = 1;
                        break;
                    }
                } while (relatorioRepeticao == 1);
                // Fim Do Relatorio
                break;

            case 2:
                // Todo Fundador
                srand(time(0));
                numberFundador = (rand() % 3) + 1;
                printf("\nCoisa Para Fazer Hoje!");
                if (numberFundador == 1)
                {
                    printf("\n1 - Reunião Para Metas Da Semana");
                    printf("\n2 - Ver Se Possui Reunião");
                    printf("\n3 - Analisar O Relatorio Do Mes Passado");
                }
                if (numberFundador == 2)
                {
                    printf("\n1 - Falar Com A Recepcionista");
                    printf("\n2 - Ver Se Possui Reunião");
                    printf("\n3 - Reunião/Falar Com Funcionários");
                    printf("\n4 - Analisar As Vendas");
                }
                if (numberFundador == 3)
                {
                    printf("\n1 - Falar Com A Recepcionista");
                    printf("\n2 - Pedir O Envio Dos Relatorios, Para A Recepcionista");
                    printf("\n3 - Analisar Os Relatorios");
                    printf("\n4 - Analisar O Desempenho Dos Funcionario");
                    printf("\n5 - Reunião Para Discutir O Desempenho");
                }
                do
                {
                    printf("\n\nDeseja Retornar Ao Menu:\n1 - Sim\n2 - Não");
                    printf("\nDigite O Valor: ");
                    scanf("%s", &todoFundador);
                    int convTodoFundador = atoi(todoFundador);

                    switch (convTodoFundador)
                    {
                    case 1:
                        printf("\nOK, Voltando Para O Menu!");
                        todoFundadorRepeticao = 0;
                        menuFundadorRepeticao = 1;
                        break;

                    case 2:
                        printf("\nOK, Volte Sempre!");
                        todoFundadorRepeticao = 0;
                        menuFundadorRepeticao = 0;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        todoFundadorRepeticao = 1;
                        break;
                    }

                } while (todoFundadorRepeticao == 1);

                break;

            case 3:
                // Reuniaos Marcardas
                srand(time(0));
                qntdReuniao = (rand() % 7);
                printf("\nReunião Marcadas!");
                printf("\nExistem %d Reuniões Marcadas!", qntdReuniao);
                printf("\nA Recepcionista Entrarar Em Contato Caso Alguem Marque/Desmarque Uma Reunião, E/Ou Caso Algum Cliente Chegue!");
                do
                {
                    printf("\n\nDeseja Voltar Para O Menu:\n1 - Sim\n2 - Não");
                    printf("\nDigite O Valor: ");
                    scanf("%s", &fimReuniaoFundador);
                    int convFimReuniaoFundador = atoi(fimReuniaoFundador);
                    switch (convFimReuniaoFundador)
                    {
                    case 1:
                        printf("\nOK, Voltando Para O Menu!");
                        reuniaoFundadorRepeticao = 0;
                        menuFundadorRepeticao = 1;
                        break;

                    case 2:
                        printf("\nOK, Volte Sempre!");
                        reuniaoFundadorRepeticao = 0;
                        menuFundadorRepeticao = 0;
                        break;

                    default:
                        printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                        reuniaoFundadorRepeticao = 1;
                        break;
                    }
                } while (reuniaoFundadorRepeticao == 1);
                // Fim Da Reuniaos Marcardas
                break;

            case 4:
                printf("\nOK, Volte Sempre!");
                menuFundadorRepeticao = 0;
                break;

            default:
                printf("\nTecla Digitada Inválida, Tente Novemante!\n");
                menuFundadorRepeticao = 1;
                break;
            }
        } while (menuFundadorRepeticao == 1);
    }
    // Fim Da Condicao Para Acessar Menu Do Fundador
    return 0;
}
// Fim Do Codigo
