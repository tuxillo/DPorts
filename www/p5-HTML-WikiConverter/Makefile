# New ports collection makefile for:	p5-HTML-WikiConverter
# Date created:				2005/12/08
# Whom:	      				chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/www/p5-HTML-WikiConverter/Makefile,v 1.17 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-WikiConverter
PORTVERSION=	0.68
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	An HTML to wiki markup converter

BUILD_DEPENDS=	p5-Class-Data-Inheritable>=0.02:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-Params-Validate>=0.77:${PORTSDIR}/devel/p5-Params-Validate \
		p5-CSS>=0:${PORTSDIR}/textproc/p5-CSS \
		p5-HTML-Parser>=3.34:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTML-Tagset>=3.04:${PORTSDIR}/www/p5-HTML-Tagset \
		p5-HTML-Tree>=3.18:${PORTSDIR}/www/p5-HTML-Tree \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		html2wiki.1
MAN3=		HTML::WikiConverter.3 HTML::WikiConverter::Dialects.3 \
		HTML::WikiConverter::Normalizer.3 \
		HTML::WikiConverter::WebApp.3

.include <bsd.port.mk>
