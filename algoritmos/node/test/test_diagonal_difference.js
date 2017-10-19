var assert = require('assert');
var objSolucao = require('../diagonal_difference.js');

describe('Diagonal Difference', function() {
    it('teste A', function() {
        var array = new Array(
            new Array(11, 2, 4),
            new Array(4, 5, 6),
            new Array(10, 8, -12)
        );

        var nr_size = 3;

        assert.equal(
            15,
            objSolucao.diagonal_difference(nr_size, array)
        );
    });

    it('teste B', function() {
        var array2 = new Array(
            new Array(11, 2, 4,   51),
            new Array(4,  5, 6,   5),
            new Array(10, 8, -12, 5),
            new Array(10, 8, -12, 5)
        );
        /**
        11+5-12+5 = 9
        51+6+8+10 = 75
        9 - 75 = 66
        */

        var nr_size = 4;

        assert.equal(
            66,
            objSolucao.diagonal_difference(nr_size, array2)
        );
    });
});

