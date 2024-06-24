<!DOCTYPE html>
<html lang="pt-br" data-bs-theme="dark"> <!--muda a cor de fundo do corpo para dark-->
	<head>
		<meta charset="UTF-8"/>
		<link rel="stylesheet" href="css/bootstrap/css/bootstrap.min.css" />
		<script type="text/javascript" src="js/vue.min.js">
		</script>
		<title>Projeto</title>
		<nav class="navbar bg-dark border-bottom border-body"> <!--"Menu suspenso"-->
			<div class="container-fluid">
				<a style="color:white;"class="navbar-brand" href="#">
					Home 
				</a>
			</div>
		</nav>
	</head>
	<body> 
		<header>
			<img src="img/capa.jpg" class="img-fluid" alt="logo" /> <!-- banner que aparece no topo do site-->
		</header>
		<main class="container mt-5"> <!--mt margem superior mb margem inferior-->
			<div class="row">
				<div id="app" class="col-md-6"> <!-- define o tamanho dos campos na tela-->
					<p class="lead">Cadastro de Imóvel</p>
					<div class="input-group mb-1"> <!-- input-group para agrupar os campos -->
						<input type="text" class="form-control" style="width: 20%;" placeholder="Logradouro">
						<input type="text" class="form-control" style="width: 60%;" placeholder="Endereço">
						<input type="number" class="form-control" style="width: 20%;" placeholder="Nº">
					</div>
					<div class="input-group mb-1">
						<input type="text" class="form-control" style="width: 30%;" placeholder="Bairro" >
						<input type="text" class="form-control" style="width: 30%;" placeholder="Cidade">
						<input type="text" class="form-control" style="width: 10%;" placeholder="UF" maxlength="2"> <!-- maxlength="2" limita até 2 caracteres-->
						<input type="number" class="form-control" style="width: 30%;" placeholder="CEP">
					</div>
					<div class="input-group mb-1">
						<input type="text" class="form-control" style="width: 30%;" placeholder="Tipo de imóvel" >
						<input type="text" class="form-control" style="width: 30%;" placeholder="Status de Ocupação">
						<input type="number" class="form-control" style="width: 40%;" placeholder="Valor de Venda ou Aluguel">
					</div>
					<div class="input-group mb-1">
						<input type="number" class="form-control" style="width: 25%;" placeholder="Área total em m²">
						<input type="number" class="form-control" style="width: 23%;" placeholder="Nº de Quartos">
						<input type="number" class="form-control" style="width: 25%;" placeholder="Nº de Banheiros">
						<input type="number" class="form-control" style="width: 27%;" placeholder="Vagas na Garagem">
					</div>
					<div class="input-group mb-1">
						<input type="text" class="form-control" style="width: 20%;" placeholder="Nome">
						<input type="text" class="form-control" style="width: 40%;" placeholder="Sobrenome">
						<input type="text" class="form-control" style="width: 40%;" placeholder="E-mail">
					</div>
					<div class="input-group mb-1">
						<input type="number" class="form-control" style="width: 12%;" placeholder="DDD">
						<input type="number" class="form-control" style="width: 28%;" placeholder="Telefone">
						<input type="number" class="form-control" style="width: 30%;" placeholder="RG">
						<input type="number" class="form-control" style="width: 30%;" placeholder="CPF">
					</div>
					<p>{{ nome }}</p>
					<button class="btn btn-secondary" @click="mensagem('teste')">Cadastrar</button> <!--@click é o evento-->
				</div>
				<div class="col-md-6">
					<p class="lead">Listagem</p>
					<table class="table table-striped table-dark text-center">
						<thead>
							<tr>
							<th scope="col">Tipo de Imóvel</th>
							<th scope="col">Localização</th>
							<th scope="col">Valor</th>
							<th scope="col">Status de Ocupação</th>
							<th scope="col">Proprietário</th>
							</tr>
						</thead>
						<tbody>
							<tr>
							<th scope="row">Casa</th>
								<td>Rua 1</td>
								<td>R$300000,00</td>
								<td>Desocupada</td>
							</tr>
							<tr>
							  <th scope="row">Apartamento</th>
							  <td>Jacob</td>
							  <td>Thornton</td>
							  <td>@fat</td>
							</tr>
							<tr>
							  <th scope="row">3</th>
							  <td colspan="2">Larry the Bird</td>
							  <td>@twitter</td>
							</tr>
							
						  </tbody>
						</table>
				<div>
			</div>
			<script type="text/javascript">
				var app = new Vue({
					el: '#app',
					data() {
						return {
							nome: ''
						}
					},
					methods: {
						mensagem: function(texto) {
							alert(texto);
						}
					}
				});
			</script>
		</main>
		<footer class="d-flex flex-wrap justify-content-between align-items-center py-3 my-4 border-top ">
			<div class="col-md-4 d-flex align-items-center">
				<a href="/" class="mb-3 me-2 mb-md-0 text-body-secondary text-decoration-none lh-1">
					<svg class="bi" width="30" height="24"><use xlink:href="#bootstrap"/></svg>
				</a>
				<span class="mb-3 mb-md-0 text-body-secondary ">&copy; Henrique Ribeiro Bardelotti</span>
			</div>
		</footer>
	</body>
<html>