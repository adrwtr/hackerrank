var assert = require('assert');
var objSolucao = require('../plus_minus.js');

describe('Plus Minus', function() {
    it('teste contarValores', function() {
        var nr_posicao = 6;
        
        var arrValores = new Array(
            -4, 3, -9, 0, 4, 1
        );

        var objContador = { nr_positivos: 3, nr_negativos: 2, nr_zeros: 1 };

        assert.deepEqual(
            objContador,
            objSolucao.contarValores(arrValores)
        );
    });
});

