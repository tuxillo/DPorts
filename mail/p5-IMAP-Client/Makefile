# New ports collection makefile for:	p5-IMAP-Client
# Date created:		2006-08-12
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/mail/p5-IMAP-Client/Makefile,v 1.10 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	IMAP-Client
PORTVERSION=	0.13
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Advanced manipulation of IMAP services w/ referral support

RUN_DEPENDS=	p5-IO-Socket-SSL>=0:${PORTSDIR}/security/p5-IO-Socket-SSL \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-URI-imap>=0:${PORTSDIR}/mail/p5-URI-imap

PERL_CONFIGURE=	yes

MAN3=		IMAP::Client.3

.include <bsd.port.mk>
