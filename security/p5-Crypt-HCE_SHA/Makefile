# New ports collection makefile for:	p5-Crypt-HCE_SHA
# Date created:				October 8th 2001
# Whom:	      				Gregory Neil Shapiro <gshapiro@FreeBSD.org>
#
# $FreeBSD: ports/security/p5-Crypt-HCE_SHA/Makefile,v 1.16 2012/11/17 06:01:11 svnexp Exp $
#

PORTNAME=	Crypt-HCE_SHA
PORTVERSION=	0.70
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl5 interface to one way hash chaining block cipher

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Crypt::HCE_SHA.3

.include <bsd.port.mk>
