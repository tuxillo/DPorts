# New ports collection makefile for:	devel/p5-MooseX-Daemonize
# Date created:				28 Jul 2008
# Whom:					Lars Balker Rasmussen <lbr@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-MooseX-Daemonize/Makefile,v 1.11 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-Daemonize
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Role for daemonizing your Moose based application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=0.33:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Getopt>=0.07:${PORTSDIR}/devel/p5-MooseX-Getopt \
		p5-MooseX-Types-Path-Class>=0:${PORTSDIR}/devel/p5-MooseX-Types-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

DEPRECATED=	Deprecated by upstream, use devel/p5-Daemon-Control instead

PERL_CONFIGURE=	yes

MAN3=	MooseX::Daemonize.3 \
	MooseX::Daemonize::Core.3 \
	MooseX::Daemonize::Pid.3 \
	MooseX::Daemonize::Pid::File.3 \
	MooseX::Daemonize::WithPidFile.3 \
	Test::MooseX::Daemonize.3

.include <bsd.port.mk>
