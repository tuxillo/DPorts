# New ports collection makefile for:   p5-HTML-Chunks
# Date created:        27 November 2005
# Whom:                Alexander Koch <fbsd@meersau.de>
#
# $FreeBSD: ports/www/p5-HTML-Chunks/Makefile,v 1.7 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Chunks
PORTVERSION=	1.55.1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	fbsd@meersau.de
COMMENT=	A simple nested template engine for HTML, XML and XHTML

RUN_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy

PERL_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=		HTML::Chunks.3 HTML::Chunks::Local.3 HTML::Chunks::Super.3

.include <bsd.port.mk>
