# New ports collection makefile for: mapm3
# Date created:                26 March 2008
# Whom:                        Tassilo Philipp <tphilipp@potion-studios.com>
#
# $FreeBSD: ports/biology/mapm3/Makefile,v 1.3 2012/11/17 05:54:52 svnexp Exp $
#

PORTNAME=	mapm3
PORTVERSION=	3.0
CATEGORIES=	biology
MASTER_SITES=	http://www.broad.mit.edu/ftp/distribution/software/mapmaker3/ \
		ftp://ftp.ibiblio.org/pub/academic/biology/molbio/mapmaker/   \
		http://iubio.bio.indiana.edu/soft/molbio/qtl/mapmaker/        \
		http://www.mirrorservice.org/sites/iubio.bio.indiana.edu/molbio/qtl/mapmaker/
DISTNAME=	mapm3-source
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	tphilipp@potion-studios.com
COMMENT=	Constructs linkage maps of markers segregating in experimental crosses

NO_WRKSUBDIR=	yes
MAKE_JOBS_UNSAFE=	yes

post-patch:
	${CP} ${WRKSRC}/sun/* ${WRKSRC}

.include <bsd.port.mk>
