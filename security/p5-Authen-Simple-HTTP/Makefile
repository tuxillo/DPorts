# New ports collection makefile for:	Authen-Simple-HTTP
# Date created:				21 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Authen-Simple-HTTP/Makefile,v 1.12 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-Simple-HTTP
PORTVERSION=	0.2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple HTTP authentication

BUILD_DEPENDS=	p5-Authen-Simple>=0:${PORTSDIR}/security/p5-Authen-Simple \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_SAFE=  yes

MAN3=	Authen::Simple::HTTP.3

PERL_MODBUILD=	yes

.include <bsd.port.mk>
