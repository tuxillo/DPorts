# New ports collection makefile for:    p5-Authen-Bitcard
# Date created:				2007/01/16
# Whom:	      				chinsan
#
# $FreeBSD: ports/security/p5-Authen-Bitcard/Makefile,v 1.11 2012/12/17 09:58:11 svnexp Exp $
#

PORTNAME=	Authen-Bitcard
PORTVERSION=	0.90
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Bitcard authentication verification

RUN_DEPENDS=	p5-Class-ErrorHandler>=0:${PORTSDIR}/devel/p5-Class-ErrorHandler \
		p5-JSON>=2.12:${PORTSDIR}/converters/p5-JSON \
		p5-URI>=1.22:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=		Authen::Bitcard.3

.include <bsd.port.mk>
