# New ports collection makefile for:   p5-Net-DHCPClient
# Date created:                21 October 2005
# Whom:                        Sergey Matveychuk <sem@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-DHCPClient/Makefile,v 1.4 2012/11/17 06:00:10 svnexp Exp $
#

PORTNAME=	Net-DHCPClient
PORTVERSION=	1.0
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sem@FreeBSD.org
COMMENT=	A Perl implementation of a DHCP client API

RUN_DEPENDS+=	p5-Net-RawIP>=0:${PORTSDIR}/net/p5-Net-RawIP
PERL_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=		Net::DHCPClient.3

.include <bsd.port.mk>
