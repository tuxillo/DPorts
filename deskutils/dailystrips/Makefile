# New ports collection makefile for:	dailystrips
# Date created:				13 July 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/deskutils/dailystrips/Makefile,v 1.20 2012/11/17 05:55:26 svnexp Exp $
#

PORTNAME=	dailystrips
PORTVERSION=	1.0.28
PORTREVISION=	2
CATEGORIES=	deskutils www
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility to download or view your favorite online comic strips daily

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate

NO_BUILD=	yes
USE_PERL5=	yes

post-patch:
	@${REINPLACE_CMD} 's|^#!/usr/bin/perl|#!${PERL}|; \
		s!/usr/share/dailystrips/strips.def!${DATADIR}/strips.def!' \
		${WRKSRC}/dailystrips ${WRKSRC}/dailystrips-clean \
		${WRKSRC}/dailystrips-update

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/dailystrips ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/dailystrips-clean ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/dailystrips-update ${PREFIX}/bin
	@${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/strips.def ${DATADIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in README README.DEFS README.LOCAL README.dailystrips-clean \
    README.dailystrips-update
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
