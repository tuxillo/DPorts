# New ports collection makefile for:	Net-EPP-Proxy
# Date created:				19 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-EPP-Proxy/Makefile,v 1.10 2012/11/17 06:00:10 svnexp Exp $
#

PORTNAME=	Net-EPP-Proxy
PORTVERSION=	0.04
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A proxy server for the EPP protocol

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-IO-Multiplex>=0:${PORTSDIR}/devel/p5-IO-Multiplex \
		p5-Net-EPP>=0.03:${PORTSDIR}/net/p5-Net-EPP \
		p5-Net-Server>=0:${PORTSDIR}/net/p5-Net-Server \
		p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML
RUN_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-IO-Multiplex>=0:${PORTSDIR}/devel/p5-IO-Multiplex \
		p5-Net-EPP>=0.03:${PORTSDIR}/net/p5-Net-EPP \
		p5-Net-Server>=0:${PORTSDIR}/net/p5-Net-Server \
		p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML

MAN3=	Net::EPP::Proxy.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
