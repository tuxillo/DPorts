# New ports collection makefile for:	p5-qdbm
# Date created:		2005-09-01
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-qdbm/Makefile,v 1.6 2012/11/17 05:55:17 svnexp Exp $
#

PKGNAMEPREFIX=	p5-

COMMENT=	Perl API for QDBM

SLAVEPORT=	perl
USE_PERL5=	yes

MASTERDIR=	${.CURDIR}/../../databases/qdbm
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/perl
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr
PATCHDIR=	${.CURDIR}/files

MAKE_JOBS_UNSAFE=	yes

.include "${MASTERDIR}/Makefile"
