# New ports collection makefile for:	HTML::FromText
# Date created:				04 November 2002
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/www/p5-HTML-FromText/Makefile,v 1.11 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=		HTML-FromText
PORTVERSION=		2.05
PORTREVISION=		1
CATEGORIES=		www perl5
MASTER_SITES=		CPAN
PKGNAMEPREFIX=		p5-

MAINTAINER=		ports@FreeBSD.org
COMMENT=	Mark up text as HTML

BUILD_DEPENDS=	p5-Email-Find>=0:${PORTSDIR}/mail/p5-Email-Find \
		p5-Exporter-Lite>=0:${PORTSDIR}/devel/p5-Exporter-Lite \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=		yes

MAN1=			text2html.1
MAN3=			HTML::FromText.3

.include <bsd.port.mk>
