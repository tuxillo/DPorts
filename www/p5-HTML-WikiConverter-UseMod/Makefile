# New ports collection makefile for:	p5-HTML-WikiConverter-UseMod
# Date created:				2006/06/27
# Whom:	      				chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/www/p5-HTML-WikiConverter-UseMod/Makefile,v 1.8 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-WikiConverter-UseMod
PORTVERSION=	0.50
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert HTML to UseMod markup

BUILD_DEPENDS=	p5-HTML-WikiConverter>=0.54:${PORTSDIR}/www/p5-HTML-WikiConverter \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::WikiConverter::UseMod.3

.include <bsd.port.mk>
