# New ports collection makefile for:	newsgrab
# Date Created:				11 June 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/news/newsgrab/Makefile,v 1.22 2012/11/17 06:00:42 svnexp Exp $
#

PORTNAME=	newsgrab
PORTVERSION=	0.4.0
PORTREVISION=	1
CATEGORIES=	news
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Download and uudecode binary files from USENET using regexps

RUN_DEPENDS=	p5-NNTPClient>=0:${PORTSDIR}/news/p5-NNTPClient \
		p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey \
		p5-News-Newsrc>=0:${PORTSDIR}/news/p5-News-Newsrc \
		p5-Time-modules>=0:${PORTSDIR}/devel/p5-Time-modules

NO_BUILD=	yes
USE_PERL5=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|^#!/usr/bin/perl|#!${PERL}|' ${WRKSRC}/newsgrab.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/newsgrab.pl ${PREFIX}/bin/newsgrab
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/newsgrab
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/newsgrab
	${INSTALL_DATA} ${WRKSRC}/newsgrabrc ${PREFIX}/share/doc/newsgrab
.endif

.include <bsd.port.mk>
