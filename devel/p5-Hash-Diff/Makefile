# New ports collection makefile for:	Hash-Diff
# Date created:		2012-03-16
# Whom:			Steven Kreuzer <skreuzer@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Hash-Diff/Makefile,v 1.2 2012/11/17 05:56:18 svnexp Exp $
#

PORTNAME=	Hash-Diff
PORTVERSION=	0.005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Return the difference between two hashes as a hash

RUN_DEPENDS=	p5-Hash-Merge>=0.12:${PORTSDIR}/textproc/p5-Hash-Merge
BUILD_DEPENDS=	p5-Hash-Merge>=0.12:${PORTSDIR}/textproc/p5-Hash-Merge

TEST_DEPENDS=	p5-Test-Simple>=0.98:${PORTSDIR}/devel/p5-Test-Simple \
		p5-Test-use-ok>=0.02:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=		Hash::Diff.3

.include <bsd.port.mk>
