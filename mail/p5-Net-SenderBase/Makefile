# New ports collection makefile for:	mail/p5-Net-SenderBase
# Date created:				2009 March 18
# Whom:					J.R. Oldroyd <fbsd@opal.com>
#
# $FreeBSD: ports/mail/p5-Net-SenderBase/Makefile,v 1.4 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Net-SenderBase
PORTVERSION=	1.02
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR= CPAN:JOENIO
PKGNAMEPREFIX=	p5-

MAINTAINER=	rnejdl@ringofsaturn.com
COMMENT=	Query the SenderBase service

RUN_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS

PERL_CONFIGURE=	yes

MAN3=		Net::SenderBase.3 \
		Net::SenderBase::Query.3 \
		Net::SenderBase::Results.3

.include <bsd.port.mk>
