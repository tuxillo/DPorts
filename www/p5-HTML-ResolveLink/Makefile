# New ports collection makefile for:	p5-HTML-ResolveLink
# Date created:		2006-07-10
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-HTML-ResolveLink/Makefile,v 1.8 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-ResolveLink
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Resolve relative links in (X)HTML into absolute URI

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::ResolveLink.3

.include <bsd.port.mk>
