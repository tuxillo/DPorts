# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: ports/net/p5-Net-Pcap/Makefile,v 1.25 2012/12/22 18:13:50 svnexp Exp $

PORTNAME=	Net-Pcap
PORTVERSION=	0.17
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to pcap(3) LBL packet capture library

RUN_DEPENDS=	p5-IO-Interface>=0:${PORTSDIR}/net/p5-IO-Interface
TEST_DEPENDS=	p5-Socket>=0:${PORTSDIR}/net/p5-Socket \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN1=		pcapinfo.1
MAN3=		Net::Pcap.3

.include <bsd.port.mk>
