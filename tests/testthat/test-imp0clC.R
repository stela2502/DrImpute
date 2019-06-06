context( 'imp0clC')

set.seed(1)
ncol = 100
nrow=90
dat = matrix(round(rnorm(ncol*nrow,mean = 0, sd = 1)),ncol=ncol)
dat[which(dat < 1)] = 0
colnames(dat) <- paste('Sample', 1:ncol)
rownames(dat) <- paste( 'gene', 1:nrow)
group = sample( 1:5, ncol, replace = TRUE)

dat = log( dat +1 )

imputed = imp0clC( dat, matrix( group, nrow=1 ))

expect_equal( dim(dat), dim(imputed))

