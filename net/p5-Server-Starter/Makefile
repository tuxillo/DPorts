# New ports collection makefile for:	Server::Starter
# Date created:		02 Apr 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Server-Starter/Makefile,v 1.10 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	Server-Starter
PORTVERSION=	0.12
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KAZUHO
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of superdaemon for hot-deploying server programs

RUN_DEPENDS=	\
	p5-List-MoreUtils>0:${PORTSDIR}/lang/p5-List-MoreUtils \
	p5-Proc-Wait3>0:${PORTSDIR}/devel/p5-Proc-Wait3 \
	p5-Scope-Guard>0:${PORTSDIR}/devel/p5-Scope-Guard
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-SharedFork>0:${PORTSDIR}/devel/p5-Test-SharedFork

PERL_CONFIGURE=	yes

MAN1=	start_server.1
MAN3=	Server::Starter.3

.include <bsd.port.mk>
