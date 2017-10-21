
var obj_plus_minus = {	
	plus_minus : function(nr_posicoes, arrValores) 
	{
		return this.contarValores(arrValores);
	},

	contarValores : function(arrValores) {
		var nr_contador = 0;
		
		var objContador = {
			nr_positivos : 0,
			nr_negativos : 0,
			nr_zeros : 0
		};

		arrValores.forEach(
			function(valores) { 
				if (valores > 0) {
					objContador.nr_positivos += 1;
					return;
				}

				if (valores < 0) {
					objContador.nr_negativos += 1;
					return;
				}

				objContador.nr_zeros += 1;
				return;
			}
		);

		return objContador;
	}
};

module.exports = obj_plus_minus;