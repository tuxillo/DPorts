# New ports collection makefile for:	p5-SVN-Agent
# Date created:		2006-07-12
# Whom:			Yuan-Chung Hsiao <ychsiao@ychsiao.org>
#
# $FreeBSD: ports/devel/p5-SVN-Agent/Makefile,v 1.15 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SVN-Agent
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Simple svn manipulation

BUILD_DEPENDS=	p5-subversion>=0:${PORTSDIR}/devel/p5-subversion \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	SVN::Agent.3

.include <bsd.port.mk>
