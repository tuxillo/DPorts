# New ports collection makefile for:    p5-Crypt-Blowfish
# Date created:				2000/09/18
# Whom:					patrick@mindstep.com
#
# $FreeBSD: ports/security/p5-Crypt-Blowfish/Makefile,v 1.11 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Crypt-Blowfish
PORTVERSION=	2.12
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the Blowfish encryption alogorithm

BUILD_DEPENDS=	p5-Crypt-CBC>=0:${PORTSDIR}/security/p5-Crypt-CBC

WRKSRC=		${WRKDIR}/${DISTNAME:C/a$//}
PERL_CONFIGURE=	yes

MAN3=		Crypt::Blowfish.3

.include <bsd.port.mk>
