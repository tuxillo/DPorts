# New ports collection makefile for:	subtitleoffsetmodificator
# Date created:				19 Marc 2008
# Whom:					Edwin Groothuis <edwin@mavetju.org>
#
# $FreeBSD: ports/multimedia/subtitleoffsetmodifier/Makefile,v 1.3 2012/11/17 05:59:54 svnexp Exp $
#

PORTNAME=	subtitleoffsetmodificator
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	multimedia textproc converters
MASTER_SITES=	http://thomas.enix.org/pub/code/perl/
DISTFILES=	subtitle-offset-modificator.pl

MAINTAINER=	edwin@mavetju.org
COMMENT=	Subtitle offset modificator

USE_PERL5_RUN=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/subtitle-offset-modificator

do-extract:
	${MKDIR} ${WRKDIR}
	${CP} ${DISTDIR}/subtitle-offset-modificator.pl ${WRKDIR}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/subtitle-offset-modificator.pl ${PREFIX}/bin/subtitle-offset-modificator

.include <bsd.port.mk>
