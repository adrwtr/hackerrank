
var obj_plus_minus = {	
	plus_minus : function(nr_posicoes, arrValores) 
	{
		var objContador = this.contarValores(arrValores);

		return {
			vl_positivos : (objContador.nr_positivos / nr_posicoes).toFixed(6),
			vl_negativos : (objContador.nr_negativos / nr_posicoes).toFixed(6),
			vl_zeros : (objContador.nr_zeros / nr_posicoes).toFixed(6)
		}
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