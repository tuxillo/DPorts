# ports collection makefile for:	perl interface to Berkeley DB v3
# Date created:				3 January 2001
# Whom:					T. William Wells <bill@twwells.com>
#
# $FreeBSD: ports/databases/p5-BerkeleyDB/Makefile,v 1.49 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	BerkeleyDB
PORTVERSION=	0.51
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PMQS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the Berkeley DB package

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-MLDBM>=0:${PORTSDIR}/databases/p5-MLDBM \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes
USE_BDB=	47+

MAN3=		BerkeleyDB.3

post-patch:
	@${ECHO} "INCLUDE = ${BDB_INCLUDE_DIR}" > ${WRKSRC}/config.in
	@${ECHO} "LIB = ${LOCALBASE}/lib" >> ${WRKSRC}/config.in
	@${ECHO} "DBNAME = -l${BDB_LIB_NAME}" >> ${WRKSRC}/config.in

.include <bsd.port.mk>
