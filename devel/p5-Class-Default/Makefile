# New ports collection makefile for:	Class-Default
# Date created:	   10 December 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Class-Default/Makefile,v 1.16 2012/11/17 05:56:07 svnexp Exp $
#

PORTNAME=	Class-Default
PORTVERSION=	1.51
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Static calls apply to a default instantiation

BUILD_DEPENDS=	p5-Class-Inspector>=0:${PORTSDIR}/devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Class::Default.3

post-patch:
	@${PERL} -pi -e 's/^auto_install.*$$//' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
