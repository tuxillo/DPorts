# New ports collection makefile for:	nethirc
# Date created:		15 Dec 1999
# Whom:			Will Andrews <andrews@technologist.com>
#
# $FreeBSD: ports/irc/nethirc/Makefile,v 1.23 2012/11/17 05:58:29 svnexp Exp $
#

PORTNAME=	NetHirc
PORTVERSION=	0.94
CATEGORIES=	irc
MASTER_SITES=	ftp://ftp.nog.net/pub/tony/nethirc/

MAINTAINER=	matt_mills@btopenworld.com
COMMENT=	Perl-based IRC client that uses Net::IRC

BUILD_DEPENDS=	p5-POE-Component-IRC>=0:${PORTSDIR}/irc/p5-POE-Component-IRC \
		p5-String-Format>=0:${PORTSDIR}/textproc/p5-String-Format \
		p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		nethirc.pl.1
MAN3=		NetHirc.3

.include <bsd.port.mk>
