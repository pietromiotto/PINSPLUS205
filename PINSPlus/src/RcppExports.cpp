// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mat_mul_para
arma::mat mat_mul_para(arma::mat& A, arma::mat& B);
RcppExport SEXP _PINSPlus_mat_mul_para(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_mul_para(A, B));
    return rcpp_result_gen;
END_RCPP
}
// c_transpose
arma::mat c_transpose(arma::mat& A);
RcppExport SEXP _PINSPlus_c_transpose(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(c_transpose(A));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PINSPlus_mat_mul_para", (DL_FUNC) &_PINSPlus_mat_mul_para, 2},
    {"_PINSPlus_c_transpose", (DL_FUNC) &_PINSPlus_c_transpose, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_PINSPlus(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
