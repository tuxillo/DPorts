# New ports collection makefile for:	www/p5-Syntax-Highlight-HTML
# Date created:				01 September 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Syntax-Highlight-HTML/Makefile,v 1.7 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Syntax-Highlight-HTML
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Syntax::Highlight::HTML - Highlight HTML syntax

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Syntax::Highlight::HTML.3

.include <bsd.port.mk>
