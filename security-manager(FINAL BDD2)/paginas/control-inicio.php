<nav class="navbar navbar-expand-lg navbar-light bg-light">
		<a class="navbar-brand" href="../paginas/inicio.html">Security Manager</a>
		<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
			<span class="navbar-toggler-icon"></span>
		</button>
		<div class="collapse navbar-collapse" id="navbarNav">
			<ul class="navbar-nav ml-auto">
				<li class="nav-item">
					<a class="nav-link" href="../paginas/inicio.html#nosotros">Nosotros</a>
				</li>
				<li class="nav-item">
					<a class="nav-link" href="#contacto">Contacto</a>
				</li>
				<li class="nav-item">
					<a class="nav-link" href="../index.html">Cerrar Sesion</a>
				</li>
				<?php
				session_start();  //FUNCION QUE PERMITE EL INICIO DE SESION
				if(!isset($_SESSION["Email"])){ //SI EL EMAIL NO ESTA SETEADO : ERROR, Y LO ENVIA AL INDEX
					?> <script>alert("El usuario no esta logueado");
					location.replace("../index.html");</script> 
					<?php
				}
				?>
			</ul>
		</div>
</nav>