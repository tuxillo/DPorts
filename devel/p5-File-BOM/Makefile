# Ports collection makefile for:	devel-p5-File-BOM
# Date created:			02 April 2010
# Whom:				Eric Freeman <freebsdports@chillibear.com>
#
# $FreeBSD: ports/devel/p5-File-BOM/Makefile,v 1.4 2012/11/17 05:56:15 svnexp Exp $
#

PORTNAME=	File-BOM
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	File
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsdports@chillibear.com
COMMENT=	Perl module to handle Unicode byte order marks

RUN_DEPENDS=	p5-Test-Exception>0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-Readonly>0:${PORTSDIR}/devel/p5-Readonly \
		p5-Module-Build>=0.3607:${PORTSDIR}/devel/p5-Module-Build
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	File::BOM.3

.include <bsd.port.mk>
