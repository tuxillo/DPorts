# New ports collection makefile for:	p5-Jabber-Connection
# Date created:				01 October 2003
# Whom:	      				Lars Eggert
#
# $FreeBSD: ports/net-im/p5-Jabber-Connection/Makefile,v 1.7 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	Jabber-Connection
PORTVERSION=	0.04
CATEGORIES=	net-im perl5
MASTER_SITES=	http://freebsd.unixfreunde.de/sources/
PKGNAMEPREFIX=	p5-

MAINTAINER=	lars.eggert@gmx.net
COMMENT=	Jabber Perl library for client/component connectivity

RUN_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1

PERL_CONFIGURE=	yes

MAN3=		Jabber::Connection.3 Jabber::NS.3 Jabber::NodeFactory.3

.include <bsd.port.mk>
