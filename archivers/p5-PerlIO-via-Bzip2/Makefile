# New ports collection makefile for:	PerlIO-via-Bzip2
# Date created:	   18 December 2006
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/archivers/p5-PerlIO-via-Bzip2/Makefile,v 1.8 2012/11/17 05:54:22 svnexp Exp $
#

PORTNAME=	PerlIO-via-Bzip2
PORTVERSION=	0.02
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to provide a PerlIO layer to bzip2/bunzip2

BUILD_DEPENDS=	p5-Compress-Bzip2>=0:${PORTSDIR}/archivers/p5-Compress-Bzip2
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		PerlIO::via::Bzip2.3

.include <bsd.port.mk>
