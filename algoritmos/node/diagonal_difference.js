var export_obj = {
    diagonal_difference : function (nr_matrix_size, arrMatriz) {
        var nr_size_temp = nr_matrix_size;
        var nr_sum_a = 0;
        var nr_sum_b = 0;

        for (var i = 0; i < nr_matrix_size; i++) {
            nr_size_temp--;
            nr_sum_a += arrMatriz[i][i];
            nr_sum_b += arrMatriz[i][nr_size_temp];
        }

        return Math.abs(nr_sum_a - nr_sum_b);
    }
};

module.exports = export_obj;