# New ports collection makefile for:	p5-File-Pid
# Date created:		2006-09-05
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-File-Pid/Makefile,v 1.6 2012/11/17 05:56:16 svnexp Exp $
#

PORTNAME=	File-Pid
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Pid File Manipulation

RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		File::Pid.3

post-patch:
	${RM} ${WRKSRC}/lib/File/Pid.pm.orig

.include <bsd.port.mk>
