# New ports collection makefile for:	p5-Tk-ColourChooser
# Date created:				May 28 2001
# Whom:					vanilla
#
# $FreeBSD: ports/x11-toolkits/p5-Tk-ColourChooser/Makefile,v 1.16 2012/11/17 06:03:37 svnexp Exp $
#

PORTNAME=	Tk-ColourChooser
PORTVERSION=	1.52
PORTREVISION=	3
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl/Tk module providing a Colour selection dialogue box

BUILD_DEPENDS=	p5-Tk>=0:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Tk::ColourChooser.3

.include <bsd.port.mk>
