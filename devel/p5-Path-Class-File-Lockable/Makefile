# New ports collection makefile for: 	p5-Path-Class-File-Lockable
# Date created: 			2012-01-22
# Whom:					Tatsuya Ueda <ml+freebsd@tatsuya.info>
#
# $FreeBSD: ports/devel/p5-Path-Class-File-Lockable/Makefile,v 1.3 2012/11/17 05:56:26 svnexp Exp $
#

PORTNAME=	Path-Class-File-Lockable
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KARMAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ml+freebsd@tatsuya.info
COMMENT=	Lock your files with Path::Class::File

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-NFSLock>0:${PORTSDIR}/devel/p5-File-NFSLock \
		p5-Path-Class>0:${PORTSDIR}/devel/p5-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Path::Class::File::Lockable.3

.include <bsd.port.mk>
