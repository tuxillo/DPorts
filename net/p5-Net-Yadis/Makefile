# New ports collection makefile for:	p5-Net-Yadis
# Date created:		2006-12-19
# Whom:			Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-Yadis/Makefile,v 1.8 2012/11/17 06:00:12 svnexp Exp $
#

PORTNAME=	Net-Yadis
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Yadis service discovery protocol, and parses XRDS xml documents

RUN_DEPENDS=	p5-XML-XPath>=0:${PORTSDIR}/textproc/p5-XML-XPath \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::Yadis.3

.include <bsd.port.mk>
