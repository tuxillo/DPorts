# New ports collection makefile for:	RRDTool-OO
# Date created:		13 Feb 2006
# Whom:			Stefan Pauly <stefan@fh-mainz.de>
#
# $FreeBSD: ports/devel/p5-RRDTool-OO/Makefile,v 1.23 2012/11/17 05:56:27 svnexp Exp $
#

PORTNAME=	RRDTool-OO
PORTVERSION=	0.32
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	stefan@fh-mainz.de
COMMENT=	RRDTool::OO - Object-oriented interface to RRDTool

BUILD_DEPENDS=	rrdtool>=0:${PORTSDIR}/databases/rrdtool \
		p5-Log-Log4perl>=0.40:${PORTSDIR}/devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		RRDTool::OO.3

.include <bsd.port.mk>
