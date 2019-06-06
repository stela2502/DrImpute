// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/DrImpute.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// imp0clC
arma::mat imp0clC(const arma::mat X, arma::mat cls);
static SEXP _DrImpute_imp0clC_try(SEXP XSEXP, SEXP clsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cls(clsSEXP);
    rcpp_result_gen = Rcpp::wrap(imp0clC(X, cls));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _DrImpute_imp0clC(SEXP XSEXP, SEXP clsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_DrImpute_imp0clC_try(XSEXP, clsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// imp0clC2
arma::mat imp0clC2(const arma::mat X, arma::mat cls);
static SEXP _DrImpute_imp0clC2_try(SEXP XSEXP, SEXP clsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cls(clsSEXP);
    rcpp_result_gen = Rcpp::wrap(imp0clC2(X, cls));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _DrImpute_imp0clC2(SEXP XSEXP, SEXP clsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_DrImpute_imp0clC2_try(XSEXP, clsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _DrImpute_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*imp0clC)(const arma::mat,arma::mat)");
        signatures.insert("arma::mat(*imp0clC2)(const arma::mat,arma::mat)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _DrImpute_RcppExport_registerCCallable() { 
    R_RegisterCCallable("DrImpute", "_DrImpute_imp0clC", (DL_FUNC)_DrImpute_imp0clC_try);
    R_RegisterCCallable("DrImpute", "_DrImpute_imp0clC2", (DL_FUNC)_DrImpute_imp0clC2_try);
    R_RegisterCCallable("DrImpute", "_DrImpute_RcppExport_validate", (DL_FUNC)_DrImpute_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_DrImpute_imp0clC", (DL_FUNC) &_DrImpute_imp0clC, 2},
    {"_DrImpute_imp0clC2", (DL_FUNC) &_DrImpute_imp0clC2, 2},
    {"_DrImpute_RcppExport_registerCCallable", (DL_FUNC) &_DrImpute_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_DrImpute(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
