# New ports collection makefile for:	p5-Net-ARP
# Date created:		2006-11-01
# Whom:			Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
#
# $FreeBSD: ports/net/p5-Net-ARP/Makefile,v 1.13 2012/11/17 06:00:10 svnexp Exp $
#

PORTNAME=	Net-ARP
PORTVERSION=	1.0.6
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Perl extension for creating ARP packets

BUILD_DEPENDS=	p5-Net-Pcap>=0:${PORTSDIR}/net/p5-Net-Pcap

PERL_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=	Net::ARP.3

.include <bsd.port.mk>
