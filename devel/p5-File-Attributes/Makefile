# New ports collection makefile for:	devel/p5-File-Attributes
# Date created:				03 April 2007
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-File-Attributes/Makefile,v 1.8 2012/11/17 05:56:15 svnexp Exp $
#

PORTNAME=	File-Attributes
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	File::Attributes - Manipulate file metadata

BUILD_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML \
		p5-Directory-Scratch>=0:${PORTSDIR}/devel/p5-Directory-Scratch \
		p5-Best>=0:${PORTSDIR}/devel/p5-Best \
		p5-YAML-Syck>0:${PORTSDIR}/textproc/p5-YAML-Syck
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	File::Attributes.3 \
	File::Attributes::Base.3 \
	File::Attributes::Simple.3

.include <bsd.port.mk>
