<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RentCars - Controle de Locadora de Carros</title>
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
</head>
<body>
    <div class="container mt-4">
        <h1 class="mb-4">RentCars - Controle de Locadora de Carros</h1>
        
        <!-- Menu de navegação -->
        <ul class="nav nav-tabs">
            <li class="nav-item">
                <a class="nav-link active" href="#dashboard">Dashboard</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#controle-estoque">Controle de Estoque</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#contas-pagar">Contas a Pagar</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#fornecedores">Fornecedores</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#clientes">Clientes</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#vendas">Vendas</a>
            </li>
            <li class="nav-item">
                <a class="nav-link" href="#fluxo-caixa">Fluxo de Caixa</a>
            </li>
        </ul>

        <!-- Conteúdo das páginas -->
        <div class="tab-content mt-4">
            <!-- Página Inicial (Dashboard) -->
            <div id="dashboard" class="tab-pane fade show active">
                <!-- Aqui vai o conteúdo do dashboard -->
                <h2>Dashboard</h2>
                <p>Visão geral do fluxo de caixa, vendas recentes, contas a pagar em destaque.</p>
            </div>

            <!-- Controle de Estoque -->
            <div id="controle-estoque" class="tab-pane fade">
                <!-- Aqui vai o controle de estoque -->
                <h2>Controle de Estoque</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Carro</th>
                            <th>Marca</th>
                            <th>Modelo</th>
                            <th>Ano</th>
                            <th>Placa</th>
                            <th>Disponibilidade</th>
                        </tr>
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados dos carros -->
                        <tr>
                            <td>Carro 1</td>
                            <td>Marca A</td>
                            <td>Modelo X</td>
                            <td>2020</td>
                            <td>ABC-1234</td>
                            <td>Disponível</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
                <button class="btn btn-primary">Adicionar Carro</button>
            </div>

            <!-- Controle de Contas a Pagar -->
            <div id="contas-pagar" class="tab-pane fade">
                <!-- Aqui vai o controle de contas a pagar -->
                <h2>Contas a Pagar</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Descrição</th>
                            <th>Data de Vencimento</th>
                            <th>Valor</th>
                            <th>Status</th>
                        </tr>
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados das contas a pagar -->
                        <tr>
                            <td>Aluguel</td>
                            <td>10/06/2024</td>
                            <td>R$ 2.500,00</td>
                            <td>Pendente</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
                <button class="btn btn-primary">Adicionar Conta</button>
            </div>

            <!-- Fornecedores -->
            <div id="fornecedores" class="tab-pane fade">
                <!-- Aqui vai o controle de fornecedores -->
                <h2>Fornecedores</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Nome</th>
                            <th>Serviço</th>
                            <th>Contato</th>
                        </tr>
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados dos fornecedores -->
                        <tr>
                            <td>Fornecedor A</td>
                            <td>Manutenção</td>
                            <td>(11) 1234-5678</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
                <button class="btn btn-primary">Adicionar Fornecedor</button>
            </div>

            <!-- Clientes -->
            <div id="clientes" class="tab-pane fade">
                <!-- Aqui vai o controle de clientes -->
                <h2>Clientes</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Nome</th>
                            <th>CPF/CNPJ</th>
                            <th>Tipo</th>
                            <th>Telefone</th>
                        </tr>
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados dos clientes -->
                        <tr>
                            <td>Cliente A</td>
                            <td>123.456.789-00</td>
                            <td>Pessoa Física</td>
                            <td>(11) 9876-5432</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
                <button class="btn btn-primary">Adicionar Cliente</button>
            </div>

            <!-- Vendas -->
            <div id="vendas" class="tab-pane fade">
                <!-- Aqui vai o controle de vendas -->
                <h2>Vendas</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Carro</th>
                            <th>Cliente</th>
                            <th>Data de Locação</th>
                            <th>Data de Devolução</th>
                            <th>Valor</th
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados das vendas -->
                        <tr>
                            <td>Carro 1</td>
                            <td>Cliente A</td>
                            <td>01/06/2024</td>
                            <td>07/06/2024</td>
                            <td>R$ 800,00</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
                <button class="btn btn-primary">Registrar Venda</button>
            </div>

            <!-- Fluxo de Caixa -->
            <div id="fluxo-caixa" class="tab-pane fade">
                <!-- Aqui vai o fluxo de caixa -->
                <h2>Fluxo de Caixa</h2>
                <table class="table">
                    <thead>
                        <tr>
                            <th>Tipo</th>
                            <th>Data</th>
                            <th>Valor</th>
                            <th>Descrição</th>
                        </tr>
                    </thead>
                    <tbody>
                        <!-- Aqui vão os dados do fluxo de caixa -->
                        <tr>
                            <td>Entrada</td>
                            <td>01/06/2024</td>
                            <td>R$ 800,00</td>
                            <td>Aluguel de Carro</td>
                        </tr>
                        <!-- Adicione mais linhas conforme necessário -->
                    </tbody>
                </table>
            </div>
        </div>
    </div>

    <!-- Scripts do Bootstrap -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.5.4/dist/umd/popper.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</body>
</html>
