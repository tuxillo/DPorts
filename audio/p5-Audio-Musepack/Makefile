# New ports collection makefile for:	p5-Audio-Musepack
# Date created:		21 July 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/audio/p5-Audio-Musepack/Makefile,v 1.8 2012/11/17 05:54:40 svnexp Exp $
#

PORTNAME=	Audio-Musepack
PORTVERSION=	1.0.1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to Musepack file information and APE tag fields

BUILD_DEPENDS=	p5-MP3-Info>=1.20:${PORTSDIR}/audio/p5-MP3-Info \
		p5-Audio-Scan>=0.85:${PORTSDIR}/audio/p5-Audio-Scan
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Audio::APE.3 Audio::Musepack.3

.include <bsd.port.mk>
