# New ports collection makefile for:    ltl2ba
# Date created:         25 May 2011
# Whom:                 b.f. <bf@FreeBSD.org>
#
# $FreeBSD: ports/math/ltl2ba/Makefile,v 1.2 2012/11/17 05:59:23 svnexp Exp $
#

PORTNAME=	ltl2ba
PORTVERSION=	1.1
CATEGORIES=	math
MASTER_SITES=	http://www.lsv.ens-cachan.fr/~gastin/ltl2ba/ LOCAL/bf

MAINTAINER=	bf@FreeBSD.org
COMMENT=	Fast translation from LTL formulae to Buechi automata

LICENSE=	GPLv2

ALL_TARGET=	ltl2ba
CFLAGS+=	-DNXT
PLIST_FILES=	bin/ltl2ba

post-patch:
	${REINPLACE_CMD} -e '/^CC=/d' -e '/^CFLAGS=/d' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ltl2ba ${PREFIX}/bin/

.include <bsd.port.mk>
