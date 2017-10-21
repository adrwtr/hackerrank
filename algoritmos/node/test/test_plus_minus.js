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

    it('teste A', function() {
        var nr_posicao = 6;
        
        var arrValores = new Array(
            -4, 3, -9, 0, 4, 1
        );

        var objResult = {
            vl_positivos : 0.500000,
            vl_negativos : 0.333333,
            vl_zeros : 0.166667
        };

        assert.deepEqual(
            objResult,
            objSolucao.plus_minus(nr_posicao, arrValores)
        );
    });

    it('teste B', function() {
        var nr_posicao = 3;
        
        var arrValores = new Array(
            -10, -3, 2
        );

        var objResult = {
            vl_positivos : 0.333333,
            vl_negativos : 0.666667,
            vl_zeros : 0.000000
        };

        assert.deepEqual(
            objResult,
            objSolucao.plus_minus(nr_posicao, arrValores)
        );
    });
});

