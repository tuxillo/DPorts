# New ports collection makefile for:	sysutils/p5-Filesys-DiskUsage
# Date created:				20 September 2005
# Whom:					Alex Deiter <tiamat@komi.mts.ru>
#
# $FreeBSD: ports/sysutils/p5-Filesys-DiskUsage/Makefile,v 1.9 2012/11/17 06:01:40 svnexp Exp $
#

PORTNAME=	Filesys-DiskUsage
PORTVERSION=	0.05
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Perl equivalent of du(1)

PERL_CONFIGURE=	yes

MAN3=		Filesys::DiskUsage.3

post-patch:
	@${RM} ${WRKSRC}/lib/Filesys/DiskUsage.pm.orig

.include <bsd.port.mk>
